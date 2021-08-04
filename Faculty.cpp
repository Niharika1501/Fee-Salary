#include<iostream>
#include<string.h>
#include "Employee.h"
#include "Faculty.h"
using namespace std;
float total_incrementF;

Faculty :: ~Faculty()
{
    this->salary = -1;
    this->level = -1;
    this->working_hours = -1;
}

void Faculty :: setSalary(float sal)
{
    this->salary = sal;
}

float Faculty :: getSalary() const
{
    return this->salary;
}

void Faculty :: setLevel(int lev)
{
    this->level = lev;
}

int Faculty :: getLevel() const
{
    return this->level;
}
void Faculty :: setWorkinHours(int hours)
{
    this->working_hours = hours;
}

int Faculty :: getWorkingHours() const
{
    return this->working_hours;
}


void Faculty :: calculateIncrement()
{
    total_incrementF = this->salary *(1.25);    
}

int Faculty :: calculatePromotedLevel()
{
    if(this->getWorkingHours() > 1000)
    {
        setLevel(this->level + 1);
        return(this->getLevel());
    }
    else
    {
        return(this->getLevel());
    }
}

void Faculty :: Display()
{
    cout<<endl;
    cout<<"Name: "<<this->getName()<<endl;
    cout<<"Address: " <<this->getAddress()<<endl;
    cout<<"Phone No.: " <<this->getPhoneNum()<<endl;
    cout<<"Email ID: " <<this->getEmail()<<endl;
    cout<<"Salary: " <<this->getSalary()<<endl;
    cout<<"Level: " <<this->getLevel()<<endl;
    cout<<"Working Hours: "<<this->getWorkingHours()<<endl;
    cout<<"Increment in Salary: "<<total_incrementF<<endl;  
    cout<<"Promoted Level : "<<this->calculatePromotedLevel()<<endl;  
    cout<<endl;
}