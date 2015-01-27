/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 6:36 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 6
   Title: Falling Distance
*/

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants     
//Function Prototypes
void kineticEnergy(float,float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float mass;   //object mass
    float velcty; //object velocity
    //Introduce the program
    cout<<"Hello! Welcome to the 'Kinetic Energy' program!\n";
    cout<<"This program will do the following:\n";
    cout<<"Find the KE given mass and velocity\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"Please input the objects mass [kg], then enter."<<endl;
    cin>>mass;
    cout<<"Please input the object velocity [m/s], then enter."<<endl;
    cin>>velcty;
    kineticEnergy(mass,velcty);
    //Exit Stage Right
    cout<<" \n";
    cout<<"Ending program.\n";
    return 0;
}
//accepts the mass and velocity of an object
//churns out the kinetic energy
void kineticEnergy(float massF, float velctyF){
    float kinetic; //Kinetic energy of the object;
    kinetic=.5f*massF*pow(velctyF,2);
    cout<<"The kinetic energy for that object is...\n";
    cout<<setprecision(2)<<fixed<<kinetic<<" Joules"<<endl;
}