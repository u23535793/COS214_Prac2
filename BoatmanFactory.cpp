#include "BoatmanFactory.h"
#include "Boatman.h"
#include "Soldiers.h"

#include <iostream>
#include <vector>

using namespace std; 

Soldiers* BoatmanFactory::createUnit(int num, string name){

    Boatman boatman = Boatman(num, name);
    Soldiers* boatmen[num];
    boatman.clone();

    for(int i=0; i<num; i++){
        boatmen[i] = boatman.clone();
    }

    cout << "Unit " <<name<< " created successfully!" << endl;
    SoldierFactory::setSoldiers(*boatmen);

    return *boatmen;
}

int BoatmanFactory::calculateTotalHealthPerUnit(){

    Soldiers* soldiers =  SoldierFactory::getSoldiers();
    int totalH = 0;
    // cout << soldiers->getUnitAmount() << endl;
   
//    for(int i=0; i<soldiers->getUnitAmount(); i++){
//         totalH += soldiers[i].getHealth();
//         cout << soldiers[i].getHealth() << endl;
//    }

   return totalH;

}
int BoatmanFactory::calculateTotalDamagePerUnit(){
    return 0;
}
int BoatmanFactory::calculateTotalDefencePerUnit(){
    return 0;
}

void BoatmanFactory::printSoldiers(){
    // for()
}

BoatmanFactory::~BoatmanFactory(){

}