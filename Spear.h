#ifndef SPEAR_H
#define SPEAR_H 

#include "Weapon.h"

using namespace std;

class Spear : public Weapon 
{
    public:
        Spear();  
        virtual int useWeapon();
        virtual void reload(); 
        virtual int getSupply();
};

#endif