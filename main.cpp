#include <iostream>
#include "Roller.h"

using namespace std;

// Has to work with XdY+Z format

int main(int argc, char* argv[]){
    /*Declaring Variables*/
    int diceCount = 0;
    int diceType = 0;
    string roll;
    /*Parsing command line arguments*/
    roll = argv[1];
    diceCount = roll.at(0) - 48;
    diceType = roll.at(2) - 48;
    /*Rolling dice*/
    for(int i = 0;i<diceCount;i++){
        cout << Roll(diceType) << ", ";
    }
}