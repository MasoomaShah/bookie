#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
   
    struct DOB {};
  
    string username="me";
    string password = "uf";
    string password_saved;
    string email = "smaso@gmail.com";
    string phone_no = "033736487";
    string country = "Pakistan";
    string status = "accepted";
    string suusername;
    string supassword1;
    string supasswor2;
    string suemail;
    string statuss = "user";

    DOB dob;

    int av_jobs_no = 3;
    int sr_no;
 
    
   string getusername();
    void setusername(string );
    void setpassword(string );
    string  getpassword();

   

};

