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

class JacobsClass{ 
public:
    JacobsClass(string y){ //Allows us to write a string for each object
        setName(y);
    }
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
private:
    string name;   
};

//Execution Begins Here

//Main
int main(int argc, char** argv){
    JacobsClass JO("Jacob Bradley Hartman"); //Class Objectfilename("put words here")
        cout << JO.getName() << endl;
    JacobsClass JO2("Stupid McPoopy"); //"Each Object in the class is given a set of variables"
        cout << JO2.getName() << endl;
    
    return 0;
}

//Ran successfully on 10/7/13