/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 19, 2015, 4:29 PM
   Purpose: Gaddis, 7th Edition, Chapter 4, Problem 4
   Title: Areas of Rectangles
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
    float Width_A; //Width of rectangle A
    float Width_B; //Width of rectangle B
    float Lngth_A; //Length of rectangle A
    float Lngth_B; //Length of rectangle B
    float Area_A; //Area of rectangle A
    float Area_B; //Area of rectangle B
    //Assign some variable values, None to be assigned
    //Introduce the program
    cout<<"Hello! Welcome to the 'Areas of Rectangles' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for user input
    cout<<"First, please input the length and width of the first rectangle, ";
    cout<<"consecutively and separated by a space.\n";
    cin>>Width_A>>Lngth_A;
    cout<<"Second, please input the length and width of the second rectangle, ";
    cout<<"consecutively and separated by a space.\n";
    cin>>Width_B>>Lngth_B;
    //Calculate results
    Area_A=Width_A*Lngth_A;
    Area_B=Width_B*Lngth_B;
    //Make comparison and output to screen
    if (Area_A>Area_B){
    
        cout<<"The first rectangle is larger than the second rectangle!"<<endl;
    }
    else if (Area_A<Area_B){
        cout<<"The second rectangle is larger than the first rectangle!"<<endl;
    }
    else {
            cout<<"The areas of the rectangles are the same!";
    }
    cout<<"\n";
    
    //Exit Stage Right
    cout<<"Ending program.\n";
    return 0;
}


