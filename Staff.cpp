#include<iostream>
#include<string.h>
#include "Employee.h"
#include "Staff.h"
using namespace std;
float total_increment;

Staff :: ~Staff()
{
    this->salary = -1;
    this->level = -1;
    this->working_hours = -1;
}

void Staff :: setSalaryStaff(float sal)
{
    this->salary = sal;
}

float Staff :: getSalaryStaff() const
{
    return this->salary;
}

void Staff :: setLevelStaff(int lev)
{
    this->level = lev;
}

int Staff :: getLevelStaff() const
{
    return this->level;
}
void Staff :: setWorkinHoursStaff(int hours)
{
    this->working_hours = hours;
}

int Staff :: getWorkingHoursStaff() const
{
    return this->working_hours;
}


void Staff :: calculateIncrement()
{
    total_increment = this->salary *(1.1);    
}

int Staff :: calculatePromotedLevel()
{
    if(this->getWorkingHoursStaff() > 500)
    {
        setLevelStaff(this->level + 1);
        return(this->getLevelStaff());
    }
    else
    {
        return(this->getLevelStaff());
    }
}

void Staff :: Display()
{
    cout<<endl;
    cout<<"Name: "<<this->getName()<<endl;
    cout<<"Address: " <<this->getAddress()<<endl;
    cout<<"Phone No.: " <<this->getPhoneNum()<<endl;
    cout<<"Email ID: " <<this->getEmail()<<endl;
    cout<<"Salary: " <<this->getSalaryStaff()<<endl;
    cout<<"Level: " <<this->getLevelStaff()<<endl;
    cout<<"Working Hours: "<<this->getWorkingHoursStaff()<<endl;
    cout<<"Increment in Salary: "<<total_increment<<endl;  
    cout<<"Promoted Level : "<<this->calculatePromotedLevel()<<endl;  
    cout<<endl;
}