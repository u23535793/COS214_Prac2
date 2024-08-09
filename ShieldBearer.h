#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H 

#include "Soldiers.h"
#include "Weapon.h"

#include <string>
using namespace std; 

class ShieldBearer : public Soldiers
{
    public: 
        ShieldBearer(int num, string name);
        virtual ~ShieldBearer();
        int getUnitAmount();
        int getHealth();
        int getDamage();
        int getDefence();
        string getName();
        void engage(); //calls prepare and engage 
        void disenagage(); //calls retreat and rest
        virtual Soldiers* clone();

    //from factory method 
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
        Weapon* weapon; 
        bool inCombat;
        void prepare(); 
        void execute();
        void retreat();
        void rest();

}; 

#endif