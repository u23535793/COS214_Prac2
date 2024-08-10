#include "InfantryFactory.h"
#include "Infantry.h"

#include <iostream>
using namespace std;

Soldiers* InfantryFactory::createUnit(int num, string name){
    Soldiers* boatmen = new Infantry(num, name);
    soldiers = boatmen;
    return boatmen;
}

int InfantryFactory::calculateTotalHealthPerUnit(){
    return soldiers->getUnitAmount()*soldiers->getHealth();
}

int InfantryFactory::calculateTotalDamagePerUnit(){
    return soldiers->getUnitAmount()*soldiers->getDamage();
}

int InfantryFactory::calculateTotalDefencePerUnit(){
    return soldiers->getUnitAmount()*soldiers->getDefence();
}

InfantryFactory::~InfantryFactory(){
    soldiers = nullptr; 
}