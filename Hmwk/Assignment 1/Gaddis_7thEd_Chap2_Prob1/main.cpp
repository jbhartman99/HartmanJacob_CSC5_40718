/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 * Created on January 11, 2015, 5:24 PM
 * Purpose: Gaddis, 7th Ed, Chapter 2, Problem 1
 * Title: Sum of Two Numbers
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
    int variable1;
    int variable2;
    int total;
    
    //Assign Variable Values
    variable1=62;
    variable2=99;
    total=variable1+variable2;
    
    //Output to Screen
    cout<<"The two numbers are..."<<endl;
    cout<<variable1<<" & "<<variable2<<","<<endl;
    cout<<"and their sum is..."<<endl;
    cout<<total<<"."<<endl;
    
    //Exit Stage Right    
    return 0;
}


