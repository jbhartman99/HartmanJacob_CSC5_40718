/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 * Created on January 11, 2015, 7:17 PM
 * Purpose: Gaddis, 7th Ed, Chapter 2, Problem 10
 * Title: Miles per Gallon
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
    int tnksize; //Car tank size
    int distnce; //Distance it can travel
    int milprgl; //Miles per gallon
    
    //Assign Variable Values
    tnksize=12;
    distnce=350;
    milprgl=distnce/tnksize;
             
    //Output to Screen
    cout<<"The amount of miles traveled per gallon of fuel used is "
        <<milprgl<<"."<<endl;
    
    //Exit Stage Right    
    return 0;
}

