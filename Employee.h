#include<iostream>
#include<string.h>
#include "Person.h"
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee : public Person
{

public:
    Employee():Person(){}
    virtual void calculateIncrement() = 0;
    virtual int calculatePromotedLevel() = 0;
    virtual void Display() = 0;
    Employee(string n, string a, string p, string e):Person(n,a,p,e){}
    ~Employee();

};

#endif