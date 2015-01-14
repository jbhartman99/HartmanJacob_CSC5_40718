/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 13, 2015, 5:59 PM
   Purpose: 
 * Title: Metric Conversion

 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CMTNONS=3.5273892e4f; // Conversion from metric tons to ounces

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float wtPackOz;
    float wtPackTn;
    float nPackTon;
    
    //Prompt user for cereal weights
    //cout
    //cout
    //cout
    cin>>
            
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTon=1/wtPackTn;
    
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(merics tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<end;
    
    //Ask if user would like to repeat
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y'){
        //Prompt user for cereal weights.
        cout<<"Input the number of ounces on the cereal"<<endl;
        cout<<"box to convert to metic tons."<<endl;
        cout<<"Forma is flat ddd.ddd (ounces) "<<endl;
        cin<<wtPackOz;
        //Calculate the results
        wtPackTn=wtPackOz/CMTNONS;
        nPackTn=1/wtPackTn;
        //Output the results
        cout<<"Weight of cereal box is "<<wtPackTn<<" (metrics tons)"<<endl;
        cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<endl;
        
    }

    return 0;}