#include "BoatmanFactory.h"
#include "Boatman.h"
#include "Soldiers.h"

#include <iostream>
#include <vector>
using namespace std; 

Soldiers* BoatmanFactory::createUnit(int num, string name){
    Soldiers* boatmen = new Boatman(num, name);
    soldiers = boatmen;
    return boatmen;
}

int BoatmanFactory::calculateTotalHealthPerUnit(){
    return soldiers->getUnitAmount()*soldiers->getHealth();
}

int BoatmanFactory::calculateTotalDamagePerUnit(){
    return soldiers->getUnitAmount()*soldiers->getDamage();
}

int BoatmanFactory::calculateTotalDefencePerUnit(){
    return soldiers->getUnitAmount()*soldiers->getDefence();
}

BoatmanFactory::~BoatmanFactory(){
    soldiers = nullptr; 
}