/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 6, 2015, 6:05 PM
   Purpose: Computers make mistakes
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    float a,b,c;
    //Prompt user for a and b
    cout<<"Input 2 float variable values"<<endl;
    cin>>a>>b;
    //Calculate the sum
    c=a+b;
    //Output the results
    cout<<"The sum (a+b) is equal to c which equals "<<c<<endl;
    //Exit Stage Right
    return 0;
}