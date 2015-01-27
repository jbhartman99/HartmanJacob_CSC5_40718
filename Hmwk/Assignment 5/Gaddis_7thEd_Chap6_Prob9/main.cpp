/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 8:09 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 9
   Title: Present Value
*/

//System Libraries
#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
float presentValue(float,float,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float futrval; //Future Value
    float intrate; //Interest rate as a decimal
    float present; //Present value after function
    int   numyear; //Number of years
    //Introduce the program
    cout<<"Hello! Welcome to the 'Present Value' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt For Input
    cout<<"Please input the accounts future value, then enter"<<endl;
    cin>>futrval;
    cout<<"Please input the interest rate average, as a decimal less than 1"<<endl;
    cin>>intrate;
    cout<<"Please input the number of years the account is active"<<endl;
    cin>>numyear;
    //Call Function
    present=presentValue(futrval,intrate,numyear);
    cout<<"You need to deposit the following amount now"<<endl;
    cout<<"$"<<setprecision(2)<<fixed<<present;
    //Exit Stage Right
    cout<<"\n";
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}
float presentValue(float futrval, float intrate, int numyear){
    float present; //Present value inside function
    present=futrval/pow(1+intrate,numyear);
    return present;
}


