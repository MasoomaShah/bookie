#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int user=0;
int bids = 30;
class Job{
	public:
    string title;
    string description;
    string type;
    string city;
    string country;
    int requiredBids;

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << "Type: " << type << endl;
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
        cout << "Required Bids: " << requiredBids << endl;
    }
    void displayJobs(){
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << "Type: " << type << endl;
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
        cout << "Required Bids: " << requiredBids << endl;
    	
	}
	void displayStatus(){
		cout<<"STatus"<<endl;
	}
};


struct DOB
{
int date;
int month;
int year;
};
class Person{
	public:
	string username;
    string password;
    string email;
    string phone_no;
    string country;
    DOB dob;
    
    public:
    	friend int login();
    	friend int header();
};


class Finder: public Person, public Job{
	//definition
	protected:
	int bids;
	string qualification;
	public:
		void displayProfile();
		Finder(){
			bids=30;
		}
    Finder(const string & usr,const string &qual){
    	username = usr;
    	qualification=qual;
    	bids=30;
    	displayProfile();
	}
};
void Finder::displayProfile(){
        cout << "Username: " <<username << endl;
        cout << "Bids: " << bids << endl;
        cout<<"Your Qualification: "<<qualification<<endl;
        cout<<"DOU YOU WANT TO BROWSE JOBS?(1)/n or SEE YOUR APPLICATIONS STATUS?(2) ";
        int choice;
        cin>>choice;
        if (choice==1){
        	displayJobs();
		}
		else if(choice==2){
			displayStatus();
		}
		else
		{
			cout<<"Invalid choice!"<<endl;
			
		}
		
		}

class Poster: public Person{
	//definition
	public:
		void viewPostedJobs(string & username);
		void postJob(string &username);
	Poster(string &username) {
    	char e1,e2;
    	cout<<"If you want to post a job press y otherwise n: ";
    	cin>>e1;
    	if (e1=='y'||e1=='Y'){
    		cout<<"POST JOB"<<endl;
    		postJob(username);	
		}
		else if(e1=='n'||'N'){
			cout<<"DO you want to see posted jobs? y/n: ";
			cin>>e2;
			switch (e2){
				case 'y':
					viewPostedJobs(username);
					break;
				case 'Y':
					viewPostedJobs(username);
					break;
				case 'n':
					break;
				case 'N':
					break;
			}
		}
    }
};
void Poster::postJob(string &username){
	ofstream jobFile;
	jobFile.open("JOBS.txt",ios::app);
	if(!jobFile.is_open()){
		cout<<"ERRR IN OPENING JOBS.txt"<<endl;
		return;
	}
	string jobTitle,jobType,jobCity,jobCountry,jobDescription;
	int requiredBids;
	cout << "Enter job title: ";
    cin.ignore(); // Clear input buffer
    getline(cin, jobTitle);

    cout << "Enter job type: ";
    getline(cin, jobType);
    
    cout << "Enter job city: ";
    getline(cin, jobCity);

    cout << "Enter job country: ";
    getline(cin, jobCountry);
    
    cout << "Enter required bids: ";
    cin >> requiredBids;
    
    cout << "Enter job description: ";
    cin.ignore(); // Clear input buffer
    getline(cin, jobDescription);
    
    jobFile << username <<endl;
	jobFile << jobTitle << " " << jobType << " " << jobCity << " " << jobCountry << " " << requiredBids << " " << jobDescription << endl;
    
    cout<<"JOB POSTED SUCCESSFULLY!"<<endl;
    
    jobFile.close();
}

void Poster::viewPostedJobs(string& username) {
    ifstream jobFile("JOBS.txt");
    if (!jobFile.is_open()) {
        cout << "Error: Unable to open file for reading." << endl;
        return;
    }
    jobFile.seekg(0, ios::beg);

    cout << "Your Posted Jobs:" << endl;

    string employerusername, jobTitle, jobType, jobCity, jobCountry, jobDescription;
    int requiredBids;

    // Read each line of the file
     bool found = false;

    do {
    	jobFile >> employerusername >> jobTitle >> jobType >> jobCity >> jobCountry >> requiredBids;
        
        if (employerusername == username) {
            found = true;
            // Read job description (including spaces)
            getline(jobFile, jobDescription);
			
            cout << "Job Title: " << jobTitle << endl;
            cout << "Job Type: " << jobType << endl;
            cout << "Job City: " << jobCity << endl;
            cout << "Job Country: " << jobCountry << endl;
            cout << "Required Bids: " << requiredBids << endl;
            cout << "Job Description: " << jobDescription << endl;
            cout << "--------------------------------------" << endl;
            
        }
    
       
        else {
            // Skip the job description line
            string temp;
            getline(jobFile, temp);
        }
        
    }
     while (jobFile >> employerusername >> jobTitle >> jobType >> jobCity >> jobCountry >> requiredBids);
	
    // Check if no jobs were found for the given username
    if (!jobFile.eof()) {
        cout << "You haven't posted any jobs yet." << endl;
    }

    jobFile.close();
}

int header();
vector<Job> loadJobsFromFile();
void displayJobListings(const vector<Job>& jobs);

