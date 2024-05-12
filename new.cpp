#include<iostream>
#include<vector>
#include<fstream>
#include<string> 
#include<Cstdlib>

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
    string salary;
    string requiredBids;

    void displayJobs(Job &job) {
    	
        cout << "Title: " << job.title << endl;
        cout << "Type: " << job.type << endl;
        cout << "City: " << job.city << endl;
        cout << "Country: " << job.country << endl;
        cout << "Required Bids: " << job.requiredBids << endl;
        cout << "Salary: " << job.salary << endl;
        cout << "Description: " << job.description << endl;
        cout << endl;
        
    
}
	string getTitle(){
		return title;
	}
	void displayStatus(){
		cout<<"Status"<<endl;
	}
};

struct DOB{
	int day;
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
		void displayJobListings();
		void submitBid(Job& job); 
		int getAvailableBids();
		void applyJob(string &usr,const string &jobTitle);
		Finder(){}
    Finder(const string & usr,const string &qual){
    	username = usr;
    	qualification=qual;
    	bids=30;
    	displayProfile();
	}
};

void Finder:: applyJob(string &usr,const string &jobTitle){
	ifstream read;
	read.open("JOBS.txt");
	string JOBTITLE,jobType,jobCity,jobCountry,requiredBids,jobsalary,jobdescr;
	JOBTITLE=jobTitle;
	read>>JOBTITLE>>jobType>>jobCity>>jobCountry>>requiredBids>>jobsalary>>jobdescr;
	getline(read,JOBTITLE,',');
	getline(read,jobType,',');
	getline(read,jobCity,',');
	getline(read,jobCountry,',');
	getline(read,requiredBids,',');
	getline(read,jobsalary,',');
	getline(read,jobdescr);
	int requiredBidsInt = atoi(requiredBids.c_str());
	Finder F;
	if (requiredBidsInt<=F.bids){
		string c_l;
		Job job;
		cout<<"Write your cover letter here: ";
		getline(cin,c_l);
		ofstream out;
		out.open("APPLIED.txt",ios::app);
		out<<username <<","<<JOBTITLE<<","<<jobType<<","<<jobCity<<","<<jobCountry<<","<<requiredBids<<","<<jobsalary<<","<<jobdescr;
		submitBid(job);
	
		
	}
	else{
		cout<<"YOU DON'T have ENough bids!"<<endl<<endl;
	}
	
		
}
void Finder::displayJobListings() {
    ifstream file("JOBS.txt"); 
    if (file.is_open()) {
        while (true) {
            Job job;
            
            getline(file,username,',');
            getline(file, job.title, ',');
            
            getline(file, job.type, ',');
            getline(file, job.city, ',');
            getline(file, job.country, ',');
            getline(file, job.requiredBids, ',');
            getline(file, job.salary, ','); 
            
            file.ignore(); 
            
            getline(file >> ws, job.description);
            
            job.displayJobs(job);
            if (file.eof()) break;
        }
        file.close();
    } else {
        cout << "Unable to open JOBS.txt file." << endl;
    }
}
vector<Job> searchJobs(const string &keyword);
void Finder::displayProfile(){
        cout << "Username: " <<username << endl;
        cout << "Bids: " << bids << endl;
        cout<<"Your Qualification: "<<qualification<<endl;
        cout<<"DOU YOU WANT TO BROWSE JOBS?(1)/n or SEE YOUR APPLICATIONS STATUS?(2)DOU WANT TO SEARCH JOJS BY FILTER?(3) ";
        int choice;
        cin>>choice;
        if (choice==1){
        	displayJobListings();
        	string JOBTITLE;
        	cout<<"Enter the job title you want to apply for: ";
        	cin.ignore();
        	getline(cin,JOBTITLE);
			applyJob(username, JOBTITLE);
			
        	
		}
		else if(choice==2){
			displayStatus();
		}
		else if(choice==3){
			cout<<"enter keyword: "<<endl;
			string keyword;
			cin>>keyword;
			vector<Job> filteredJobs = searchJobs(keyword);
		}
		else
		{
			cout<<"Invalid choice!"<<endl;
			
		}
		
		}
    
    void Finder::submitBid(Job& job) {
    	Finder F;
    int requiredBidsInt = atoi(requiredBids.c_str());
    if (F.bids >= requiredBidsInt) {
        cout << "Bid submitted for job: " << job.title << endl;
        F.bids -= requiredBidsInt; 
        	ifstream in;
		in.open("freelancer.txt",ios::app);
		
    } else {
        cout << "You do not have enough available bids to submit for this job." << endl;
    }
}
int Finder::getAvailableBids() {
	return bids;
}

