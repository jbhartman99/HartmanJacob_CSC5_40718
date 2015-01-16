/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 6:05 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 1
 * Title: Miles per Gallon
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
    float GalTank; //Amount of gallons in the tank
    float RangCar; //Range of car on a full tank
    float mpg; //miles per gallon
    //Prompt for input
    cout<<"What is the amount of gallons in the tank?"<<endl;
    cin>>GalTank;
    cout<<"How many miles can you go on a full tank?"<<endl;
    cin>>RangCar;
    //Perform calculations
    mpg=RangCar/GalTank;
    //Output to screen
    cout<<"The MPG is... "<<mpg<<endl;
    
    //Exit Stage Right
    return 0;
}


