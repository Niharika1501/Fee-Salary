#include<iostream>
#include<string.h>
#include "Student.h"
#include "NonSponsored.h"
using namespace std;

// NonSponsored :: NonSponsored(const NonSponsored& temp)
// {
//     this->setName(temp.getName());
//     this->setAddress(temp.getAddress());
//     this->setPhoneNum(temp.getPhoneNum());
//     this->setEmail(temp.getEmail());
//     this->setBasicFee(temp.getBasicFee());
//     this->setOtherFee(temp.getOtherFee());
//     this->setStatus(temp.getStatus());    
// }
NonSponsored :: ~NonSponsored()
{
    // cout<<"Hello in sponsored's destructor"<<endl;
}
void NonSponsored :: calculateFee()
{
    // cout<<"Hello in calc fee"<<endl;
    float total_fee;
    total_fee = getBasicFee()*(0.7) + getOtherFee();
    
    cout<<endl;
    cout<<"Name: "<<this->getName()<<endl;
    cout<<"Address: " <<this->getAddress()<<endl;
    cout<<"Phone No.: " <<this->getPhoneNum()<<endl;
    cout<<"Email ID: " <<this->getEmail()<<endl;
    cout<<"Status: " <<this->getStatus()<<endl;
    cout<<"Basic Fee: " <<this->getBasicFee()<<endl;
    cout<<"Other Fee: "<<this->getOtherFee()<<endl;
    cout<<"Fees to be paid: "<<total_fee<<endl;  
    cout<<endl;
}