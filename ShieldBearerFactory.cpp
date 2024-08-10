#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"

#include <iostream>
using namespace std; 

Soldiers* ShieldBearerFactory::createUnit(int num, string name){
    Soldiers* boatmen = new ShieldBearer(num, name);
    soldiers = boatmen; 
    return boatmen;
}

int ShieldBearerFactory::calculateTotalHealthPerUnit(){
    return soldiers->getUnitAmount()*soldiers->getHealth();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit(){
    return soldiers->getUnitAmount()*soldiers->getDamage();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit(){
    return soldiers->getUnitAmount()*soldiers->getDefence();
}

ShieldBearerFactory::~ShieldBearerFactory(){
    soldiers = nullptr; 
}