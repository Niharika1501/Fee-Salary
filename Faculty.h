#include<iostream>
#include<string.h>
#include "Employee.h"
using namespace std;

#ifndef FACULTY_H
#define FACULTY_H

class Faculty : public Employee
{   
private:
    float salary;
    int level;
    int working_hours;
public:
    Faculty(): Employee()
    {
        this->salary = -1;
        this->level = -1;
        this->working_hours = -1;
    }
    Faculty(string n, string a, string p, string e,float sal, int lev, int hours): Employee(n,a,p,e)
    {
       this->salary = sal;
       this->level = lev;
       this->working_hours = hours;
    }
    virtual void calculateIncrement();
    virtual int calculatePromotedLevel();
    void Display();
    ~Faculty();
    void setSalary(float);
    float getSalary() const;

    void setLevel(int);
    int getLevel() const;

    void setWorkinHours(int);
    int getWorkingHours() const;
};
#endif