#ifndef WEAPON_H
#define WEAPON_H 

using namespace std;

class Weapon
{
    protected:         
        int attack; //attack power
        int capacity; //how much ammunition the weapon can hold
        int supply; //how much ammunition is left in the weapon

    public: 
        virtual int useWeapon() = 0; //returns damage done
        virtual void reload() = 0; //reloads the weapon, assumes infinite supply of ammunition
        virtual int getSupply() = 0; // returns ammunition supply

};

#endif