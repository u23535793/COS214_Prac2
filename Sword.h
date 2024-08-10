#ifndef SWORD_H
#define SWORD_H 

#include "Weapon.h"

using namespace std;

class Sword : public Weapon 
{
    public:
        Sword();  
        virtual int useWeapon();
        virtual void reload(); 
        virtual int getSupply();
        
};

#endif