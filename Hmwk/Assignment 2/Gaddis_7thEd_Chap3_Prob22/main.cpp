/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 15, 2015, 6:48 PM
   Purpose: Gaddis, 7th Edition, Chapter 3, Problem 22
 * Title: Word Game
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
    string name; //persons name
    string age; //persons age
    string city; //name of a city
    string college; //name of a college
    string job; //a type of profession
    string animal; //type of animal
    string nanimal; //name of the animal
    //Introduce the program to the user
    cout<<"Hello! Welcome to the 'Word Game?' program!"<<endl;
    cout<<"Prompting for user input..."<<endl;
    cout<<"\n";
    //Prompt for input
    cout<<"What is your first name? "<<endl;
    cin>>name;
    cout<<"\n";
    cout<<"What is your age? "<<endl;
    cin>>age;
    cout<<"\n";
    cout<<"What is the name of a city? "<<endl;
    cin>>city;
    cout<<"\n";
    cout<<"What is the name of a college? "<<endl;
    cin>>college;
    cout<<"\n";
    cout<<"Name an occupation "<<endl;
    cin>>job;
    cout<<"\n";
    cout<<"Name a species of animal "<<endl;
    cin>>animal;
    cout<<"\n";
    cout<<"What is that animal's name? "<<endl;
    cin>>nanimal;
    cout<<"\n";
    //Perform calculations
    cout<<"Formulating story..."<<endl;
    cout<<"\n";
    //Output to screen
    cout<<
            "There once was a person named "<<name<<" who lived in "<<city
            <<". At the age of "<<age<<", "<<name<<" went to college at "<<
            college<<". "<<name<<" graduated and went to work as a "<<job<<
            ". Then, "<<name<<" adopted a(n) "<<animal<<" named "<<nanimal<<"."
            <<" They both lived happily ever after."<<endl;
    //Exit Stage Right
    return 0;
}


