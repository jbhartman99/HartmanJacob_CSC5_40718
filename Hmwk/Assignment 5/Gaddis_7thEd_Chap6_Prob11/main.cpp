/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 8:23 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 11
   Title: Star Search
*/

//System Libraries
#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
float getJudgeData();
void calcScore(float,float,float,float,float);
float findLowest(float,float,float,float,float);
float findHighest(float,float,float,float,float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float score1,score2,score3,score4,score5; //judges scores
    //Introduce the program
    cout<<"Welcome to program! Starting program!\n";
    cout<" \n";
    //Call Function to get Judge Data
    cout<<"Be ready to input Judge score data"<<endl;
    score1=getJudgeData();
    score2=getJudgeData();
    score3=getJudgeData();
    score4=getJudgeData();
    score5=getJudgeData();
    //Call voidcalcscore to display the average
    calcScore(score1,score2,score3,score4,score5);
    //Exit Stage Right
    cout<<"\n";
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}
float getJudgeData(){
    //Declare input variable
    float score;
    cout<<"What is the judge's score?\n";
    cin>>score;
    return score;
}
void calcScore(float score1,float score2,float score3,float score4,float score5){
    float total=(score1+score2+score3+score4+score5
        -findLowest(score1,score2,score3,score4,score5)
        -findHighest(score1,score2,score3,score4,score5))/3;
    cout<<"Average after getting rid of highest and lowest is "<<total<<endl;
}
float findLowest(float score1,float score2,float score3,float score4,float score5){
    float max=score1;
    if(max<score2)max=score2;
    if(max<score3)max=score3;
    if(max<score4)max=score4;
    if(max<score5)max=score5;
    return max;
}
float findHighest(float score1,float score2,float score3,float score4,float score5){
    float min=score1;
    if(min>score2)min=score2;
    if(min>score3)min=score3;
    if(min>score4)min=score4;
    if(min>score5)min=score5;
    return min;
}
