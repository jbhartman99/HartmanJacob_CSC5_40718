/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 6:05 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 6
 * Title: How Many Widgets?
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
    float WdgtWgt; //single Widget Weight
    int   NumWdgt; //Number of widgets
    float PaltWgt; //Pallet weight
    float TotalWt; // weight of the group of widgets with pallet
    float WdgtsWt; //weight of the group of widgets
    //Prompt for input
    cout<<"How much does a single widget weigh? (in pounds)"<<endl;
    cin>>WdgtWgt;
    cout<<"\n";
    cout<<"How much does the pallet weigh by itself? (in pounds)"<<endl;
    cin>>PaltWgt;
    cout<<"\n";
    cout<<"How much does it weight with the widgets? (in pounds)"<<endl;
    cin>>TotalWt;
    cout<<"\n";
    //Perform calculations
    WdgtsWt=TotalWt-PaltWgt;
    NumWdgt=WdgtsWt/WdgtWgt;
    //Output to screen
    cout<<"The number of widgets on the pallet is..."<<endl;
    cout<<NumWdgt<<"\n";
    
    //Exit Stage Right
    return 0;
}