/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 6:48 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 17
 * Title: Monthly Payments
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float Payment; //Monthly payment
    float RateMon; //Monthly interest rate
    float RateYer; //Yearly interest rate
    int Number; //Number of payments
    int Loan; //Amount of the loan
    float PaidBak; //Amount Paid Back
    float IntPaid; //Interest Paid
    //Introduce the program to the user
    cout<<"Hello! Welcome to the 'Monthly Payments' program!"<<endl;
    cout<<"Prompting for user input..."<<endl;
    cout<<"\n";
    //Prompt for input
    cout<<"What is the annual interest rate? (as a decimal)"<<endl;
    cin>>RateYer;
    cout<<"\n";
    cout<<"How many payments will be made?"<<endl;
    cin>>Number;
    cout<<"\n";
    cout<<"How many dollars is the loan?"<<endl;
    cin>>Loan;
    cout<<"\n";
    //Perform calculations
    RateMon=RateYer/12;
    Payment=(RateMon*pow(1+RateMon,Number))/(pow(1+RateMon,Number)-1)*Loan;
    PaidBak=Number*Payment;
    IntPaid=PaidBak-Loan;       
    //Output to screen
    cout<<fixed;
    cout<<"Loan Amount:"<<setw(20)<<setprecision(2)<<Loan<<endl;
    cout<<"Monthly Interest:"<<setw(15)<<RateMon<<endl;
    cout<<"Number of Payments:"<<setw(13)<<Number<<endl;
    cout<<"Monthly Payment:"<<setw(16)<<setprecision(2)<<Payment<<endl;
    cout<<"Amount Paid Back:"<<setw(15)<<setprecision(2)<<PaidBak<<endl;
    cout<<"Interest paid:"<<setw(18)<<setprecision(2)<<IntPaid<<endl;
    
    //Exit Stage Right
    return 0;
}


