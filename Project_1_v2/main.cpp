/* 
   File:   main.cpp
   Author: Jacob Hartman
   Created on January 26, 2015, 4:05 PM
   Purpose: To simplify copying and pasting for new projects
   Title: Project Template
*/

//System Libraries
#include <iostream>     //Standard library
#include <ctime>        //For time function
#include <cstdlib>      //For rand and srand
#include <string>       //string variables
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
void programIntro();
int cardAction(int, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int     chip_ct=500; //Chip count, initialized
    int     userbet;     //How much user bets
    string  name;        //User name input
    char    yesorno;     //First question, do you want to play?
    char    nooryes;     //Second question, you want play?
    //Call to function, programIntro(), introduces program
    void ProgramIntro();
    cout<<endl;
    //Username;
    cout<<"Please input your preferred user name, then enter."<<endl;
    getline(cin,name);
    //Switch inside a switch inside a do-while to determine if user wants to play...
    //Assuming he has enough chips that is...
    do{
        //Prompt for user input
        cout<<endl;
        cout<<"Does "<<name<<" want to play?"<<endl;
        cout<<"(Please input 'Y' or 'N', then enter)"<<endl;
        cin>>yesorno;
        //Input yes or no, account for default errors
        switch(yesorno){
            case 'y':case 'Y':
                cout<<"You entered "<<yesorno<<"."<<endl<<endl;
                //Output chip count
                cout<<"Your chip count is... ";
                cout<<chip_ct<<"."<<endl;
                cout<<"How much does "<<name<<" want to bet?"<<endl;
                cin>>userbet;
                cout<<endl;
                //Ensure bet isnt bigger than chip count
                if (userbet>chip_ct){
                    cout<<"You can't bet more than you have. You're a liar!"<<endl;
                    cout<<"GET OUT!!!"<<endl;
                    cout<<endl;
                    cout<<"You've been kicked out of the game! Ending program"<<endl;
                    //Exit stage
                    exit(0);
                }
                //Call to function, this is where the magic happens
                chip_ct=cardAction(chip_ct, userbet);
                break;
            case 'n':case 'N':
                cout<<"You entered "<<yesorno<<"."<<endl;
                cout<<"This program will now end."<<endl;
                //Exit stage behind
                return 0;
            default:
                cout<<"Default error: That is not a valid response."<<endl;
                cout<<"Please try again."<<endl;
                cout<<"Does "<<name<<" want to play?"<<endl;
                cin>>nooryes;
                switch(nooryes){
                    case 'y':case 'Y':
                        cout<<"You entered "<<nooryes<<"."<<endl<<endl;
                        //Output chip count
                        cout<<"Your chip count is... ";
                        cout<<chip_ct<<"."<<endl;
                        cout<<"How much does "<<name<<" want to bet?"<<endl;
                        cin>>userbet;
                        cout<<endl;
                        //Call to function, this is where the magic happens
                        chip_ct=cardAction(chip_ct, userbet);
                        break;
                    case 'n':case 'N':
                        cout<<"You entered "<<nooryes<<"."<<endl;
                        cout<<"This program will now end."<<endl;
                        //Exit stage left
                        return 0;
                    default:
                        cout<<"Double default error: That is not a valid response, again."<<endl;
                        cout<<"Please do not try again, you failed, ultimately."<<endl;    
                        cout<<"This program will now end."<<endl;
                        //Exit stage right
                        return 0;
                }               
        }
    }
    //As long as chip counter is positive, game will prompt for input
    while(chip_ct>0);
    //Chip count is no longer positive. Exit the stage smothered in pitiful laughter.
    cout<<"Ha! You're out of chips! Later, "<<name<<", loser."<<endl;
    cout<<"This program will now end."<<endl;
    return 0;
}
//programIntro(), function that introduces the program
//cardAction(), function where actual black jack is played
int cardAction(int chip_ct, int userbet){
    //Seeding random number generator
    srand(time(0));
     //Array for deck
    int cards[52];
    //Declare local variables and initialize values
    char hitosta;     //Hit or stand to get 3rd card for player
    char hit3sta;     // to get 4th
    char hit2sta;     // to get 5th
    char hit1sta;     // to get 6th
    char hitstao;     //Hit or stand to get 3rd card for dealer
    char hitsta1;     // to get 4th
    char hitsta2;     // to get 5th
    char hitsta3;     // to get 6th
    int nuchpct;      //Chip count after win or loss, "New chip count"
    int count;        //For loop count to shuffle cards
    int coun3;        //For loop count, Jack Queen King, conversion
    int coun4;        //For loop count, Hit or stand
    int countr5;
    int playsum;      //Sum of players hand he was dealt
    int dealsum;      //Sum of dealers hand he was dealt
    //Shuffle cards, AKA initialize card values
    for (count=0;count<52;count++){
        cards[count]=1+rand()%13;
    }  
    //Display dealer cards
    cout<<"The dealer has a hidden card and a(n) ";
    switch (cards[1]){
        case 1 : cout<<"Ace. "; break;
        case 11: cout<<"Jack. ";break;
        case 12: cout<<"Queen. ";break;
        case 13: cout<<"King. ";break;
        default: cout<<cards[1]<<". ";
    }
    cout<<endl;
    //Display user cards
    cout<<"The user has a(n) ";
    switch (cards[51]){
        case 1 : cout<<"Ace"; break;
        case 11: cout<<"Jack";break;
        case 12: cout<<"Queen";break;
        case 13: cout<<"King";break;
        default: cout<<cards[51];
    }
    cout<<" and a(n) ";
    switch (cards[50]){
        case 1 : cout<<"Ace."; break;
        case 11: cout<<"Jack.";break;
        case 12: cout<<"Queen.";break;
        case 13: cout<<"King.";break;
        default: cout<<cards[50]<<".";
    }
    cout<<endl;
    
    //Convert all Kings, Jacks, and Queens to value of 10... Aces to 1
    for (coun3=0;coun3<52;coun3++){
        cards[coun3];
        if (cards[coun3]==11||cards[coun3]==12||cards[coun3]==13){
            cards[coun3]=10;
        }
        if (cards[coun3]==1){
            cards[coun3]=1;
        }
    }
    //Display sum of hand
    playsum=cards[51]+cards[50];
    cout<<"The value of the players hand is "<<playsum<<"."<<endl;
    cout<<endl;
    //Automatic 21 scenario
    if(playsum==21){
        cout<<"You won on the deal! Good Job!"<<endl;
        chip_ct=chip_ct+userbet;
        return chip_ct;
        cout<<endl;
    }
    
    //hitOrStand
    cout<<"Will the user hit or stand?"<<endl; 
    cout<<"(enter 'S' or 'H')"<<endl;
    cin>>hitosta;
    switch (hitosta){
        case 'h':
        case 'H':
            playsum+=cards[49];
            cout<<"You hit..."<<endl;
            cout<<"You are given a card..."<<endl;
            cout<<"It is a "<<cards[49]<<"!"<<endl;
            cout<<"Player sum is "<<playsum<<endl;
            if (playsum<21){
                cout<<"Will the user hit or stand?"<<endl; 
                cin>>hit1sta;
                switch (hit1sta){
                    case 'h':
                    case 'H':
                        playsum+=cards[48];
                        cout<<"You hit..."<<endl;
                        cout<<"You are given a card..."<<endl;
                        cout<<"It is a "<<cards[48]<<"!"<<endl;
                        cout<<"Player sum is "<<playsum<<endl;
                        if (playsum<21){
                            cout<<"Will the user hit or stand?"<<endl; 
                            cin>>hit2sta;
                            switch (hit2sta){
                                case 'h':
                                case 'H':
                                    playsum+=cards[47];
                                    cout<<"You hit..."<<endl;
                                    cout<<"You are given a card..."<<endl;
                                    cout<<"It is a "<<cards[47]<<"!"<<endl;
                                    cout<<"Player sum is "<<playsum<<endl;
                                    if (playsum<21){
                                        cout<<"Will the user hit or stand?"<<endl; 
                                        cin>>hit3sta;
                                        switch (hit3sta){
                                            case 'h':
                                            case 'H':
                                                playsum+=cards[46];
                                                cout<<"You hit..."<<endl;
                                                cout<<"You are given a card..."<<endl;
                                                cout<<"It is a "<<cards[46]<<"!"<<endl;
                                                cout<<"Player sum is "<<playsum<<endl;
                                                if (playsum<21){
                                                    cout<<"You automatically win for not busting after 6 cards!"<<endl;
                                                    chip_ct+=userbet;
                                                }
                                                break;
                                            case 's':
                                            case 'S':
                                                cout<<"You stood..."<<endl;
                                                cout<<"Again, your sum is... "<<playsum<<endl;
                                                break;
                                            default :
                                                cout<<"You can't make that move! GET OUT!"<<endl;
                                                exit(0);
                                        }
                                    }
                                    else{
                                        cout<<"You broke over 21, you lose!"<<endl;
                                        chip_ct-=userbet;
                                        return chip_ct;
                                    }            
                                    break;
                                case 's':
                                case 'S':
                                    cout<<"You stood..."<<endl;
                                    cout<<"Again, your sum is... "<<playsum<<endl;
                                    break;
                                default :
                                    cout<<"You can't make that move! GET OUT!"<<endl;
                                    exit(0);
                            }
                        }
                        else{
                            cout<<"You broke over 21, you lose!"<<endl;
                            chip_ct-=userbet;
                            return chip_ct;
                        }
                        break;
                    case 's':
                    case 'S':
                        cout<<"You stood..."<<endl;
                        cout<<"Again, your sum is... "<<playsum<<endl;
                        break;
                    default :
                        cout<<"You can't make that move! GET OUT!"<<endl;
                        exit(0);
                }
            }
            else{
                cout<<"You broke over 21, you lose!"<<endl;
                chip_ct-=userbet;
                return chip_ct;
            }
            break;
        case 's':
        case 'S':
            cout<<"You stood..."<<endl;
            cout<<"Again, your sum is... "<<playsum<<endl;
            break;
        default :
            cout<<"You can't make that move! GET OUT!"<<endl;
            exit(0);
    }
    cout<<endl;
    //Dealer's turn
    cout<<"Now it's the Dealer's turn..."<<endl;
    //Display dealers cards
    cout<<"The Dealer's hidden card has a value of... ";
    cout<<cards[0]<<"."<<endl;
    dealsum=cards[0]+cards[1];
    cout<<"The Dealer's hand value is... "<<dealsum<<endl;
    for (countr5=2;countr5<=5;countr5++){
        if      (dealsum<=16 && dealsum<playsum){
            cout<<"Dealer hits!"<<endl;
            dealsum+=cards[countr5];
        }
        else if (dealsum<=20 && dealsum>playsum){
            cout<<"Dealer wins!"<<endl;
            cout<<"You lose "<<userbet<<" chip(s)!!!"<<endl;
            chip_ct-=userbet;
            return chip_ct;
        }
        else if (dealsum>=17 && dealsum<=20 && dealsum<playsum){
            cout<<"Dealer hits!"<<endl;
            dealsum+=cards[countr5];
        }
        else if (dealsum==21){
            cout<<"Dealer wins!"<<endl;
            chip_ct-=userbet;
            cout<<"You lose "<<userbet<<" chip(s)!!!"<<endl;
            return chip_ct;
        }
        else if (dealsum>21){
            cout<<"You wins!"<<endl;
            chip_ct+=userbet;
            cout<<"You wins "<<userbet<<" chip(s)!!!"<<endl;
            return chip_ct;
        }
        else if (dealsum==playsum && dealsum<17){
            cout<<"Dealer hits!";
            dealsum+=cards[countr5];
        }
        else if (dealsum==playsum && dealsum>17){
            cout<<"Deater stays!";
            cout<<"Dealer won't budge! It's a tie! No chips lost!"<<endl;
            return chip_ct;
        }
        else {cout<<"something happened bro, restart I think?"<<endl;
            exit(0);
        }
        cout<<"The Dealer was dealt a card with value "<<cards[countr5]<<endl;
        cout<<"The Dealer's hand value is now... "<<dealsum<<endl;    
    }
}
    