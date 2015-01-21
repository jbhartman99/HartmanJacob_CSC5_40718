/* 
 * File:   main.cpp
 * Author: rcc
 * Created on January 20, 2015, 6:45 P
 * Purpose: Gaddis, 7th Edition, Chapter 5, Problem 22
 * Title: Square Display (modified from the book but retains necessary
 *        requirements.
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int WidHght;
    //Prompt for the input
    cout<<"How large do you want the character square?\n";
    cin>>WidHght;
    cout<<"\n";
    //Utilize countable loops
    for(int row=1;row<=WidHght;row++){
        for(int col=1;col<=2*WidHght;col++){
            cout<<"X";
        }
        cout<<endl;
    }
    cout<<endl;
    //Exit Stage Right
    cout<<"Program ending.\n";
    return 0;
}

