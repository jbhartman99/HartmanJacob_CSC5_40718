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
const char CVFTACS=43560;//Percent Conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables
    float inSqFt,outAcrs;

    //Prompt for input
    cout<<"Input the number of square feet"<<endl;
    cout<<"to convert to Acres"<<endl;
    cin>>inSqFt;
   
    //Calculate Acres
    outAcrs=inSqFt/CVFTACS;
    
    //Output the results
    cout<<inSqFt<<"(sq feet) = ";
    cout<<outAcrs<<"(acres) "<<endl;
    
    //Exit Stage Right
    return 0;
}
