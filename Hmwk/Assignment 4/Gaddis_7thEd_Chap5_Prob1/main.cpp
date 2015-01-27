/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 25, 2015, 10:08 AM
   Purpose: Gaddis, 7th Edition, Chapter 5, Problem 1
   Title: Sum of Numbers
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
    int numinpt; //Number input by user
    int counter; //Counter
    int sum; //Factorial sum of the number
    //Introduce the program
    cout<<"Hello! Welcome to the 'Sum of Numbers' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"Please input one number to be summed from 1 to that number.\n";
    cout<<"Then press enter.\n";
    cout<<"(the number cannot be a negative number!)"<<endl;
    cin>>numinpt;
    if(numinpt<=0){
        cout<<"That is not a valid output!"<<endl;
        cout<<"Ending program..."<<endl;
        return 0;
    }
    cout<<"\n";
    //Perform conditional statement
    for(counter=1;counter<=numinpt;counter++){
        sum+=counter;
    }
    //Output to screen
    cout<<"The sum is "<<sum<<"."<<endl;
    //Exit Stage Rightc
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}


