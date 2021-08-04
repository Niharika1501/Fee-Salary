#include<iostream>
#include<string.h>
#include "Employee.h"
using namespace std;

#ifndef STAFF_H
#define STAFF_H

class Staff : public Employee
{   
private:
    float salary;
    int level;
    int working_hours;
public:
    Staff(): Employee()
    {
        this->salary = -1;
        this->level = -1;
        this->working_hours = -1;
    }
    Staff(string n, string a, string p, string e,float sal, int lev, int hours): Employee(n,a,p,e)
    {
       this->salary = sal;
       this->level = lev;
       this->working_hours = hours;
    }
    virtual void calculateIncrement();
    virtual int calculatePromotedLevel();
    void Display();
    ~Staff();
    void setSalaryStaff(float);
    float getSalaryStaff() const;

    void setLevelStaff(int);
    int getLevelStaff() const;

    void setWorkinHoursStaff(int);
    int getWorkingHoursStaff() const;
};
#endif