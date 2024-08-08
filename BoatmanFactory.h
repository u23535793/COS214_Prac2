
#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"

class BoatmanFactory: public SoldierFactory
{
    public: 
        virtual Soldiers* createUnit(int num, string name);
        virtual int calculateTotalHealthPerUnit();
        virtual int calculateTotalDamagePerUnit();
        virtual int calculateTotalDefencePerUnit();
        virtual void printSoldiers();
        virtual ~BoatmanFactory();

};

#endif