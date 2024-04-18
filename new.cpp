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
    string password;
    string email;
    string country;
    DOB dob; 
    
    public:

    void signup()
    {ifstream in;
    ofstream out;
    cout<<""
       cout<<"Enter your Username"<<endl;
       cin>>username;


    }
    
};
class User:public Person
{private:
int bids=30;
public:
User()
{

}
};
class Employer:public Person
{
string oragnization;

};
 int main()
 { 

 }