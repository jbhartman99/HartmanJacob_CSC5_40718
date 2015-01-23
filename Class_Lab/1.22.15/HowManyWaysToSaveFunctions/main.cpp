/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 22, 2015, 5:47 PM
 * Purpose: 
 * Title: How many ways to save function
 */

#include <iostream>
#include <cmath>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//FV = Future Values $'s
//PV = Present Value $'s
// i = Interest Rate per year
// n = Number of compounding periods in years
//FV         PV     i    n
float save1(float,float,int);
float save1(float,float,float=12.0f);//Defaulted parameter for number of compounding periods
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save4(float,float,float);//Overloaded function call, i.e. same name

int main(int argc, char** argv) {
    //Declare and initialize values
    float PrsValu=100.0f;//$100
    float IntRate=6;//%interest rate per year
    int nCompnd=72/IntRate;//By the rule of 72 to double
    float fCompnd=nCompnd;
    //Convert interest to a fraction
    IntRate/=100;
    //Output the inputs
    cout<<"Present Value = $"<<PrsValu<<endl;
    cout<<"Interest Rate =  "<<IntRate*100<<"%"<<endl;
    cout<<"Number of compounding periods = "<<nCompnd<<"(years)"<<endl;
    //Output the future value
    cout<<"Our Savings 1 = $"
            <<save1(PrsValu,IntRate,nCompnd)<<endl;
    cout<<"Our Savings 1 = $"
            <<save1(PrsValu,IntRate,fCompnd)<<endl;
    cout<<"Our Savings 1 = $"
            <<save1(PrsValu,IntRate)<<endl;
    cout<<"Our Savings 2 = $"
            <<save2(PrsValu,IntRate,nCompnd)<<endl;
    cout<<"Our Savings 3 = $"
            <<save3(PrsValu,IntRate,nCompnd)<<endl;
    cout<<"Our Savings 4 = $"
            <<save4(PrsValu,IntRate,nCompnd)<<endl;
    cout<<"Our Savings 4 = $"
            <<save4(PrsValu,IntRate,fCompnd)<<endl;
    return 0;
}

//Inputs
//p->Principal in $'s meaning present value
//i->Interest rate per year
//n->Number of compounding periods
//Output
//SAvings->Future value in $'s
float save1(float p, float i,int n){
    return p*pow(1+i,n);
}

float save1(float p, float i,float n){
    return p*pow(1+i,n);
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

float save4(float p,float i,float n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}
