#include "InfantryFactory.h"
#include "Infantry.h"

#include <iostream>
using namespace std;

Soldiers* InfantryFactory::createUnit(int num, string name){

    Soldiers* boatmen = new Infantry(num, name);
    SoldierFactory::setSoldiers(boatmen);
    return boatmen;
}

int InfantryFactory::calculateTotalHealthPerUnit(){

    Soldiers* soldiers = SoldierFactory::getSoldiers();
    return soldiers->getUnitAmount()*soldiers->getHealth();
}
int InfantryFactory::calculateTotalDamagePerUnit(){

    Soldiers* soldiers = SoldierFactory::getSoldiers();
    return soldiers->getUnitAmount()*soldiers->getDamage();
}
int InfantryFactory::calculateTotalDefencePerUnit(){
    Soldiers* soldiers = SoldierFactory::getSoldiers();
    return soldiers->getUnitAmount()*soldiers->getDefence();
}
InfantryFactory::~InfantryFactory(){

}