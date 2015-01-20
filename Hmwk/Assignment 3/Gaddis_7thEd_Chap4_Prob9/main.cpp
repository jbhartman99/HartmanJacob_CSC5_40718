/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 19, 2015, 6:45 PM
   Purpose: Gaddis, 7th Edition, Chapter 4, Problem 9
   Title: Math Tutor
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
    //Get the system time
    unsigned seed=time(0);
    //Seed the random number generator.
    srand(seed);
    //Declare Variables
    int Rand_1;//Random number #1
    int Rand_2;//Random number #2
    int SumUser;//Sum guessed by the user
    int SumRand;//Sum of the two random numbers
    //Introduce the program
    cout<<"Hello! Welcome to the 'Math Tutor' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Generate Random numbers and calculate
    Rand_1=rand()% 999 + 1;
    Rand_2=rand()% 999 + 1;
    SumRand=Rand_1+Rand_2;
    //Wait for user input
    cout<<"This program will generate two random numbers and wait for user input.\n";
    cout<<"\n";
    cout<<"     "<<Rand_1<<endl;
    cout<<"    +"<<Rand_2<<endl;
    cout<<"--------"<<endl;
    cout<<"     ";
    cin>>SumUser;
    cout<<"\n";
    //Conditional Statement
    if (SumUser==SumRand){
        cout<<"Congratulations! That is correct!\n";
    }
    else {
        cout<<"The correct answer is "<<SumRand<<".\n";
    }
    //Exit Stage Right
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}


