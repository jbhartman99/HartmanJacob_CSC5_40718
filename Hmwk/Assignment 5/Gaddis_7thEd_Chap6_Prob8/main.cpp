/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 7:00 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 8
   Title: Coin Toss
*/

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
//User Libraries
//Global Constants
const unsigned int MAXRAND=2;
//Function Prototypes
void coinToss();
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int numtoss; //number of times the user declares the coin is to be tossed
    int counter; //counter for for-loop
    //Introduce the program
    cout<<"Hello! Welcome to the 'Coin Toss' program!\n";
    cout<<"This program will do the following:\n";
    cout<<"Simulate a coin toss a specified number of times\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"How many time is the coin to be tossed?"<<endl;
    cin>>numtoss;
    //Validate if number is greater than one
    if(numtoss<1){
        cout<<"That is an INVALID NUMBER! START OVER THE PROGRAM!"<<endl;
        return 0;
    }
    //Loop coin toss number of times specified
    for(counter=1;counter<=numtoss;counter++){
        coinToss();
    }
    //Exit Stage Right
    cout<<" \n";
    cout<<"Ending program.\n";
    return 0;
}
//no input
//returns simulated cointoss number of times specified
void coinToss(){
    int coinval; //Value of the coin as a number
    unsigned int srand(time(0));
    //generate number
    coinval=1+rand()%MAXRAND;
    //conditional statement
    if(coinval==1){
        cout<<"Heads\n";
    }
    else{cout<<"Tails\n";}
}