#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory
{
    private:
        Soldiers* soldiers;

    protected:
        virtual Soldiers* createUnit() = 0;
        virtual int calculateTotalHealthPerUnit();
        virtual int calculateTotalDamagePerUnit();
        virtual int calculateTotalDefencePerUnit();


};

#endif 

// according to factory method: needs to be ABSTRACT 
// does other methods need to be pure virtual? 