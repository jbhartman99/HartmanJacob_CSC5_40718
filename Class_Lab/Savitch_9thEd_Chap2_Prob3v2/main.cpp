/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 13, 2015, 8:50 PM
   Purpose: Savitch, 9th Edition, Chapter 2, Problem 3, v2
 * Title: Converting treadmill mph to pace per mile
 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int CNVHRMN=60;//Conversion from hours to minutes
const int CNVMNSC=60;//Conversion from minutes to seconds

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float mph;//Miles per hour on a treadmill
    float hpm;//Pace as hours per mile
    float fmpm;//Miles per minute as a float
    int impm;//Miles per minute as an integer
    float fmspm;//Fraction left for seconds per mile
    //Prompt for the input
    cout<<"How many miles are you running?"<<endl;
    cout<<"in an hour"<<endl;
    cout<<"Format answer as a float."<<endl;
    cout<<" \n";
    cin>>mph;
    //Calculate the relevant pace
    hpm=1/mph;
    fmpm=hpm*CNVHRMN;
    impm=static_cast<int>(fmpm);
    fmspm=(fmpm-impm)*CNVMNSC;
    //Output the results
    cout<<mph<<" MPH = ";
    cout<<impm<<" minutes & ";
    cout<<fmspm<<" seconds  "<<endl;
    return 0;
}
