/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 19, 2015, 2:29 PM
   Purpose: Gaddis, 7th Edition, Chapter 4, Problem 23
   Title: Internet Service Provider
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char Letter;//Identity of the package
    char A,B,C;//Possible choices for if-else
    float A_Price;//Price per hour of package A
    float B_Price;//Price per hour of package B
    float C_Price;//Price per hour of package C
    int A_Hours;//Number of hours provided for package A
    int B_Hours;//Number of hours provided for package B
    int Act_Hrs;//Actual number of hours used by customer
    float A_Adtl;//Price for additional hours
    float B_Adtl;//Price for additional hours
    float Bl_Totl;//Bl_Totl
    //Assign some variable values
    A_Price=9.95;
    B_Price=14.95;
    C_Price=19.95;
    A_Hours=10;
    B_Hours=20;
    A_Adtl=2;
    B_Adtl=1;
    //Introduce the program
    cout<<"Hello! Welcome to the 'Internet Service Provider' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Output information on packages
    cout<<"We, your ISP, have three different subscription packages.\n";
    //Prompt for user input
    cout<<"Please input the letter identity of your package, then enter.\n";
    cout<<"The input must be 'A', 'B', or 'C'.\n";
    cin>>Letter;
    cout<<"Please input the number of hours used for your subscription.\n";
    cin>>Act_Hrs;
    cout<<"\n";
    //Calculte bill using if-else
    //Calculate bill using switch and a nested if-else then output to screen
    if (Act_Hrs>744){
        cout<<"There are only 744 hours in a month!\n";
        cout<<"Start over program\n";
    }
    else{
        switch (Letter){
            case 'A':
                if (Act_Hrs<=A_Hours){
                    Bl_Totl=A_Price;
                }
                else {
                    Bl_Totl=(A_Price+((Act_Hrs-A_Hours)*A_Adtl));
                };
                cout<<"The total bill is $"<<Bl_Totl<<".\n";
                break;
            case 'B':
                if (Act_Hrs<=B_Hours){
                    Bl_Totl=B_Price;
                }
                else {
                    Bl_Totl=(B_Price+((Act_Hrs-B_Hours)*B_Adtl));
                };
                cout<<"The total bill is $"<<Bl_Totl<<".\n";
                break;
            case 'C':
                Bl_Totl=C_Price;
                cout<<"The total bill is $"<<Bl_Totl<<".\n";
                break;              
            default: cout<<"That is an invalid package plan.\n";
        }
    }    
    cout<<"\n";
    //Exit Stage Right
    cout<<"Ending program.\n";
    return 0;
}


