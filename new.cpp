#include <iostream>
#include <fstream>

int av_jobs_no=3;
int sr_no;

using namespace std;
string available_jobs[]={"Cook","Engineer","Electrician"};
string where_the_jobs_at[]={"Lahore","Islamabad","Karachi"};
int no_of_vacancies[]={1,2,1};
void display_job_vacancies()
{for(int i=0;i<av_jobs_no;i++)
   { cout<<"SR number"<<i<<endl;
   cout<<"Vacancy for the Post of"<<"  "<<available_jobs[i]<<endl;
   cout<<"Location"<<"  "<<where_the_jobs_at[i]<<endl;
   cout<<"Number of vacancies left"<<"  "<<no_of_vacancies[i]<<endl;
   }
}
void header();


struct DOB
{
int date;
int month;
int year;
};
class Person
{
    protected:
    string username;
    string password1;
    string password2;
    string password_saved;
    string email;
    string phone_no;
    string country;
    DOB dob;
    
 
    
    public:
    
    void signup()
    {ifstream in;
    ofstream out;
       cout<<"Enter your Username"<<endl;
       cin>>username;
       cout<<"Enetr your email"<<endl;
       cin>>email;
       cout<<"enter password"<<endl;
       cin>>password1;
       cout<<"Confirm password"<<endl;
       cin>>password2;
       if(password1!=password2)
       do{{
       cout<<"passwords do not match,please enter again"<<endl;
       cout<<"enter password"<<endl;
       cin>>password1;
       cout<<"Confirm password"<<endl;
       cin>>password2;
       }}
       while(password1!=password2);
       password_saved=password2;
       cout<<"Please choose your country"<<endl;
       cin>>country;
       
       

    }
    void signin()
    {
        
        cout << "enter email";
        cin>>email;
        cout<<"enter password";
        cin>>password1;
        if(password1!=password_saved)
        do{
            cout<<"Incorrect password or email address, please try again"<<endl;
        }
        while(password1!=password_saved);
    }
    void forgot_password()
    {
        cout<<"Enter phone number"<<endl;
        cin>>phone_no;
        cout<<"Enter email"<<endl;
        cin>>email;
        cout<<"enter password"<<endl;
       cin>>password1;
       cout<<"Confirm New password"<<endl;
       cin>>password2;
       if(password1!=password2)
       do{{
       cout<<"passwords do not match,please enter again"<<endl;
       cout<<"enter password"<<endl;
       cin>>password1;
       cout<<"Confirm password"<<endl;
       cin>>password2;
       }}
       while(password1!=password2);
       password_saved=password2;

        
    }
    


class User:public Person
{private:
string resume;
int bids=30;
string option;
public:
friend int calculate_bids();
string search;
void search_job (string &s)
{

for(int j=0;j<av_jobs_no;j++)
    {
      if(search==available_jobs[j])
      {
void display_job_vacancies();
      }
}}};

User()
{string reg;
cout<<"Sign in \n Sign up \n Forgot password\n";
cin>>reg;
if(reg=="sign_in" ||reg=="Sign In")
{
     signin();
}
else if(reg=="sign up" ||reg=="Sign Up")
{
     signup();
}
else if(reg=="forgot password" ||reg=="Forgot Password")
{
     forgot_password();
}
else
{
header();
}
display_job_vacancies();
search_job (search);
cout<<"Plaese enter sr.no of the job you wish to apply for"<<endl;
cin>>sr_no;
cout<<"upload resume"<<endl;
cin>>resume;



}




;
class Employer:public Person
{private:
string job_title;
int available_bids;
int rank;
public:
string oragnization;
friend void appliction();
Employer()
{string reg;
cout<<"Sign in \n Sign up \n Forgot password\n";
cin>>reg;
if(reg=="sign_in" ||reg=="Sign In")
{
     signin();
}
else if(reg=="sign up" ||reg=="Sign Up")
{
     signup();
}
else if(reg=="forgot password" ||reg=="Forgot Password")
{
     forgot_password();
}
else
{
header();
}


available_bids=calculate_bids();


};
void add_a_job()
{
cout<<"Enter jon title"<<endl;
cin>>job_title;
cout<<"enter rank"<<endl;
cin>>rank;
}
void appliction()
{bool Status;
cout<<"Someone has applied for the position"<<endl;
cout<<available_jobs[sr_no]<<endl;
cout<<where_the_jobs_at[sr_no]<<endl;
cout<<no_of_vacancies[sr_no]<<endl;
cout<<"Do you approve?"<<endl;
cin>>Status;
if(Status==1)
{
      
no_of_vacancies[sr_no]--;
if(no_of_vacancies[sr_no]==0)
{
for(int j=0;j<av_jobs_no;j++)
    {available_jobs[j]=available_jobs[j+1];
    where_the_jobs_at[j]=where_the_jobs_at[j+1];
    no_of_vacancies[j]=no_of_vacancies[j+1];
    av_jobs_no--;}
    }

}


}
int calculate_bids()
{
    if (rank==5)
   { return 100;}
     if (rank==4)
   { return 70;}
     if (rank==3)
   { return 50;}
     if (rank==2)
   { return 25;}
     if (rank==1)
   { return 10;}
}};


void header()
{
    string user_type;
    cout<<"JOBEEEEEEEE"<<endl;
    cout<<"ARE YOU A FREELANCER OR A EMPLOYER LOOKING FOR A  FREELANCER?"<<endl;
    cin>>user_type;
    if(user_type=="FREELANCER")
    {
        User U1;

    }
    else if(user_type == "EMPLOYEER")
    {
        Employer E;
    }
}



 int main(){

 header();
 

 }