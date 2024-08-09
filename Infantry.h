#ifndef INFANTRY_H
#define INFANTRY_H 

#include "Soldiers.h"
#include "Weapon.h"

#include <string>
using namespace std; 

class Infantry : public Soldiers
{
    public: 
        Infantry(int num, string name);
        virtual ~Infantry();
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