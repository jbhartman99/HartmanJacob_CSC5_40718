/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 6, 2015, 6:05 PM
   Purpose: To Find a solution to the Energy Drink Company Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and Initialize variables
    float gasTank=20;//max Gallons in our tank
    float inTown=45.5;//In town MPG
    float onHway=54.8;//On highway MPG
    
    //Calculate the total miles in and out of town
    float disTown=gasTank*inTown;
    float disHway=gasTank*onHway;
    
    //Output the results
    cout<<"Distance in Town on a tank of gas ="<<endl;
    cout<<disTown<<" (miles)"<<endl;
    cout<<"Distance on Highway on a tank of hgas ="<<endl;
    cout<<disHway<<" (miles)"<<endl;
    
    //Exit Stage Right
    return 0;
}
