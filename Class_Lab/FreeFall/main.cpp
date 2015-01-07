/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 6, 2015, 6:05 PM
   Purpose: Homework solution to free fall problem
   Savitch_9thEd_Chap1_ProgProj4

 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//const float GRAVITY=32.174f;//(Ft/S^2)
const float GRAVITY=3.2174e1f;//(Ft/S^2)

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    unsigned int time;//(S)
    float dist;//distance(Ft)
    
    //Prompt user for input
    cout<<"This program calculates free fall"<<endl;
    cout<<"distance dropped (in feet) with an"<<endl;
    cout<<"object starting at rest."<<endl;
    cout<<"Input the free-fall time to drop in seconds."<<endl;
    cout<<"The time input is a positive integer..."<<endl;
    cin>>time;
    
    //Calculate the distance dropped
    dist=5e-1f*GRAVITY*time*time;
    
    //Output the results
    cout<<"Distance dropped = "<<dist<<" (Ft)"<<endl;
    
    //Exit Stage Right
    return 0;
}

