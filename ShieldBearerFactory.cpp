#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"

#include <iostream>
using namespace std; 

Soldiers* ShieldBearerFactory::createUnit(int num, string name){
    Soldiers* boatmen = new ShieldBearer(num, name);
    SoldierFactory::setSoldiers(boatmen);
    return boatmen;
}

int ShieldBearerFactory::calculateTotalHealthPerUnit(){
    Soldiers* soldiers = SoldierFactory::getSoldiers();
    return soldiers->getUnitAmount()*soldiers->getHealth();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit(){
    Soldiers* soldiers = SoldierFactory::getSoldiers();
    return soldiers->getUnitAmount()*soldiers->getDamage();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit(){
    Soldiers* soldiers = SoldierFactory::getSoldiers();
    return soldiers->getUnitAmount()*soldiers->getDefence();
}

ShieldBearerFactory::~ShieldBearerFactory(){
    SoldierFactory::setSoldiers(nullptr);
}