#include "Infantry.h"

#include <iostream>
using namespace std; 

Infantry::Infantry(int num, string name){

    healthPerSoldier = 80; //because they walk on foot so much
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
    return this->amountOfSoldiersPerUnit;
}

int Infantry::getDefence(){
    return this->amountOfSoldiersPerUnit;
}

Infantry::~Infantry(){

}