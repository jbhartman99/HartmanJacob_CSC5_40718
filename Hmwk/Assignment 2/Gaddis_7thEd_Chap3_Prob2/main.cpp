/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 1:41 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 2
 * Title: Stadium Seating
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
    float costA; //Cost for Class A seats
    float costB; //Cost for Class B seats
    float costC; //Cost for Class C seats
    float soldA; //Number of tickets sold for Class A seats
    float soldB; //Number of tickets sold for Class B seats
    float soldC; //Number of tickets sold for Class C seats
    float incomeA; //Income from Class A seats
    float incomeB; //Income from Class B seats
    float incomeC ;//Income from Class C seats
    float totInco; //Total income generated from all classes
    //Assign some variable values
    costA=15; //in dollars
    costB=12; //in dollars
    costC=9;  //in dollars
    //Introduce the program to the user
    cout<<"Hello! Welcome to the 'Stadium Seating' program!"<<endl;
    cout<<"Prompting for user input..."<<endl;
    cout<<"\n";
    //Prompt for input
    cout<<"Please list, in order, the number of Class A, Class B,"<<endl;
    cout<<"& Class C seats sold."<<endl;
    cin>>soldA>>soldB>>soldC;
    //Perform calculations
    incomeA=soldA*costA;
    incomeB=soldB*costB;
    incomeC=soldC*costC;
    totInco=incomeA+incomeB+incomeC;
    //Output to screen
    cout<<setprecision(2)<<fixed;
    cout<<"Class A seats cost $"<<costA<<"."<<endl;
    cout<<"Class B seats cost $"<<costB<<"."<<endl;
    cout<<"Class C seats cost $"<<setw(5)<<costC<<"."<<endl;
    cout<<"So the total income generated from tickets sales is..."<<endl;
    cout<<"$"<<totInco<<endl;
    
    //Exit Stage Right
    return 0;
}


