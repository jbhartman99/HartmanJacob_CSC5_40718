/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 * Created on January 11, 2015, 6:54 PM
 * Purpose: Gaddis, 7th Ed, Chapter 2, Problem 13
 * Title: Circuit Board Piece
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
    float pctprof; //Percent profit
    float pricprf; //Amount in dollars of profit
    float priccst; //Price cost
    float pctcost; //Percent cost
    float sellprc; //Selling Price
    
    //Assign Variable Values
    pctprof=4e-1;
    pctcost=1-4e-1;
    priccst=1.267e1;
    pricprf=(pctprof*priccst/pctcost);
    sellprc=priccst+pricprf;
             
    //Output to Screen
    cout<<"The selling price for the circuit board is $"
        <<sellprc<<"."<<endl;
    
    //Exit Stage Right    
    return 0;
}

