/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 2:47 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 4
 * Title: Average Rainfall
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float rain1st; //Rainfall in the 1st month in inches
    float rain2nd; //Rainfall in the 2nd month in inches
    float rain3rd; //Rainfall in the 3rd month in inches
    float sumrain; //Sum of rainfall for those 3 months
    float avgrain; //Average of rainfall for 3 months
    string name1st; //Name of the 1st month
    string name2nd; //Name of the 2nd month
    string name3rd; //Name of the 3rd month
    //Introduce the program to the user
    cout<<"Hello! Welcome to the 'Average Rainfall' program!"<<endl;
    cout<<"Prompting for user input..."<<endl;
    cout<<"\n";
    //Prompt for input
    cout<<"For the 1st month...\n";
    cout<<"Please input the name of the month, then the rainfall in inches\n";
    cin>>name1st>>rain1st;
    cout<<"For the 2nd month...\n";
    cout<<"Please input the name of the month, then the rainfall in inches\n";
    cin>>name2nd>>rain2nd;
    cout<<"For the 3rd month...\n";
    cout<<"Please input the name of the month, then the rainfall in inches\n";
    cin>>name3rd>>rain3rd;
    cout<<"\n";
    //Perform calculations
    cout<<"Performing calculations..."<<endl;
    sumrain=rain1st+rain2nd+rain3rd;
    avgrain=sumrain/3;
    cout<<"\n";
    //Output to screen
    cout<<"The average rainfall for ";
    cout<<name1st<<", "<<name2nd<<", and "<<name3rd<<" is ";
    cout<<setprecision(2)<<fixed<<avgrain<<" inches."<<endl;
    
         
    //Exit Stage Right
    return 0;
}
