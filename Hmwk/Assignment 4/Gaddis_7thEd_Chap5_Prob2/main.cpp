/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 25, 2015, 10:32 AM
   Purpose: Gaddis, 7th Edition, Chapter 5, Problem 2
   Title: Characters for the ASCII Codes
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
    char asciicd; //ASCII code to be output
    int counter;  //Counter
    //Introduce the program
    cout<<"Hello! Welcome to the 'Characters for the ASCII Codes' program!\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt for input
    cout<<"This program is about to output the ASCII characters,\n";
    cout<<"from 0 to 127.\n";
    cout<<"\n";
    //Perform conditional statement and output to screen
    for (counter=0;counter<15;counter++){
        cout<<counter<<"  ";
    }
    cout<<"\n";
    cout<<"------------------------------------------------"<<endl;
    for (counter=32;counter<48;counter++){
        asciicd=(char)counter;
        cout<<asciicd<<"  ";
    }
    cout<<"\n";
    for (counter=48;counter<64;counter++){
        asciicd=(char)counter;
        cout<<asciicd<<"  ";
    }
    cout<<"\n";
    for (counter=64;counter<80;counter++){
        asciicd=(char)counter;
        cout<<asciicd<<"  ";
    }
    cout<<"\n";
    for (counter=80;counter<96;counter++){
        asciicd=(char)counter;
        cout<<asciicd<<"  ";
    }
    cout<<"\n";
    for (counter=96;counter<112;counter++){
        asciicd=(char)counter;
        cout<<asciicd<<"  ";
    }
    cout<<"\n";
    for (counter=112;counter<128;counter++){
        asciicd=(char)counter;
        cout<<asciicd<<"  ";
    }
    cout<<"\n";
    //Exit Stage Rightc
    cout<<"\n";
    cout<<"Ending program.\n";
    return 0;
}
