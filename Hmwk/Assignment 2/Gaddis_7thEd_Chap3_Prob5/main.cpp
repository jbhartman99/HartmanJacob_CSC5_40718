/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 3:03 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 5
 * Title: Box Office
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float GrsProf; //Gross Profit
    float NetProf; //Net Profit after payment to distributor
    float PaidDst; //Amount paid to Distributor
    string NameMov; //Name of the movie
    float adltprc; //Price of adult ticket
    float chldprc; //Price of child ticket
    int adltnum; //Number of adult tickets sold
    int chldnum; //Number of child tickets sold
    float adltprf; //Profit from adult ticket sales
    float chldprf; //Profit from child ticket sales
    float ThtrPct; //Percent of Gross profit that the theater gets to keep
    //Assign some variable values
    chldprc=3;
    adltprc=6;
    ThtrPct=.2;
    //Introduce the program to the user
    cout<<"Hello! Welcome to the 'Box Office' program!"<<endl;
    cout<<"Prompting for user input..."<<endl;
    cout<<"\n";
    //Prompt for input
    cout<<"What is the name of the movie?"<<endl;
    getline(cin, NameMov);
    cout<<"\n";
    cout<<"Input, in order, the number of adult and child tickets sold."<<endl;
    cin>>adltnum>>chldnum;
    cout<<"\n";
    //Perform calculations
    adltprf=adltnum*adltprc;
    chldprf=chldnum*chldprc;
    GrsProf=adltprf+chldprf;
    NetProf=GrsProf*ThtrPct;
    PaidDst=GrsProf-NetProf;     
    //Output to screen
    cout<<"Movie report"<<endl;
    cout<<"------------"<<endl;
    cout<<"\n";
    cout<<fixed;
    cout<<setw(25)<<"Movie Name:"<<setw(10)<<"''"<<NameMov<<"''"<<endl; 
    cout<<setw(25)<<"Adult Tickets Sold:"<<setw(10)<<adltnum<<endl;  
    cout<<setw(25)<<"Child Tickets Sold:"<<setw(10)<<chldnum<<endl;  
    cout<<setw(25)<<"Gross Box Office Profit:"<<setprecision(2)<<setw(10)<<"$"<<GrsProf<<endl;  
    cout<<setw(25)<<"Net Box Office Profit:"<<setprecision(2)<<setw(10)<<"$"<<NetProf<<endl;  
    cout<<setw(25)<<"Amnt Paid to Distributor:"<<setprecision(2)<<setw(10)<<"$"<<PaidDst<<endl;  
    //Exit Stage Right
    return 0;
}
