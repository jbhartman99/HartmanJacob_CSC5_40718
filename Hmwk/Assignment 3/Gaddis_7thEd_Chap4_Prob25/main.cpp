/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 19, 2015, 3:37 PM
   Purpose: Gaddis, 7th Edition, Chapter 4, Problem 25
   Title: Internet Service Provider, Part 3
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
    string Month;//Name of the month
    int DayMnth;//Days per that specific month
    int HrsMnth;//Hours per that month
    float A_Price;//Price per hour of package A
    float B_Price;//Price per hour of package B
    float C_Price;//Price per hour of package C
    int A_Hours;//Number of hours provided for package A
    int B_Hours;//Number of hours provided for package B
    int Act_Hrs;//Actual number of hours used by customer
    float A_Adtl;//Price for additional hours
    float B_Adtl;//Price for additional hours
    float Bl_Totl;//Bl_Totl
    float Bl_Save;//Money you would have saved on your bill total
    float BlImagB;//Money on your hypothetical bill with a diffferent package B
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
    //Input and output the month data first
    cout<<"Before calculating your bill, please input the month.\n";
    cin>>Month;     
    if (Month=="January")
        DayMnth=31,HrsMnth=DayMnth*24;
    else if (Month=="February")
        DayMnth=28,HrsMnth=DayMnth*24;
    else if (Month=="March")
        DayMnth=31,HrsMnth=DayMnth*24;
    else if (Month=="April")
        DayMnth=30,HrsMnth=DayMnth*24;
    else if (Month=="May")
        DayMnth=31,HrsMnth=DayMnth*24;
    else if (Month=="June")
        DayMnth=30,HrsMnth=DayMnth*24;
    else if (Month=="July")
        DayMnth=31,HrsMnth=DayMnth*24;
    else if (Month=="August")
        DayMnth=31,HrsMnth=DayMnth*24;
    else if (Month=="September")
        DayMnth=30,HrsMnth=DayMnth*24;
    else if (Month=="October")
        DayMnth=31,HrsMnth=DayMnth*24;
    else if (Month=="November")
        DayMnth=30,HrsMnth=DayMnth*24;
    else if (Month=="December")
        DayMnth=31,HrsMnth=DayMnth*24;
    else
        cout<<"That is not a valid month. Start over the program.\n";
    cout<<"\n";
    cout<<"Please input the letter identity of your package, then enter.\n";
    cout<<"The input must be 'A', 'B', or 'C'.\n";
    cin>>Letter;
    cout<<"Please input the number of hours used for your subscription.\n";
    cin>>Act_Hrs;
    cout<<"\n";
    //Calculate bill using switch and a nested if-else then output to screen
    if (Act_Hrs>HrsMnth){
        cout<<"There are only "<<HrsMnth<<" hours in the month of "<<Month<<"!\n";
        cout<<"Start over the program.\n";
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
                cout<<"\n";
                cout<<"Thank you for subscribing to Package A!\n";
                cout<<"If you'd like to save more money please subscribe ";
                cout<<"to our other packages!\n";
                //Perform internal calculations
                if (Act_Hrs<=B_Hours){
                    BlImagB=B_Price;
                }
                else {
                    BlImagB=(B_Price+((Act_Hrs-B_Hours)*B_Adtl));
                }
                Bl_Save=Bl_Totl-BlImagB;
                cout<<"Your bill with package B would have saved you $"
                        <<Bl_Save<<".\n";
                Bl_Save=Bl_Totl-C_Price;
                cout<<"Your bill with package C would have saved you $"
                        <<Bl_Save<<".\n";
                break;
            case 'B':
                if (Act_Hrs<=B_Hours){
                    Bl_Totl=B_Price;
                }
                else {
                    Bl_Totl=(B_Price+((Act_Hrs-B_Hours)*B_Adtl));
                };
                cout<<"The total bill is $"<<Bl_Totl<<".\n";
                cout<<"\n";
                cout<<"Thank you for subscribing to Package B!\n";
                cout<<"If you'd like to save more money please subscribe ";
                cout<<"to our other package!\n";
                //Perform internal calculations
                Bl_Save=Bl_Totl-C_Price;
                cout<<"Your bill with package C would have saved you $"
                        <<Bl_Save<<".\n";
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


