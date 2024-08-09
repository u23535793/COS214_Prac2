#include "Sword.h"

#include <iostream>
using namespace std; 

/* Attributes: 
        int attack 
        int capacity
        int supply     */

Sword::Sword(){
    this->attack = 35; 
    this->capacity = 1; 
    this->supply = 1; 
}

int Sword::useWeapon(){
    return this->attack; 
}

void Sword::reload(){
    cout << "Cannot reload sword" << endl; 
}

int Sword::getSupply(){
    return this->supply; 
}