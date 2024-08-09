#include "Boatman.h"

#include <iostream>
using namespace std; 

Boatman::Boatman(int num, string name){

    healthPerSoldier = 100;
    damagePerSoldier = 0;
    defencePerSoldier = 50;
    amountOfSoldiersPerUnit = num;
    unitName = name;
}

Soldiers* Boatman::clone(){
    return new Boatman(this->amountOfSoldiersPerUnit, this->unitName);

}
void Boatman::engage(){

}
void Boatman::disenagage(){

}
void Boatman::prepare(){

}
void Boatman::execute(){

}
void Boatman::retreat(){

}
void Boatman::rest(){

}


int Boatman::getHealth(){
    return this->healthPerSoldier;
}

int Boatman::getUnitAmount(){
    return this->amountOfSoldiersPerUnit;
}

int Boatman::getDamage(){
    return this->amountOfSoldiersPerUnit; // ?? damage per soldier
}

int Boatman::getDefence(){
    return this->amountOfSoldiersPerUnit; // ?? defence per soldier 
}

Boatman::~Boatman(){

}
