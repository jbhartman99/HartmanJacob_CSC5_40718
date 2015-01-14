/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 13, 2015, 7:05 PM
   Purpose: Finish the assignment in lab
   Title: Truth Table
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare 2 boolean variables and 2 integers
    bool X,Y;
    int a=2,b=3;
    //Output the Heading
    cout<<"X  Y  !X  !Y  X&&Y  X||Y  X^Y  X^Y^Y  X^Y^X  !(X||Y)  !X&&!Y  !(X&&Y)  !X||!Y"<<endl;
    //Assign Variables
    X=true;Y=true;
    //Fill in the first row
    cout<<(X?'T':'F')<<"  ";
    cout<<(Y?'T':'F')<<"   ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"    ";
    cout<<(X&&Y?'T':'F')<<"     ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<"  "<<(X^Y^X?'T':'F')<<"       ";
    cout<<(!(X||Y)?'T':'F')<<"        ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<" "<<endl;
    cout<<" "<<endl;
    //Assign Variables
    X=false;
    //Fill in the second row
   cout<<(X?'T':'F')<<"  ";
    cout<<(Y?'T':'F')<<"   ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"    ";
    cout<<(X&&Y?'T':'F')<<"     ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<"  "<<(X^Y^X?'T':'F')<<"       ";
    cout<<(!(X||Y)?'T':'F')<<"        ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<" "<<endl;
    cout<<" "<<endl;
    
    //Show values before swap
    cout<<"Before temp swap"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    //Perform a swap
    int temp=a;
    a=b;
    b=temp;
    //Output the values after swap
    cout<<"After temp swap"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    //Perform another swap
    a=a^b;
    b=a^b;
    a=a^b;
    //Output the values after swap
    cout<<"After xor swap"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    //Exit stage right
    return 0;
}  
