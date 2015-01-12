/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 * Created on January 11, 2015, 5:48 PM
 * Purpose: Gaddis, 7th Ed, Chapter 2, Problem 3
 * Title: Sales Tax
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
    float cntytax; //County sales tax
    float stattax; //State sales tax
    int purchas; //Purchase amount in US dollars
    float totaltx; //Total sales tax
    float taxprch; //Tax on the purchase
    
    //Assign Variable Values
    cntytax=2e-2; 
    stattax=4e-2;
    purchas=52;
    totaltx=stattax+cntytax;
    taxprch=totaltx*purchas;
    
    //Output to Screen
    cout<<"The total tax percentage for county and state is..."<<endl;
    cout<<totaltx*100<<"%."<<endl;
    cout<<endl;
    cout<<"So for a purchase of $"<<purchas<<", the tax is..."<<endl;
    cout<<"$"<<taxprch<<"."<<endl;
    
    //Exit Stage Right    
    return 0;
}


