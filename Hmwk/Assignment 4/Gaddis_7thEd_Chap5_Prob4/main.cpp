/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 25, 2015, 11:58 AM
   Purpose: Gaddis, 7th Edition, Chapter 5, Problem 4
   Title: Calories Burned
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
    float calpmin=3.9; //Calories burned per minute
    int minutes;   //Minutes on a treadmill
    float calorie; //Calories burned
    int counter;   //Counter
    float total;   //Total calpmin
    //Introduce the program
    cout<<"Hello! Welcome to the 'Calories Burned' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"This program is about to tell you the number of calories\n";
    cout<<"burned after regular intervals.\n";
    //Perform conditional statement and output to screen
    cout<<"Minutes   Calories Burned"<<endl;
    cout<<"-------------------"<<endl;
    for (counter=2;counter<7;counter++){
        minutes=counter*5;
        calorie=calpmin*minutes;
        cout<<minutes<<"        "<<calorie<<endl; 
    }
    //Exit Stage Right
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}

