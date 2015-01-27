/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 25, 2015, 11:16 AM
   Purpose: Gaddis, 7th Edition, Chapter 5, Problem 3
   Title: Ocean Levels
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float ocean=1.5;    //Ocean levels rate of rise in mm
    int counter;    //Counter
    float total=0;    //Total rise in levels
    //Introduce the program
    cout<<"Hello! Welcome to the 'Ocean Levels' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"This program is about to tell you the rise in ocean levels\n";
    cout<<"for the next 25 years.\n";
    cout<<"\n";
    //Perform conditional statement and output to screen
    cout<<" Yr   Lvl"<<endl;
    cout<<"-----------"<<endl;
    for (counter=1;counter<26;counter++){
        total+=ocean;
        cout<<setprecision(1)<<fixed<<setw(3)<<counter<<"   "<<total<<endl;
    }
    //Exit Stage Rightc
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}
