#include <iostream>
#include <ctime>
#include "Roller.h"

using namespace std;

// Has to work with XdY+Z format

int main(int argc, char* argv[]){
    /*Declaring Variables*/
    int diceCount = 0;
    int diceType = 0;
    string roll;
    Roller roller;
    /*Parsing command line arguments*/
    roll = argv[1];
    diceCount = roll.at(0) - 48;
    diceType = roll.at(2) - 48; //If number is greater >= 10, then it puts the next digit of number in next array slot
    cout << roll.at(2) << endl;
    /*Rolling dice*/
    srand(time(nullptr));
    for(int i = 0;i<diceCount;i++){
        cout << roller.Roll(diceType) << ", ";
    }
}