#include<iostream>
#include<string.h>
#include "Person.h"
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student : public Person
{
private:
    float basic_fee;
    float other_fee;
    string status;
public:
    virtual void calculateFee() = 0;
    Student():Person(){
        this->basic_fee = -1;
        this->other_fee = -1;
        this->status = '\0';
    }
    Student(string n, string a, string p, string e,float basicPay, float otherPay, string yearOfGrad):Person(n,a,p,e)
    {
        // cout<<"Hello in student's constructor"<<endl;  
        this->basic_fee = basicPay;
        this->other_fee = otherPay;
        this->status = yearOfGrad;
        // cout<<"Hello going out of student's constructor"<<endl;
    }
    ~Student();
    void setBasicFee(float);
    float getBasicFee() const;

    void setOtherFee(float);
    float getOtherFee() const;

    void setStatus(string);
    string getStatus() const;
};

#endif