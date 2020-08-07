#include <iostream>
#include <string>
#include "Roller.h"

using namespace std;

/*
 * CREATED BY GERARD COLMAN
 */

int main(int argc, char* argv[]){
    /*Declaring Variables & Objects*/
    int diceCount = 0;
    int diceType = 0;
    int modifier = 0;
    int dPos = 0; //Position of d in roll string
    int modPos = 0; //Modifier position in roll string
    string roll;
    Roller roller;
    /*Parsing command line arguments*/
    roll = argv[1]; //Copying input into a string
    if(roll.find('-') == -1 && roll.find('+') == -1){ //No modifier found
        dPos = roll.find('d');
        diceCount = stoi(roll.substr(0,dPos));
        diceType = stoi(roll.substr(dPos+1));
    }else{ //Modifier found
        dPos = roll.find('d');
        if(roll.find('-') == -1){ //If a - isnt found
            modPos = roll.find('+');
        }else{ //if a - is found
            modPos = roll.find('-');
        }
        diceCount = stoi(roll.substr(0,dPos));
        diceType = stoi(roll.substr(dPos+1,modPos));
        modifier = stoi(roll.substr(modPos+1));
        if(roll.at(modPos) == '-'){
            modifier *= -1;
        }else{
            modifier *= 1;
        }
    }
    /*Rolling dice*/
    cout << "[";
    for(int i = 0;i<diceCount;i++){
        if(i+1 == diceCount){
            cout << roller.Roll(diceType) + modifier << "]";
            break;
        }
        cout << roller.Roll(diceType) + modifier << ", ";
    }
}