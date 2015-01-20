/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 19, 2015, 10:55 PM
   Purpose: Gaddis, 7th Edition, Chapter 4, Problem 14
   Title: Running the Race
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main() {
    //Declare Variables
    string Runner1;//Name of runner 1
    string Runner2;//Name of runner 2
    string Runner3;//Name of runenr 3
    int secs1;//Time of runner 1 in seconds
    int secs2;//Time of runner 2 in seconds
    int secs3;//Time of runner 3 in seconds
    //Introduce the program
    cout<<"Hello! Welcome to the 'Running the Race' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for user input
    cout<<"What is the name of the three runners and their finish time?\n";
    cout<<"Please enter each of the following for each runner\n";
    cout<<"The runner and his time in seconds.\n";
    cout<<"Runner 1: \n";
    getline(cin, Runner1);
    cout<<"Time\n";
    cin>>secs1;
    cin.ignore();
    cout<<"Runner 2: \n";
    getline(cin, Runner2);
    cout<<"Time\n";
    cin>>secs2;
    cin.ignore();
    cout<<"Runner 3: \n";
    getline(cin, Runner3);
    cout<<"Time\n";
    cin>>secs3;
    cin.ignore();
    cout<<"\n";
    //Conditional Statement to assure number positivty
    if ((secs1>=0)&&(secs2>=0)&&(secs3>=0)){
        //Conditional statement to determine finish order
        if ((secs1<secs2)&&(secs1<secs3)){
            cout<<"1st:   "<<Runner1<<"   "<<secs1<<".\n";
            if (secs2<secs3){
                cout<<"2nd:   "<<Runner2<<"   "<<secs2<<".\n";
                cout<<"3rd:   "<<Runner3<<"   "<<secs3<<".\n";
            }
            else{
                cout<<"2nd:   "<<Runner3<<"   "<<secs3<<".\n";
                cout<<"3rd:   "<<Runner2<<"   "<<secs2<<".\n";
            }
        }
        else if((secs2<secs1)&&(secs2<secs3)){
            cout<<"1st:   "<<Runner2<<"   "<<secs2<<".\n";
            if (secs1<secs3){
                cout<<"2nd:   "<<Runner1<<"   "<<secs1<<".\n";
                cout<<"3rd:   "<<Runner3<<"   "<<secs3<<".\n";
            }
            else{
                cout<<"2nd:   "<<Runner3<<"   "<<secs3<<".\n";
                cout<<"3rd:   "<<Runner1<<"   "<<secs1<<".\n";
            }     
        }
        else if((secs3<secs1)&&(secs3<secs2)){
            cout<<"1st:   "<<Runner3<<"   "<<secs3<<".\n";
            if (secs1<secs2){
                cout<<"2nd:   "<<Runner1<<"   "<<secs1<<".\n";
                cout<<"3rd:   "<<Runner2<<"   "<<secs2<<".\n";
            }
            else{
                cout<<"2nd:   "<<Runner2<<"   "<<secs2<<".\n";
                cout<<"3rd:   "<<Runner1<<"   "<<secs1<<".\n";
            }     
        }
        else{
            cout<<"THAT IS INVALID!!!"<<endl;
        }
    }
    else{
        cout<<"THAT IS INVALID!!!"<<endl;
    }
    //Exit Stage Right
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}