/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 4:39 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 3
   Title: Winning Division
*/

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
float getSales (string);
void findHighest(string,float,string,float,string,float,string,float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float stQtrSl; //1st division Quarterly sales
    float ndQtrSl; //2nd division Quarterly sales
    float rdQtrSl; //3rd division Quarterly sales
    float thQtrSl; //4th division Quarterly sales
    string divone;
    string divtwo;
    string divthr;
    string divfor;   
    //Introduce the program
    cout<<"Hello! Welcome to the 'Winning Division' program!\n";
    cout<<"This program will do the following:\n";
    cout<<"Find the division with the greatest sales\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt For Input, and peform function 4 times, once for each division
    cout<<"You will now input the name of a division, then enter."<<endl;
    cin>>divone;
    stQtrSl=getSales(divone); //Call to function
    cout<<"\n";
    cout<<"You will now input the name of a division, then enter."<<endl;
    cin>>divtwo;
    ndQtrSl=getSales(divtwo); //Call to function
    cout<<"\n";
    cout<<"You will now input the name of a division, then enter."<<endl;
    cin>>divthr;
    rdQtrSl=getSales(divthr); //Call to function
    cout<<"\n";
    cout<<"You will now input the name of a division, then enter."<<endl;
    cin>>divfor;
    thQtrSl=getSales(divfor); //Call to function
    cout<<"\n";
    //Now call to the other function to compare divisions
    findHighest(divone,stQtrSl,divtwo,ndQtrSl,divthr,rdQtrSl,divfor,thQtrSl);
    //Exit Stage Right
    cout<<" \n";
    cout<<" \n";
    cout<<"Ending program.\n";
    return 0;
}
//Function: getSales
//Asks for the users quarterly sales, validates, then returns QtrSale
float getSales (string divrand){
    float QtrSale; //Quarterly sales for a division
    cout<<"For the "<<divrand<<" division..."<<endl;
    cout<<"Please input the quarterly sales, then enter."<<endl;
    cin>>QtrSale;
    if(QtrSale<0){
        cout<<"That is an invalid sale figure! Exiting program!"<<endl;
        exit(0);
    }
    cout<<"The quarterly sales for this division is $"<<setprecision(2)<<fixed<<QtrSale<<"."<<endl;
    return QtrSale;
}
//Function: findHighest
//Determines the highest performing division
void findHighest(string divone,float stQtrSl,string divtwo,float ndQtrSl,string divthr,float rdQtrSl,string divfor,float thQtrSl){
    if      (stQtrSl>ndQtrSl && stQtrSl>rdQtrSl && stQtrSl>thQtrSl){
        cout<<"The "<<divone<<" Division had the highest sales for the Quarter!"<<endl;
        cout<<"The sales figure was $"<<setprecision(2)<<fixed<<stQtrSl<<endl;
    }
    else if (ndQtrSl>stQtrSl && ndQtrSl>rdQtrSl && ndQtrSl>thQtrSl){
        cout<<"The "<<divtwo<<" Division had the highest sales for the Quarter!"<<endl;
        cout<<"The sales figure was $"<<setprecision(2)<<fixed<<ndQtrSl<<endl;
    }
    else if (rdQtrSl>stQtrSl && rdQtrSl>ndQtrSl && rdQtrSl>thQtrSl){
        cout<<"The "<<divthr<<" Division had the highest sales for the Quarter!"<<endl;
        cout<<"The sales figure was $"<<setprecision(2)<<fixed<<rdQtrSl<<endl;
    }
    else if (thQtrSl>stQtrSl && thQtrSl>ndQtrSl && thQtrSl>rdQtrSl){
        cout<<"The "<<divthr<<" Division had the highest sales for the Quarter!"<<endl;
        cout<<"The sales figure was $"<<setprecision(2)<<fixed<<thQtrSl<<endl;
    }
    else {
        cout<<"Something went wrong!"<<endl;
        cout<<"Start over!"<<endl;
        exit(0);
    }
}
