/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 * Created on January 11, 2015, 6:33 PM
 * Purpose: Gaddis, 7th Ed, Chapter 2, Problem 5
 * Title: Average of Values
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
    int num1, num2, num3, num4, num5; //The five numbers to be averages
    int sum; //The sum of the five numbers
    int numonum; //The number of numbers to be averaged
    int avg;
    
    //Assign Variable Values
    numonum=5;
    num1=28;
    num2=32;
    num3=37;
    num4=24;
    num5=33;
    sum=num1+num2+num3+num4+num5;
    avg=sum/numonum;
    
    //Output to Screen
    cout<<"The average of the five numbers is "<<avg<<"."<<endl;
    
  
    //Exit Stage Right    
    return 0;
}


