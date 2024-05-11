#pragma once
#include "Person.h"
#include <string>
 class Employer :public Person
{
public:
    string job_title;
    int available_bids;
    int rank;
    string oragnization;
    string coverletter1;
    string coverletter2;
    void setcl1(string s);
    string getcl1();
   

   
 };



