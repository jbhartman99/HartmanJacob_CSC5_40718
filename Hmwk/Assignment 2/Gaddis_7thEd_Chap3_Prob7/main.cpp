/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 6:23 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 7
 * Title: How Many Calories?
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
    float CookBag; //number of cookies per bag
    float ServBag; //number of servings per bag
    float CookSrv; //number of cookies per serving
    float CalServ; //number of calories per serving
    float CookAte; //number of cookies eaten
    float ServAte; //number of servings eaten
    float CaloAte; //Calories eaten
    //Assign some variable values
    CookBag=40;
    ServBag=10;    
    CookSrv=CookBag/ServBag;
    CalServ=300;
    //Introduce the program to the user
    cout<<"Hello! Welcome to the 'How many Cookies?' program!"<<endl;
    cout<<"Prompting for user input..."<<endl;
    cout<<"\n";
    //Prompt for input
    cout<<"How many cookies did you eat?"<<endl;
    cin>>CookAte;
    cout<<"\n";
    //Perform calculations
    ServAte=CookAte/CookSrv;
    CaloAte=ServAte*CalServ;
    //Output to screen
    cout<<"The number of calories consumed is... "<<CaloAte<<" calories."<<endl;
    
    //Exit Stage Right
    return 0;
}


