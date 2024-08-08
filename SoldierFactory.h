#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory
{
    private:
        Soldiers* soldiers;

    protected:
        virtual Soldiers* createUnit(int num, string name) = 0;
        virtual int calculateTotalHealthPerUnit() = 0;
        virtual int calculateTotalDamagePerUnit() = 0;
        virtual int calculateTotalDefencePerUnit() = 0;
        virtual ~SoldierFactory() = 0;
        virtual void setSoldiers(Soldiers* soldiers);
        virtual Soldiers* getSoldiers();
};

#endif 

// according to factory method: needs to be ABSTRACT 
// does other methods need to be pure virtual? 

