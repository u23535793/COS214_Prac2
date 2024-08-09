#include "Infantry.h"

#include <iostream>
using namespace std; 

Infantry::Infantry(int num, string name){

    healthPerSoldier = 80; //because they walk on foot so much
    //we can make it 100 for the first time, but we can change it in rest() to 80
    damagePerSoldier = 0;
    defencePerSoldier = 20;
    amountOfSoldiersPerUnit = num;
    unitName = name;
}

Soldiers* Infantry::clone(){
    return new Infantry(this->amountOfSoldiersPerUnit, this->unitName);

}
void Infantry::engage(){

}
void Infantry::disenagage(){

}
void Infantry::prepare(){

}
void Infantry::execute(){

}
void Infantry::retreat(){

}
void Infantry::rest(){

}


int Infantry::getHealth(){
    return this->healthPerSoldier;
}

int Infantry::getUnitAmount(){
    return this->amountOfSoldiersPerUnit;
}

int Infantry::getDamage(){
    return this->damagePerSoldier; // need to change to damage per soldier
}

int Infantry::getDefence(){
    return this->defencePerSoldier; // need to chnage to defence per soldier
}

Infantry::~Infantry(){

}
