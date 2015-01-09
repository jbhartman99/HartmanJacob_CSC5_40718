/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 8, 2015, 7:18 PM
   Purpose: HW (Savitch_7thEd_Chap2_Prob17
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent Conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    float skPrice=6.177e1f;//Stock Price in dollars
    unsigned short nShares=600;//Number of shares of stock
    char comish=2;//2 percent sales commission
    
    //Calculate sales price, commission, and total in dollas
    float slPrice=nShares*skPrice;//Sales prices
    float cmPrice=slPrice*comish/CONVPCT;
    float totPaid=slPrice+cmPrice;
    
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Sales Price = $"<<setw(8)<<slPrice<<endl;
    cout<<"Commission  = $"<<setw(8)<<cmPrice<<endl;
    cout<<"Total Price = $"<<setw(8)<<totPaid<<endl;
    
    //Exit Stage Right
    return 0;
}

