/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 25, 2015, 12:37 PM
   Purpose: Gaddis, 7th Edition, Chapter 5, Problem 6
   Title: Distance Traveled
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
    int timepas;        //Time traveled
    int timeent;        //Time entered
    int mlprhr;         //Miles per hour
    int distanc=0;        //Distance travelled
    int counter;        //Counter
    //Introduce the program
    cout<<"Hello! Welcome to the 'Distance Traveled' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"This program is about to tell you the distance traveled\n";
    cout<<"and related times.\n";
    //User Input
    cout<<"What is the speed of the vehicle?"<<endl;
    cin>>mlprhr;
    if (mlprhr<0){
        cout<<"THAT IS AN INVALID NUMBER!!! IT MUST BE POSITIVE\n";
        return 0;
    }
    cout<<"How many hours have you been traveling?"<<endl;
    cin>>timeent;
    if(timeent<1){
        cout<<"THAT IS AN INVALID NUMBER!! IT MUST BE MORE THAN 1!\n";
        return 0;
    }
    cout<<"\n";
    //Perform conditional statement and output to screen
    cout<<"Hour   Distance Traveled"<<endl;
    cout<<"------------------------"<<endl;
    for (counter=0;counter<=timeent;counter++){
        timepas=counter;
        distanc=mlprhr*timepas;
        cout<<"  "<<timepas<<"        "<<distanc<<"\n";      
    }
    //Exit Stage Right
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}