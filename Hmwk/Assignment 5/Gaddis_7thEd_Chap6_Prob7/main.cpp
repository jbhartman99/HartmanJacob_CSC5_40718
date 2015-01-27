/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 6:47 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 7
   Title: Celsius Temperature Table
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants     
//Function Prototypes
float celsius(float); //converts temperature from F -> C
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float fahrenh; //Temperature in Fahrenheit
    float celscnv; //Converted celsius temperature
    float counter;   //Counter for loop
    //Introduce the program
    cout<<"Hello! Welcome to the 'Celsius Temperature Table' program!\n";
    cout<<"This program will do the following:\n";
    cout<<"Find the Celsius temperature given a Fahrenheit one\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"This program will now output Celsius temperatures from the "<<endl;
    cout<<"Fahrenheit temperatures: 32-52."<<endl;
    cout<<"deg.Fahr.   deg.Cels."<<endl;
    cout<<"---------------------"<<endl;
    for(counter=32;counter<=52;counter++){
        fahrenh=counter;
        cout<<setprecision(1)<<fixed<<setw(6)<<fahrenh<<"   ";
        celscnv=celsius(fahrenh);
        cout<<setprecision(1)<<fixed<<setw(6)<<celscnv;
        cout<<"\n";
    }
    //Exit Stage Right
    cout<<" \n";
    cout<<"Ending program.\n";
    return 0;
}
//accepts the mass and velocity of an object
//churns out the kinetic energy
float celsius(float Fahrenh){
    float celsius; //Temperature in celsius
    celsius=(.555f)*(Fahrenh-32);
    return celsius;
}