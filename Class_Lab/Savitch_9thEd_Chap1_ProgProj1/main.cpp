/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 8, 2015, 6:26 PM
   Purpose: HW (Savitch_9thEd_Chap1_ProgProj1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables
    int op1,op2,sum=0,prod=1;
    
    //Prompt for the two operands
    cout<<"Input two integers of [-2^31,2^31-1]"<<endl;
    cin>>op1>>op2;
   
    //Calculate the sum and the product
    sum=sum+op1;
    sum=sum+op2;
    prod=prod*op1;
    prod=prod*op2;
    
    //Output the results
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" * "<<op2<<" = "<<prod<<endl;
    
    //Exit Stage Right
    return 0;
}

