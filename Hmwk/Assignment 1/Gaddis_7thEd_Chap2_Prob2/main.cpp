/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 * Created on January 11, 2015, 5:34 PM
 * Purpose: Gaddis, 7th Ed, Chapter 2, Problem 2
 * Title: Sales Prediction
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
    float PctTotSl; //Percent of Total Sales for East Coast Division
    int TotalSl; //Dollar ammount of Total Sales for Company
    int TotalEC; //Dollar amount of total sales for East Coast Division
    
    //Assign Variable Values
    PctTotSl=6.2e-1;
    TotalSl=4.6e6;
    TotalEC=TotalSl*PctTotSl;
    
    //Output to Screen
    cout<<"The East Coast Division of the Company generates "<<endl;
    cout<<PctTotSl*100<<"% of sales for the entire company."<<endl;
    cout<<endl;
    cout<<"The Company is projected to generate $"<<TotalSl<<" in sales this year."<<endl;
    cout<<endl;
    cout<<"Therefore we can expect the East Coast Divsion to "<<endl;
    cout<<"generate $"<<TotalEC<<" in sales this year."<<endl;
    
    //Exit Stage Right    
    return 0;
}


