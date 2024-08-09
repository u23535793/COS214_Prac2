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

    //from factory method 
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
        Weapon* weapon; 
        bool inCombat;

    //from prototype
    public: 
        virtual Soldiers* clone();

    //from template method 
    public: 
        void engage(); //calls prepare and engage 
        void disenagage(); //calls retreat and rest

    private:
        void prepare(); 
        void execute();
        void retreat();
        void rest(); 

}; 

#endif