/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 6:23 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 8
 * Title: How Much Insurance?
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float PropVal; //Value of the property
    float SugPrct; //Suggested percentage to insure
    float SugInsr; //Suggested insurance
    //Assign some variable values
    SugPrct=.8;      
    //Introduce the program to the user
    cout<<"Hello! Welcome to the 'How Much Insurance?' program!"<<endl;
    cout<<"Prompting for user input..."<<endl;
    cout<<"\n";
    //Prompt for input
    cout<<"What is the value of the property involed? (in dollars)"<<endl;
    cin>>PropVal;
    cout<<"\n";
    //Perform calculations
    SugInsr=SugPrct*PropVal;
    //Output to screen
    cout<<"The suggest insurance amount is $"<<SugInsr<<endl;
    
    //Exit Stage Right
    return 0;
}


