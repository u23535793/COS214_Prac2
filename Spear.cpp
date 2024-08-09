#include "Spear.h"

#include <iostream>
using namespace std; 

/* Attributes: 
        int attack 
        int capacity
        int supply     */

Spear::Spear(){
    this->attack = 25; 
    this->capacity = 1; 
    this->supply = 1; 
}

int Spear::useWeapon(){
    return this->attack; 
}

void Spear::reload(){
    cout << "Cannot reload spear" << endl; 
}

int Spear::getSupply(){
    return this->supply; 
}