int header(){
	//definition
	string user_type;
    cout<<"JOBEEEEEEEE"<<endl;
    cout<<"ARE YOU A FREELANCER OR A EMPLOYER LOOKING FOR A  FREELANCER?"<<endl;
    cin>>user_type;
    if (user_type=="Freelancer"||user_type=="FREELANCER"){
        user=1;
        cout<<"FIND THE JOB YOU WANT!"<<endl<<endl;
    }
    else if (user_type=="Employer"||user_type=="EMPLOYER"){
        user=2;
        cout<<"FIND A COLLEAGUE!"<<endl<<endl;
    }
    return user;
}

int login(){
	//definition
	ofstream out;
	ifstream in;
	header();
	while(user==1){
		
        int n;
		cout<<"1. Sign Up!\n";
		cout<<"2. Sign In!\n";
		cout<<"0. Quit\n\n";
		cout<<"Enter your choice: ";
		cin>>n;
        if(n == 0)
		{
			return 0;
		}
		
		else if(n == 1)
		{
    out.open("freelancer.txt", ios::app); // Open file in append mode
    if (!out.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        continue; // Return to menu if unable to open file
    }
    Person P;
    string qualification;
    cout << "\n\nSIGN UP Page FOR FREELANCER\n\n";
    cout << "Enter Username: ";
    cin >> P.username;
    cout << "Enter Password: ";
    cin >> P.password;
    cout << "Enter Date of Birth (DDMMYYY): ";
    cout<<"Day: ";
    cin >> P.dob.day;
    cout << "Enter your Qualification: ";
    cin >> qualification;
     // Initialize bids
    out << P.username << " " << P.password << " " << P.dob.day << " " << qualification << " " <<bids << endl;
    out.close(); // Close the file after writing
    cout << "\n\nCredentials have been added into DataBase Successfully!\n\n";
}
		
		if(n==2)
	{
    in.open("freelancer.txt");
    if (!in.is_open()) {
        cerr << "Error: Unable to open file for reading." << endl;
        continue; // Return to menu if unable to open file
    }
    string inputUsername, inputPassword;
    cout << "\n\nWe are in Customer LOG IN Page\n\n";
    cout << "Enter Username: ";
    cin >> inputUsername;

    string username, password, DOB, qualification, bids;
    bool userFound = false;

    while (in >> username >> password >> DOB >> qualification >> bids) {
        if (username == inputUsername) {
            userFound = true;
            break;
        }
    }

    if (!userFound) {
        cout << "\n\nUsername not found in the database." << endl;
        continue;
    }

    cout << "Username Found! " << username << endl;
    cout << "Enter Password: ";
    cin >> inputPassword;
if (password == inputPassword) {
    cout << "\n\nLOG IN Successfully!\n\n";
    // User type object // Convert string to integer
    Finder F1(username, qualification);
}
	else {
        cout << "\n\nIncorrect Password!\n\n";
    }
    in.close(); // Close the file after reading
}
}
while(user==2){
    	int n;
		cout<<"1. Sign Up!\n";
		cout<<"2. Sign In!\n";
		cout<<"0. Quit\n\n";
		cout<<"Enter your choice: ";
		cin>>n;
        if(n == 0)
		{
			return 0;
		}
		
		else if(n == 1)
		{
			out.open ("employer.txt", ios::app);
			string username, password, DOB,company;
			cout<<"\n\nSIGN UP Page FOR EMPLOYER\n\n";
			cout<<"Enter Username: ";
			cin>>username;
			cout<<"Enter Password: ";
			cin>>password;
			cout<<"Enter Date of Birth (DDMMYYY): ";
			cin>>DOB;
            cout<<"Your organization name or company? ";
            cin>>company;
					
			out<<username<<endl;
			out<<password<<endl;
			out<<DOB<<endl;
            out<<company<<endl;
			
			cout<<"\n\nCredentials has been added into DataBase Successfully!\n\n";			
		}
		
		if(n==2)
		{
			in.open ("employer.txt");
			string inputUsername, inputPassword;
			cout<<"\n\nWe are in employer LOG IN Page\n\n";
			cout<<"Enter Username: ";
			cin>>inputUsername;
			
			string username, password, DOB,company;
			
			int userNotFound = 1;
			
			while(!in.eof())
			{
				in>>username>>password>>DOB>>company;
				if(username == inputUsername)
				{
					userNotFound = 0;
					break;
				}	
			}			
			
			if(userNotFound == 1)
			{
				cout<<"\n\nIncorrect Username!\nUser name doesnot exist in DataBase\n\n";
				continue;
			}
			
			cout<<"Username Found! "<<username;
			cout<<"\nEnter Password: ";
			cin>>inputPassword;
			
			if(password == inputPassword)
			{
				cout<<"\n\nLOG IN Successfully!\n\n";
				cout<<company<<endl<<endl;
				Poster P(username);
				return 1;
			}
			
			else
			{
				cout<<"\n\nIncorrect Password!!\n\n";
				continue;
			}
		}
	}
}
int main(){
   login();
}

