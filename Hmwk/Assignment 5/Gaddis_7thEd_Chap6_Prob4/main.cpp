/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 5:28 PM
   Purpose: Gaddis, 7th Edition, Chapter 6, Problem 4
   Title: Safest Driving Area
*/

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//User Libraries
//Global Constants
string citynor="North"; //Name for city north
string citysou="South"; //Name for city south
string cityeas="East" ; //Name for city east
string citywes="West" ; //Name for city west
string citycen="Cntrl"; //Name for city central
//Function Prototypes
int getNumAccidents(string);
void findLowest(int,int,int,int,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float  totlnor; //Accident total for that region
    float  totlsou; //Accident total for that region
    float  totleas; //Accident total for that region
    float  totlwes; //Accident total for that region
    float  totlcen; //Accident total for that region
    //Introduce the program
    cout<<"Hello! Welcome to the 'Safest Driving Area' program!\n";
    cout<<"This program will do the following:\n";
    cout<<"Find the safest driving area\n";
    cout<<"Starting program...\n";
    cout<<"\n";
    //Prompt For Input, and perform function 5 times, once for each region
    cout<<"The region being entered is "<<citynor<<endl;
    totlnor=getNumAccidents(citynor); //Call to function
    cout<<"\n";
    cout<<"The region being entered is "<<citysou<<endl;
    totlsou=getNumAccidents(citysou); //Call to function
    cout<<"\n";
    cout<<"The region being entered is "<<cityeas<<endl;
    totleas=getNumAccidents(cityeas); //Call to function
    cout<<"\n";
    cout<<"The region being entered is "<<citywes<<endl;
    totlwes=getNumAccidents(citywes); //Call to function
    cout<<"\n";
    cout<<"The region being entered is "<<citycen<<endl;
    totlcen=getNumAccidents(citycen); //Call to function
    cout<<"\n";
    //Now call to the other function to compare divisions
    findLowest(totlnor,totlsou,totleas,totlwes,totlcen);
    //Exit Stage Right
    cout<<" \n";
    cout<<" \n";
    cout<<"Ending program.\n";
    return 0;
}
//Asks for each regions accident totals
int getNumAccidents (string geoname){
    int numacid; //Number of accidents
    cout<<"For the "<<geoname<<" region..."<<endl;
    cout<<"Please input the number of accidents in the last year, then enter."<<endl;
    cin>>numacid;
    if(numacid<0){
        cout<<"That is an invalid number! Exiting program!"<<endl;
        exit(0);
    }
    cout<<"The accident total for this region in the past year is "<<numacid<<"."<<endl;
    return numacid;
}
//Determines the lowest accident area, which is the safest
void findLowest(int totlnor, int totlsou, int totleas, int totlwes, int totlcen){
    if      (totlnor<totlsou && totlnor<totleas && totlnor<totlwes && totlnor<totlcen){
        cout<<"The safest region in the city is "<<citynor<<"!"<<endl;
        cout<<"Its accident total is "<<totlnor<<"."<<endl;
    }
    else if (totlsou<totlnor && totlsou<totleas && totlsou<totlwes && totlsou<totlcen){
        cout<<"The safest region in the city is "<<citysou<<"!"<<endl;
        cout<<"Its accident total is "<<totlsou<<"."<<endl;
    }
    else if (totleas<totlnor && totleas<totlsou && totleas<totlwes && totleas<totlcen){
        cout<<"The safest region in the city is "<<cityeas<<"!"<<endl;
        cout<<"Its accident total is "<<totleas<<"."<<endl;
    }
    else if (totlwes<totlnor && totlwes<totlsou && totlwes<totleas && totlwes<totlcen){
        cout<<"The safest region in the city is "<<citywes<<"!"<<endl;
        cout<<"Its accident total is "<<totlwes<<"."<<endl;
    }
    else if (totlcen<totlnor && totlcen<totlsou && totlcen<totleas && totlcen<totlwes){
        cout<<"The safest region in the city is "<<citycen<<"!"<<endl;
        cout<<"Its accident total is "<<totlcen<<"."<<endl;
    }
    else {
        cout<<"Something went wrong!"<<endl;
        cout<<"Start over!"<<endl;
        exit(0);
    }
}
