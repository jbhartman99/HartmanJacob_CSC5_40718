/* 
 * File:   main.cpp
 * Author: Jacob Hartman
 *
 * Created on October 7, 2013, 8:43 AM
 */

#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes

//Set Class
class JacobsClass{ 
    //Setting as public
    public:
        //Changes name
        void setName(string x){
            name = x;
        }
        //Gets the name
        string getName(){
            return name;
        }
    //Private cannot be accessed directly by main function
    private:
        string name;   
};

//Execution Begins Here

//Main
int main(int argc, char** argv){
    //Object
    JacobsClass JO;
    //Object.separator function
    JO.setName("Sir Mix-a-Lot");
    //Print
    cout << JO.getName() << endl;
    return 0;
}


