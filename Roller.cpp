//
// Created by gcolm on 04/08/2020.
//

#include "Roller.h"
#include <random>
#include <ctime>

/*
 *  1. function the generates a random number
 */
int Roller::Roll(int DiceType){
    return (rand() % DiceType) + 1;
};
Roller::Roller() {
    srand((unsigned) time(0));
}