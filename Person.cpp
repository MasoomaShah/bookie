#include "pch.h"
#include <string>
#include <iostream>
#include "Person.h"


using namespace std;


    void Person::setusername(string u)
    {
       u=username;

    }
    string  Person::getusername( )
    {
        return username;
    }
    void Person::setpassword(string p)
    {
        p=password;

    }
    string Person::getpassword()
    {
        return password;
    }

  
