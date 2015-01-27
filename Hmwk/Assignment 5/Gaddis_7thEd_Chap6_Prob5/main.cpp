/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 6:02 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 5
   Title: Falling Distance
*/

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
float GRAVITY=9.81; //units are [m/s^2]      
//Function Prototypes
void fallingDistance(float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int counter; //counter for for-loop
    float faltime; //fall time for the main function
    //Introduce the program
    cout<<"Hello! Welcome to the 'Falling Distance' program!\n";
    cout<<"This program will do the following:\n";
    cout<<"Find the distance traveled from falling for an object\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"This program will now find falling distance (in meters) given a falling time of...\n";
    cout<<"1, 2, 3, 4, 5, 6, 7, 8, 9, & 10, in seconds."<<endl;
    cout<<" Time(s)  Distance(m) "<<endl;
    cout<<"----------------------"<<endl;
    for(counter=1;counter<=10;counter++){
        faltime=counter;
        cout<<" "<<setprecision(1)<<setw(5)<<fixed<<faltime<<"      ";
        fallingDistance (faltime);
        cout<<"\n";
    };
    //Exit Stage Right
    cout<<" \n";
    cout<<"Ending program.\n";
    return 0;
}
//accepts an objects falling time in seconds
//returns the distance
void fallingDistance(float falltim){ //falltime for function
    float distanc; //Distance the object fells
    distanc=.5f*GRAVITY*pow(falltim,2);
    cout<<setw(6)<<distanc;
}
