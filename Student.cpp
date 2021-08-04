#include<iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

Student :: ~Student()
{
    // cout<<"Hello in student's destructor"<<endl;
    this->basic_fee = -1;
    this->other_fee = -1;
    this->status = '\0';
}

void Student :: setBasicFee(float basicPay)
{
    this->basic_fee = basicPay;
}

float Student :: getBasicFee() const
{
    return this->basic_fee;
}

void Student :: setOtherFee(float otherPay)
{
    this->other_fee = otherPay;
}

float Student :: getOtherFee() const
{
    return this->other_fee;
}

void Student :: setStatus(string yearOfGrad)
{
    this->status = yearOfGrad;
}

string Student :: getStatus() const
{
    return this->status;
}
