/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 25, 2015, 12:20 PM
   Purpose: Gaddis, 7th Edition, Chapter 5, Problem 5
   Title: Membership Fees Increase
*/

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float intrate; //Interest rate as a percent
    float int_one;   //Interest rate to be multiplied 
    int yrspass;     //Number of years to pass
    float membfee;   //Membership fee initial
    float feefutr;   //Future membership
    int counter;     //Counter
    float total;     //Total membership fee
    //Introduce the program
    cout<<"Hello! Welcome to the 'Membership Fees Increase' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"This program is about to tell you the increase\n";
    cout<<"for membership fees.\n";
    //**Extra** Ask for interest rate and membership fee
    cout<<"Type in the interest rate as a whole percent, then enter."<<endl;
    cin>>intrate;
    cout<<"\n";
    cout<<"Type in the initial membership fee, then enter."<<endl;
    cin>>membfee;
    cout<<"\n";
    //Perform conditional statement and output to screen
    cout<<"Years   Fee"<<endl;
    cout<<"-------------------"<<endl;
    for (counter=0;counter<7;counter++){
        yrspass=counter;
        int_one=1+(intrate/100);
        feefutr=membfee*pow(int_one,yrspass);
        cout<<"  "<<yrspass<<"     $"<<setprecision(2)<<fixed<<feefutr<<endl; 
    }
    //Exit Stage Right
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}