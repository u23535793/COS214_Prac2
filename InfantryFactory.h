#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"

class InfantryFactory : public SoldierFactory
{
    public:
        virtual Soldiers* createUnit(int num, string name);
        virtual int calculateTotalHealthPerUnit();
        virtual int calculateTotalDamagePerUnit();
        virtual int calculateTotalDefencePerUnit();

};

#endif 