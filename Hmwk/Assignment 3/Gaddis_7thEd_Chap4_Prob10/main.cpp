/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 19, 2015, 8:06 PM
   Purpose: Gaddis, 7th Edition, Chapter 4, Problem 10
   Title: Software Sales
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
    int UnitPkg; //Number of units of the package
    int OrdrCst; //Order cost based on number of units discount
    //Introduce the program
    cout<<"Hello! Welcome to the 'Software Sales' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for user input
    cout<<"This program will figure out the cost of your order based on";
    cout<<" quantity of units.\n";
    cout<<"How many units were sold?\n";
    cin>>UnitPkg;
    cout<<"\n";
    //Conditional statement: is it valid?
    if (UnitPkg>=0){
        //Conditional Statement Calculation
        if (UnitPkg>=10&&UnitPkg<20){
        OrdrCst=UnitPkg*99*.8;
        cout<<"The order will cost $"<<OrdrCst<<".\n";
        }
        else if(UnitPkg>=20&&UnitPkg<50){
            OrdrCst=UnitPkg*99*.7;
            cout<<"The order will cost $"<<OrdrCst<<".\n";
        }
        else if(UnitPkg>=50&&UnitPkg<100){
            OrdrCst=UnitPkg*99*.6;
            cout<<"The order will cost $"<<OrdrCst<<".\n";
        }
        else if(UnitPkg>=100){
            OrdrCst=UnitPkg*99*.5;
            cout<<"The order will cost $"<<OrdrCst<<".\n";
        }
        else{
            cout<<"We do not sell at that quantity!\n";
        }
    }
    else{
        cout<<"You can't have a negative number of units!\n";
        cout<<"Start over program!\n";
    }
    //Exit Stage Right
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}