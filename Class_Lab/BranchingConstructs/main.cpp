/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 13, 2015, 8:50 PM
   Purpose: To fulfill the lab requirement
   Title: Branching Constructs
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Randomly initialize a variable
    srand(static_cast<unsigned int>(time(0)));
    bool TorF=rand()%2;
   
    //Output the random boolean
    cout<<"We randomly chose "<<TorF<<endl;
    
    //Illustrate the ternary operator
    cout<<"Using the ternary statement ";
    cout<<"the random boolean is ";
    cout<<(TorF?"Odd":"Even")<<endl;
    
    //Illustrate the if statement
    cout<<"Using the other if statement ";
    cout<<"the random boolean is ";
    if(TorF==1)cout<<"Odd"<<endl;
    if(TorF==0)cout<<"Even"<<endl;
    
    //Illustrate the if-else statement
    cout<<"Using the if-else statement ";
    cout<<"the random boolean is ";
    if(TorF==1)cout<<"Odd"<<endl;
    else cout<<"Even"<<endl;
    
    //Illustrate the companion if-else statement
    cout<<"Using the other if-else statement ";
    cout<<"the random boolean is ";
    if(TorF==0)cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;
    
    //Illustrate the switch statement
    cout<<"Using the switch statement ";
    cout<<"the random boolean is ";
    switch(TorF){
        case 1: cout<<"Odd"<<endl;break;
        default: cout<<"Even"<<endl;
    }
     
    
    //Exit State Right
    return 0;
}
