#include "Cannon.h"

#include <iostream>
using namespace std; 

/* Attributes: 
        int attack 
        int capacity
        int supply     */

Cannon::Cannon(){
    this->attack = 15; 
    this->capacity = 10; 
    this->supply = 10; 
}

int Cannon::useWeapon(){
    if (supply != 0)
    {
        --supply;
        return this->attack; 
    }
    else return 0; 
}

void Cannon::reload(){
    if (this->supply == 0)
        this->supply = this->capacity; 
    else 
    {
        this->supply += (this->capacity - this->supply); 
    }
}

int Cannon::getSupply(){
    return this->supply; 
}