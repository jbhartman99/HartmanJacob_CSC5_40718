/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 2:28 PM
   Purpose: Gaddis, 7th Edition, Chapter 4, Problem 1
 * Title: Minimum_Maximum
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
    float Num_1;//1st Number to be compared
    float Num_2;//2nd Number to be compared
    //Introduce the program
    cout<<"Hello! Welcome to the 'Minimun/Maximum' program!\n";
    cout<<"Starting progra...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"Please input two numbers consecutively, separated by a space.\n";
    cout<<"Then press enter.\n";
    cin>>Num_1>>Num_2;
    cout<<"\n";
    //Perform conditional statement and output to screen
    cout<<"Calculating which one of the two is larger...\n";
    Num_1>Num_2?cout<<Num_1<<" is larger than "<<Num_2<<"!\n":
        cout<<Num_2<<" is larger than "<<Num_1<<"!\n";
    cout<<"\n";
    //Exit Stage Right
    cout<<"Ending program.\n";
    return 0;
}


