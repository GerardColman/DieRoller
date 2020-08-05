//
// Created by gcolm on 04/08/2020.
//

#include "Roller.h"
#include <cstdlib>
#include <ctime>

/*
 *  1. function the generates a random number
 */
int Roller::Roll(int DiceType){
    srand((unsigned)time(nullptr));
    return (rand() % DiceType) + 1;
};