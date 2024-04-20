#include <iostream>
#include <fstream>

using namespace std;
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
        cout<<"enter email";
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
    
};
class User:public Person
{private:
int bids=30;
string option;
public:
User()
{
cout<<"SIgn in \n Sign up \n Forgot password\n";
}
};
class Employer:public Person
{
string oragnization;

};
 int main()
 { cout<<"ARE YOU A CLIENT OR A FREELANCER LOOKING FOR WORK"<<endl;
 

 }