/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 * Created on January 11, 2015, 10:27 PM
 * Purpose: Gaddis, 7th Ed, Chapter 2, Problem 8
 * Title: Total Purchase
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
    float prc1, prc2, prc3, prc4, prc5; //Prices of the 5 items
    float subtotl; //Item subtotal
    float saletax; //Sale tax percentage
    float taxsbtl; //Sale tax subtotal
    float total;  //Sale total
    
    //Assign Variable Values
    prc1=1.295e1;
    prc2=2.495e1;
    prc3=6.95;
    prc4=1.495e1;
    prc5=3.95;
    subtotl=prc1+prc2+prc3+prc4+prc5;
    saletax=6e-2;
    taxsbtl=saletax*subtotl;
    total=taxsbtl+subtotl;
    
    //Output to Screen
    cout<<" - - - Individiual item prices - - - "<<endl;
    cout<<prc1<<endl<<prc2<<endl<<prc3<<endl<<prc4<<endl<<prc5<<endl;
    cout<<"Subtotal:     $"<<subtotl<<endl;
    cout<<"Tax Subtotal: $"<<taxsbtl<<" @ 6% tax"<<endl;
    cout<<"Sale total:   $"<<total<<endl;
    
    //Exit Stage Right    
    return 0;
}

