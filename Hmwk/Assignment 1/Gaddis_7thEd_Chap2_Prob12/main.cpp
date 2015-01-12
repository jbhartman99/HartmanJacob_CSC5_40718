/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 * Created on January 11, 2015, 10:41 PM
 * Purpose: Gaddis, 7th Ed, Chapter 2, Problem 12
 * Title: Land Calculation
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
int acre2ft=43560;
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int numsqft; //Number of sq. ft. on a tract of land
    int acretct; //Same tract but in acres
    
    //Assign Variable Values
    numsqft=389767;
    acretct=numsqft/acre2ft;
    
    //Output to Screen
    cout<<acretct<<" acres"<<endl;
    
    //Exit Stage Right    
    return 0;
}

