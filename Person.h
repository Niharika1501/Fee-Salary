#include<iostream>
#include<string.h>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person{
private:
    string name;
    string address;
    string phoneNum;
    string email;

public:
    Person();
    Person(string,string,string,string);
    ~Person();

    // getters and setter for name
    void setName(string);
    string getName() const;

    // getters and setter for address
    void setAddress(string);
    string getAddress()const;

    // getters and setter for phoneNum
    void setPhoneNum(string);
    string getPhoneNum()const;

    // getters and setter for email
    void setEmail(string);
    string getEmail()const;

};

#endif