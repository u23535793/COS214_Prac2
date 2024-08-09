#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"

class ShieldBearerFactory : public SoldierFactory
{
    public:
        virtual Soldiers* createUnit(int num, string name);
        virtual int calculateTotalHealthPerUnit();
        virtual int calculateTotalDamagePerUnit();
        virtual int calculateTotalDefencePerUnit();
        virtual ~ShieldBearerFactory();
        
};

#endif