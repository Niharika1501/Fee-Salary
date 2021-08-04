#include<iostream>
#include "Person.h"
using namespace std;

Person :: Person()
{
    this->name = '\0';
    this->address = '\0';
    this->phoneNum = '\0';
    this->email = '\0';
}

Person :: Person(string n, string a, string p, string e)
{
    // cout<<"Hello in parent's constructor"<<endl;
    this->name = n;
    this->address = a;
    this->phoneNum = p;
    this->email = e;
    // cout<<"Hello going out of parent's constructor"<<endl;  
}

Person :: ~Person()
{
    // cout<<"Hello in parent's destructor"<<endl;
    this->name = '\0';
    this->address = '\0';
    this->phoneNum = '\0';
    this->email = '\0';
}
void Person :: setName(string n)
{
    this->name = n;
}

string Person :: getName() const
{
    return this->name;
}

void Person :: setAddress(string a)
{
    this->address = a;
}

string Person :: getAddress() const
{
    return this->address;
}

void Person :: setPhoneNum(string p)
{
    this->phoneNum = p;
}

string Person :: getPhoneNum() const
{
    return this->phoneNum;
}

void Person :: setEmail(string e)
{
    this->email = e;
}

string Person :: getEmail() const
{
    return this->email;
}