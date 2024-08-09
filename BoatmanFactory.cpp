#include "BoatmanFactory.h"
#include "Boatman.h"
#include "Soldiers.h"

#include <iostream>
#include <vector>

using namespace std; 

Soldiers* BoatmanFactory::createUnit(int num, string name){

    Soldiers* boatmen = new Boatman(num, name);
    SoldierFactory::setSoldiers(boatmen);
    return boatmen;
}

int BoatmanFactory::calculateTotalHealthPerUnit(){

    Soldiers* soldiers = SoldierFactory::getSoldiers();
    return soldiers->getUnitAmount()*soldiers->getHealth();
}
int BoatmanFactory::calculateTotalDamagePerUnit(){

    Soldiers* soldiers = SoldierFactory::getSoldiers();
    return soldiers->getUnitAmount()*soldiers->getDamage();
}
int BoatmanFactory::calculateTotalDefencePerUnit(){
    Soldiers* soldiers = SoldierFactory::getSoldiers();
    return soldiers->getUnitAmount()*soldiers->getDefence();
}
BoatmanFactory::~BoatmanFactory(){

}