#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory
{
    protected:
        Soldiers* soldiers;
        virtual Soldiers* createUnit(int num, string name) = 0;
        virtual int calculateTotalHealthPerUnit() = 0;
        virtual int calculateTotalDamagePerUnit() = 0;
        virtual int calculateTotalDefencePerUnit() = 0;

    public:
        virtual ~SoldierFactory(); 
        
};

#endif 

