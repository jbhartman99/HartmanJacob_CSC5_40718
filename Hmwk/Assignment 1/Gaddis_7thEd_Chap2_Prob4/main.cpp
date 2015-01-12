/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 * Created on January 11, 2015, 6:02 PM
 * Purpose: Gaddis, 7th Ed, Chapter 2, Problem 4
 * Title: Restaurant Bill
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
    float melchrg; //Meal charge
    float tax; //Tax percentage
    float totaftx; //Total after tax
    float tip; //Tip percentage
    float totaftp; //Total after tax, after tip
    float taxamnt; //Tax amount in dollars
    float tipamnt; //Tip amount in dollars
    
    //Assign Variable Values
    melchrg=4.450e1;
    tax=6.75e-2;
    tip=1.5e-1;
    taxamnt=tax*melchrg;
    totaftx=melchrg+taxamnt;
    tipamnt=tip*totaftx;
    totaftp=totaftx+tipamnt;
    
    
    //Output to Screen
    cout<<"The meal cost is $"<<melchrg<<"."<<endl;
    cout<<"The tax amount is $"<<taxamnt<<"."<<endl;
    cout<<"The tip amount is $"<<tipamnt<<"."<<endl;
    cout<<"The total is     $"<<totaftp<<"."<<endl;
  
    //Exit Stage Right    
    return 0;
}



