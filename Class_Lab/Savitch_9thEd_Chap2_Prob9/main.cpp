/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 6:48 PM
   Purpose: Savitch, 9th Edition, Chapter 2, Problem 9
 * Title: Unknown
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
    int input;
    int sum=0,sumPos=0,sumNeg=0,sumEven=0,sumOdd=0;
    //Prompt for an input and sum
    for(int count=1;count<=10;count++){
        cout<<"Enter an integer!"<<endl;
        cin>>input;
        sum+=input;
        if(input>0)sumPos+=input;
        else sumNeg+=input;
        if(input%2)sumOdd+=input;
        else sumEven+=input;
    }
    //Output the results
    cout<<"The sum          =   "<<setw(4)<<sum<<endl;
    cout<<"The positive sum =   "<<setw(4)<<sumPos<<endl;
    cout<<"The negative sum =   "<<setw(4)<<sumNeg<<endl;
    cout<<"The even sum     =   "<<setw(4)<<sumEven<<endl;
    cout<<"The odd sum      =   "<<setw(4)<<sumOdd<<endl;    
    //Exit Stage Right
    return 0;
}
