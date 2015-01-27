/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 4:07 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 1
   Title: Markup
*/

//System Libraries
#include <iostream> 
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
void calculateRetail (float, float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Seed random number generator here
    //Declare Variables
    float holsale; //Whole-sale price
    float mrkupwl; //Mark up as a whole numbers
    float mrkupct; //Mark up as a percent
    float mrkup1X; //Mark up as a 1.##
    //Introduce the program
    cout<<"Hello! Welcome to the 'Markup' program!\n";
    cout<<"This program will do the following:\n";
    cout<<"Find the retail price of an item.\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt For Input
    cout<<"Please enter an item's wholesale cost, including decimals, then enter."<<endl;
    cin>>holsale;
    if(holsale<0){
        cout<<"That is an invalid price!!! END PROGRAM."<<endl;
        return 0;
    }
    cout<<"Please enter an item's markup percentage, as a whole number, then enter."<<endl;
    cin>>mrkupwl;
    if(mrkupwl<0){
        cout<<"That is an invalid markup!!! END PROGRAM."<<endl;
        return 0;
    }
    mrkupct=mrkupwl/100;
    mrkup1X=mrkupct+1;   
    //Call to Function
    cout<<"The retail price for that item is..."<<endl;
    cout<<"$";
    calculateRetail(holsale, mrkup1X);
    //Exit Stage Right
    cout<<" \n";
    cout<<" \n";
    cout<<"Ending program.\n";
    return 0;
}
//Function: calculateRetail
void calculateRetail(float value1, float value2){
    float retlprc; //Retail price
    retlprc=value1*value2;
    cout<<setprecision(2)<<fixed<<retlprc;
}


