#include<iostream>
#include<string.h>
#include "Student.h"
using namespace std;

#ifndef SPONSORED_H
#define SPONSORED_H

class Sponsored : public Student
{
public:
    Sponsored(): Student(){}
    Sponsored(string n, string a, string p, string e, float basicPay, float otherPay, string yearOfGrad): Student(n,a,p,e,basicPay,otherPay,yearOfGrad){
        // cout<<"Hello in sponsored's constructor"<<endl;
        // cout<<"Hello going out of sponsored's constructor"<<endl;
    }
    // Sponsored(const Sponsored& );
    virtual void calculateFee();
    ~Sponsored();
};
#endif