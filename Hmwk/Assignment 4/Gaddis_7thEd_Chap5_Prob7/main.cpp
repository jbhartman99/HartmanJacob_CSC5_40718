/* 
 * File:   main.cpp
 * Author: rcc
 * Created on January 20, 2015, 7:42 PM
 * Purpose: Gaddis, 7th Edition, Chapter 5, Problem 7
 * Title: Pennies for Pay
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int salary=1;//Total Pay in number of pennies
    unsigned int totPay=salary;//Total pay after n days
    unsigned short numdays;//Number of days to double
    //Output the number of days to double your wallet
    cout<<"How many days to double your salary?"<<endl;
    cout<<"Your salary starts at $0.01."<<endl;      
    cout<<"Maximum days allowed = 30"<<endl;
    cin>>numdays;
    cout<<fixed<<setprecision(2)<<showpoint;
    //Calculate the result
    for(int day=2;day<=numdays;day++){
        salary*=2;
        totPay+=salary;
        cout<<"After "<<day<<" day(s) ";
        cout<<"your salary    = $"<<setw(5)<<salary/100.0f<<endl;
    }
    cout<<"After "<<numdays<<" day(s) ";
    cout<<"your total pay = $"<<setw(5)<<totPay/100.0f<<endl;
    //Output the result
    
    //Exit Stage Right
    return 0;
}
