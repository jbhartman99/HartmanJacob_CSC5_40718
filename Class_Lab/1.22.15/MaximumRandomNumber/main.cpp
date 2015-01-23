/* 
 * File:   main.cpp
 * Author: Jacob B. Hartman
 *
 * Created on January 22, 2015, 5:47 PM
 * Purpose: 
 * Title: Maximum
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <cmath>
using namespace std;

//User Libraries
//Global Constants
const unsigned int MAXRAND=pow(2,31);
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number see
    srand(static_cast<unsigned int>(time(0)));
    //Declare a max variable
    int loop=2147000000;
    int max=rand();
    //Now loop to find the maximum random number
    for(int i=2;i<=loop;i++){
        int r=rand();
        if(r>max)max=r;
    }
    //Now output the reuslt
    cout<<"2^31 = "<<MAXRAND<<endl;
    cout<<"Maximum found = "<<max<<endl;
    //Exit state right
    return 0;
}