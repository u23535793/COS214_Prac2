#include "SoldierFactory.h"
#include "Soldiers.h"

#include <iostream>
using namespace std; 

void SoldierFactory::setSoldiers(Soldiers* soldiers){
    this->soldiers = soldiers;
}

Soldiers* SoldierFactory::getSoldiers(){
    return soldiers;
}
