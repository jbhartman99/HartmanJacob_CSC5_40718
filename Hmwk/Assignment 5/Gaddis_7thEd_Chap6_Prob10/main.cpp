/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 9:08 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 10
   Title: Lowest Score Drop
*/

//System Libraries
#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
float getScore();
void calcScore(float,float,float,float,float);
float findLowest(float,float,float,float,float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float s1,s2,s3,s4,s5; //test scores
    //Introduce the program
    cout<<"Welcome to Russian-made program! Starting program!\n";
    cout<" \n";
    //Call Function to get Test Data
    cout<<"Be ready to input test score data"<<endl;
    s1=getScore();
    s2=getScore();
    s3=getScore();
    s4=getScore();
    s5=getScore();
    //Call voidcalcscore to display the average
    calcScore(s1,s2,s3,s4,s5);
    //Exit Stage Right
    cout<<"\n";
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}
float getScore(){
    //Declare input variable
    float score;
    cout<<"What is the test score?\n";
    cin>>score;
    return score;
}
void calcScore(float s1,float s2,float s3,float s4,float s5){
    float total=(s1+s2+s3+s4+s5
        -findLowest(s1,s2,s3,s4,s5))/4;
    cout<<"Average after getting rid of lowest is "<<total<<endl;
}
float findLowest(float s1,float s2,float s3,float s4,float s5){
    float min=s1;
    if(min>s2)min=s2;
    if(min>s3)min=s3;
    if(min>s4)min=s4;
    if(min>s5)min=s5;
    return min;
}