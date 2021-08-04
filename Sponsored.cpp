#include<iostream>
#include<string.h>
#include "Student.h"
#include "Sponsored.h"
using namespace std;

// Sponsored :: Sponsored(const Sponsored& temp)
// {
//     this->setName(temp.getName());
//     this->setAddress(temp.getAddress());
//     this->setPhoneNum(temp.getPhoneNum());
//     this->setEmail(temp.getEmail());
//     this->setBasicFee(temp.getBasicFee());
//     this->setOtherFee(temp.getOtherFee());
//     this->setStatus(temp.getStatus());    
// }
Sponsored :: ~Sponsored()
{
    // cout<<"Hello in sponsored's destructor"<<endl;
}
void Sponsored :: calculateFee()
{
    // cout<<"Hello in calc fee"<<endl;
    float total_fee;
    if(getStatus()=="Freshman")
    {
        total_fee = getBasicFee() + getOtherFee();
    }
    else if(getStatus()=="Sophomore")
    {
        total_fee = getBasicFee() + 2*getOtherFee();
    }
    else if(getStatus()=="Junior")
    {
        total_fee = getBasicFee() + 3*getOtherFee();
    }
    else
    {
        total_fee = getBasicFee() + 4*getOtherFee();
    }
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