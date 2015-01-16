/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 2:29 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 3
 * Title: Test Average
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
    float score1; //Test score number 1
    float score2; //Test score number 2
    float score3; //Test score number 3
    float score4; //Test score number 4
    float score5; //Test score number 5
    float sumscrs; //Sum of the scores
    float avgscrs; //Average of the scores
    //Introduce the program to the user
    cout<<"Hello! Welcome to the 'Test Average' program!"<<endl;
    cout<<"Prompting for user input..."<<endl;
    cout<<"\n";
    //Prompt for input
    cout<<"Please list, in order, the scores of the 5 tests..."<<endl;
    cout<<"\n";
    cin>>score1>>score2>>score3>>score4>>score5;
    //Perform calculations
    sumscrs=score1+score2+score3+score4+score5;
    avgscrs=sumscrs/5;
    //Output to screen
    cout<<setprecision(2)<<fixed;
    cout<<"The five scores were..."<<endl;
    cout<<score1<<" "<<score2<<" "<<score3<<" "<<score4<<" "<<score5<<endl;
    cout<<"The average of these fives scores is..."<<endl;
    cout<<setprecision(1)<<fixed<<avgscrs<<endl;
    
            
    //Exit Stage Right
    return 0;
}
