#ifndef CANNON_H
#define CANNON_H 

#include "Weapon.h"

using namespace std;

class Cannon : public Weapon 
{
    public:
        Cannon();  
        virtual int useWeapon();
        virtual void reload(); 
        virtual int getSupply(); 

};

#endif