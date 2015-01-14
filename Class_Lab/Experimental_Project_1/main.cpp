/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 13, 2015, 7:49 PM
   Purpose: To mess around
   Title: Experimental Project 1
 */

//System Libraries
#include <iostream>
#include <iomanip> // std::setprecision
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    float Princip; //Principle deposit
    float IntRate; //Average yearly interest rate
    float FinlVal; //Final value of the investment
    float NumYear; //Number of years had passed
    //Calculations
    FinlVal=Princip*((1+IntRate)^NumYear);
    //Prompt for user input
    cout<<"What is the value of your principle deposit? $";
    cin>>Princip;
    cout<<endl;
    cout<<"What is the average yearly rate, as a decimal? ";
    cin>>IntRate;
    cout<<endl;
    cout<<"What is number of years to pass? ";
    cin>>NumYear;
    cout<<endl;
    //Output to screen
    cout<<"The final value of your initial deposit is... $"<<FinlVal<<endl;
    //Exit stage right
    return 0;
}



