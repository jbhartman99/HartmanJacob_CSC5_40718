/* 
 * File:   main.cpp
 * Author: rcc
 * Created on January 20, 2015, 6:45 P
 * Purpose: Gaddis, 7th Edition, Chapter 5, Problem 12
 * Title: Celsius to Fahrenheit table
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float Fahrenh;//Fahrenheit temperature
    float Celsius;//Celsius temperature
    //Make Table
    cout<<"   Celsius   "<<" Fahrenheit "<<endl;
    for(float Celsius=1;Celsius<=20;Celsius++){
        cout<<"  "<<setw(6)<<Celsius<<"   ";
        Fahrenh=(Celsius*9/5)+32;
        cout<<"   "<<setprecision(2)<<setw(6)<<Fahrenh<<"     "<<endl;
    }   
    //Exit Stage Right
    return 0;
}