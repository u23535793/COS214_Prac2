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

Boatman::~Boatman(){

}