class Poster: public Person,public Job{
	
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
vector<Job> searchJobs(const string &keyword) {
    ifstream file("JOBS.txt"); 
    vector<Job> filteredJobs;

    if (file.is_open()) {
        while (!file.eof()) {
            Job job;
            getline(file, job.title, ',');
            getline(file, job.type, ',');
            getline(file, job.city, ',');
            getline(file, job.country, ',');
            getline(file, job.requiredBids, ',');
            getline(file, job.salary, ','); 
            
            file.ignore(); 
            getline(file >> ws, job.description);

            
            if (job.title.find(keyword) != string::npos ||
                job.type.find(keyword) != string::npos ||
                job.city.find(keyword) != string::npos ||
                job.country.find(keyword) != string::npos ||
                job.description.find(keyword) != string::npos) {
                filteredJobs.push_back(job);
            }
        }
        file.close();
    } else {
        cout << "Unable to open JOBS.txt file." << endl;
    }
    return filteredJobs;
}

void Poster::postJob(string &username){
	ofstream jobFile;
	jobFile.open("JOBS.txt",ios::app);
	if(!jobFile.is_open()){
		cout<<"ERRR IN OPENING JOBS.txt"<<endl;
		return;
	}
	string jobTitle,jobType,jobCity,jobCountry,jobDescription;
	double jobSalary;
	int requiredBids;
	cout << "Enter job title: ";
    cin.ignore(); 
    getline(cin, jobTitle);

    cout << "Enter job type: ";
    getline(cin, jobType);
    
    cout << "Enter job city: ";
    getline(cin, jobCity);

    cout << "Enter job country: ";
    getline(cin, jobCountry);
    
    cout << "Enter required bids: ";
    cin >> requiredBids;
    
    cout<<"Enter the job budget: $";
    cin>>jobSalary;
    
    cout << "Enter job description: ";
    cin.ignore(); 
    getline(cin, jobDescription);
    
	jobFile<<username<<"," << jobTitle << "," << jobType << "," << jobCity << "," << jobCountry << "," << requiredBids <<","<<jobSalary<< "," << jobDescription << endl;
    
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
    string requiredBids, salary;

    while (!jobFile.eof()) {
        getline(jobFile,employerusername,',');
        
        getline(jobFile,jobTitle,',');
        
        getline(jobFile,jobType,',');
        
        getline(jobFile,jobCity,',');
        
        getline(jobFile,jobCountry,',');
        
        getline(jobFile,requiredBids,',');
        
        getline(jobFile,salary,',');
        getline(jobFile, jobDescription);

        if (employerusername == username) {
            cout << "Job Title: " << jobTitle << endl;
            cout << "Job Type: " << jobType << endl;
            cout << "Job City: " << jobCity << endl;
            cout << "Job Country: " << jobCountry << endl;
            cout << "Required Bids: " << requiredBids << endl;
            cout << "Job Description: " << jobDescription << endl;
            cout << "--------------------------------------" << endl;
        }
	
    if (jobFile.eof()) {
        cout << "You haven't posted any jobs yet." << endl;
    }

    
}
jobFile.close();
}
int header();
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
    out.open("freelancer.txt", ios::app); 
    if (!out.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        continue; 
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
    out.close(); 
    cout << "\n\nCredentials have been added into DataBase Successfully!\n\n";
}
		
		if(n==2)
	{
    in.open("freelancer.txt");
    if (!in.is_open()) {
        cerr << "Error: Unable to open file for reading." << endl;
        continue; 
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
    Finder F1(username, qualification);
}
	else {
        cout << "\n\nIncorrect Password!\n\n";
    }
    in.close();
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
			in.seekg(0, ios::beg);
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
