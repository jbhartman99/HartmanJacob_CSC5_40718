/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 19, 2015, 6:45 PM
   Purpose: Gaddis, 7th Edition, Chapter 4, Problem 7
   Title: Time Calculator
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
int SPERMIN=60;//Seconds per minute
int SPERHR=3600; //Seconds per hour
int SPERDAY=86400;//Seconds per day
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float NumSecs;//Number of seconds input by user
    float NumMins;//Number of minutes 
    float NumHour;//Number of hours
    float NumDays;//Number of days
    //Introduce the program
    cout<<"Hello! Welcome to the 'Time Calculator' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for user input
    cout<<"Please input a number of seconds... don't ask why.\n";
    cin>>NumSecs;
    cout<<"\n";
    //Conditional Statement
    if (NumSecs>=SPERMIN){
        NumMins=NumSecs/SPERMIN;
        cout<<"Number of minutes = "<<setprecision(2)<<fixed<<NumMins<<".\n";  
    }
    if (NumSecs>=SPERHR){
        NumHour=NumSecs/SPERHR;
        cout<<"Number of hours   = "<<setprecision(2)<<fixed<<NumHour<<".\n";  
    }
    if (NumSecs>=SPERDAY){
        NumDays=NumSecs/SPERDAY;
        cout<<"Number of days    = "<<setprecision(2)<<fixed<<NumDays<<".\n";  
    }
    
    //Exit Stage Right
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}




