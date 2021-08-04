#include<bits/stdc++.h>
#include "Sponsored.h"
#include "NonSponsored.h"
#include "Faculty.h"
#include "Staff.h"
using namespace std;

int main()
{   
    int numOfSponStud;
    std::cout<<"Enter number of Sponsored Students:"<<" ";
    std::cin>>numOfSponStud;
    // NonSponsored *NS = (NonSponsored*)malloc(sizeof(NonSponsored)*numOfSponStud);
    Sponsored S[numOfSponStud];
    // Sponsored Temp("No name","NULL","NULL","NULL",-1,-1,"NULL");
    string goodName,residence,mobileNum,mailID,stats;
    float basicFee,otherFee;    
    for(int i = 0; i < numOfSponStud; i++)
    {   
        // S[i] = Temp;
        // std::cout<<"Hello after constructing"<<endl;
        std::cout<<"Enter name: "<<" ";
        std::cin>>goodName;
        std::cout<<"Enter address: "<<" ";
        std::cin>>residence;
        std::cout<<"Enter Phone Number: "<<" ";
        std::cin>>mobileNum;
        std::cout<<"Enter email ID: "<<" ";
        std::cin>>mailID;
        std::cout<<"Enter status: "<<" ";
        std::cin>>stats; 
        std::cout<<"Enter Basic Fee: "<<" ";
        std::cin>>basicFee;  
        std::cout<<"Enter Other Fee: "<<" ";
        std::cin>>otherFee;
        // S[i] = Sponsored("No name","NULL","NULL","NULL",-1,-1,"NULL");
        //NS[i] = NonSponsored(goodName,residence,mobileNum,mailID,basicFee,otherFee,stats);
        S[i].setName(goodName);
        S[i].setAddress(residence);
        S[i].setPhoneNum(mobileNum);
        S[i].setEmail(mailID);
        S[i].setBasicFee(basicFee);
        S[i].setOtherFee(otherFee);
        S[i].setStatus(stats);
    }
    
    int numOfNonSponStud;
    std::cout<<"Enter number of Non Sponsored Students:"<<" ";
    std::cin>>numOfNonSponStud;
    // NonSponsored *NS = (NonSponsored*)malloc(sizeof(NonSponsored)*numOfSponStud);
    Sponsored NS[numOfNonSponStud];
    // Sponsored Temp("No name","NULL","NULL","NULL",-1,-1,"NULL");
    string goodNameNon,residenceNon,mobileNumNon,mailIDNon,statsNon;
    float basicFeeNon,otherFeeNon;    
    for(int i = 0; i < numOfNonSponStud; i++)
    {   
        // S[i] = Temp;
        // std::cout<<"Hello after constructing"<<endl;
        std::cout<<"Enter name: "<<" ";
        std::cin>>goodNameNon;
        std::cout<<"Enter address: "<<" ";
        std::cin>>residenceNon;
        std::cout<<"Enter Phone Number: "<<" ";
        std::cin>>mobileNumNon;
        std::cout<<"Enter email ID: "<<" ";
        std::cin>>mailIDNon;
        std::cout<<"Enter status: "<<" ";
        std::cin>>statsNon; 
        std::cout<<"Enter Basic Fee: "<<" ";
        std::cin>>basicFeeNon;  
        std::cout<<"Enter Other Fee: "<<" ";
        std::cin>>otherFeeNon;
        // S[i] = Sponsored("No name","NULL","NULL","NULL",-1,-1,"NULL");
        //NS[i] = NonSponsored(goodName,residence,mobileNum,mailID,basicFee,otherFee,stats);
        NS[i].setName(goodNameNon);
        NS[i].setAddress(residenceNon);
        NS[i].setPhoneNum(mobileNumNon);
        NS[i].setEmail(mailIDNon);
        NS[i].setBasicFee(basicFeeNon);
        NS[i].setOtherFee(otherFeeNon);
        NS[i].setStatus(statsNon);
    }


    int numOfFaculty;
    std::cout<<"Enter number of Faculty Members:"<<" ";
    std::cin>>numOfFaculty;
    // NonSponsored *NS = (NonSponsored*)malloc(sizeof(NonSponsored)*numOfSponStud);
    Faculty F[numOfFaculty];
    // Sponsored Temp("No name","NULL","NULL","NULL",-1,-1,"NULL");
    string goodNameF,residenceF,mobileNumF,mailIDF;
    float salaryF;
    int levelF,hoursF;    
    for(int i = 0; i < numOfFaculty; i++)
    {   

        std::cout<<"Enter name: "<<" ";
        std::cin>>goodNameF;
        std::cout<<"Enter address: "<<" ";
        std::cin>>residenceF;
        std::cout<<"Enter Phone Number: "<<" ";
        std::cin>>mobileNumF;
        std::cout<<"Enter email ID: "<<" ";
        std::cin>>mailIDF;
        std::cout<<"Enter Salary: "<<" ";
        std::cin>>salaryF;  
        std::cout<<"Enter Level: "<<" ";
        std::cin>>levelF;
        std::cout<<"Enter Working hours: "<<" ";
        std::cin>>hoursF;

        // S[i] = Sponsored("No name","NULL","NULL","NULL",-1,-1,"NULL");
        //NS[i] = NonSponsored(goodName,residence,mobileNum,mailID,basicFee,otherFee,stats);
        F[i].setName(goodNameF);
        F[i].setAddress(residenceF);
        F[i].setPhoneNum(mobileNumF);
        F[i].setEmail(mailIDF);
        F[i].setSalary(salaryF);
        F[i].setLevel(levelF);
        F[i].setWorkinHours(hoursF);
    }
    
    int numOfStaff;
    std::cout<<"Enter number of Staff Members:"<<" ";
    std::cin>>numOfStaff;
    // NonSponsored *NS = (NonSponsored*)malloc(sizeof(NonSponsored)*numOfSponStud);
    Staff SF[numOfStaff];
    // Sponsored Temp("No name","NULL","NULL","NULL",-1,-1,"NULL");
    string goodNameS,residenceS,mobileNumS,mailIDS;
    float salaryS;    
    int levelS,hoursS;
    
    for(int i = 0; i < numOfStaff; i++)
    {   
        // S[i] = Temp;
        // std::cout<<"Hello after constructing"<<endl;
        std::cout<<"Enter name: "<<" ";
        std::cin>>goodNameS;
        std::cout<<"Enter address: "<<" ";
        std::cin>>residenceS;
        std::cout<<"Enter Phone Number: "<<" ";
        std::cin>>mobileNumS;
        std::cout<<"Enter email ID: "<<" ";
        std::cin>>mailIDS;
        std::cout<<"Enter Salary: "<<" ";
        std::cin>>salaryS; 
        std::cout<<"Enter Level: "<<" ";
        std::cin>>levelS;  
        std::cout<<"Enter Working hours: "<<" ";
        std::cin>>hoursS;
        // S[i] = Sponsored("No name","NULL","NULL","NULL",-1,-1,"NULL");
        //NS[i] = NonSponsored(goodName,residence,mobileNum,mailID,basicFee,otherFee,stats);
        SF[i].setName(goodNameS);
        SF[i].setAddress(residenceS);
        SF[i].setPhoneNum(mobileNumS);
        SF[i].setEmail(mailIDS);
        SF[i].setSalaryStaff(salaryS);
        SF[i].setLevelStaff(levelS);
        SF[i].setWorkinHoursStaff(hoursS);
    }


    for(int i=0;i<numOfSponStud;i++)
    {
        std::cout<<endl;
        std::cout<<"Details of "<<"Sponsored Student "<<i+1<<" are as follows: "<<endl;
        S[i].calculateFee();
    }
    for(int i=0;i<numOfNonSponStud;i++)
    {
        std::cout<<endl;
        std::cout<<"Details of "<<"Non Sponsored Student "<<i+1<<" are as follows: "<<endl;
        NS[i].calculateFee();
    }
    for(int i=0;i<numOfFaculty;i++)
    {
        std::cout<<endl;
        std::cout<<"Details of "<<"Faculty Member "<<i+1<<" are as follows: "<<endl;
        F[i].calculateIncrement();
        F[i].calculatePromotedLevel();
        F[i].Display();
    }
    for(int i=0;i<numOfStaff;i++)
    {
        std::cout<<endl;
        std::cout<<"Details of "<<"Staff Member "<<i+1<<" are as follows: "<<endl;
        SF[i].calculateIncrement();
        SF[i].calculatePromotedLevel();
        SF[i].Display();
    }
}