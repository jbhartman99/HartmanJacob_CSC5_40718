/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 19, 2015, 6:34 PM
   Purpose: Gaddis, 7th Edition, Chapter 4, Problem 6
   Title: Mass and Weight
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
float GRAVITY=9.81;//(meters per second squared)
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float Mass;//Mass of the object
    float Weight;//Weight of the object
    //Assign some variable values, None to be assigned
    //Introduce the program
    cout<<"Hello! Welcome to the 'Mass and Weight' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for user input
    cout<<"Enter an object's mass in kilograms.\n";
    cin>>Mass;
    cout<<"\n";
    //Calculate results
    Weight=Mass*GRAVITY;
    //Output to screen
    cout<<"The object's weight in newtons is "<<Weight<<".\n";
    //Make conditional statement
    if (Weight>1000){
        cout<<"That object is too heavy!";
    }
    else if (Weight<10){
        cout<<"That object is too light!";
    }
    else {   
    }
    //Exit Stage Right
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}



