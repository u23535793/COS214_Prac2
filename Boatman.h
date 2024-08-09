#ifndef BOATMAN_H
#define BOATMAN_H 

#include "Soldiers.h"
#include "Weapon.h"

#include <string>
using namespace std; 

class Boatman : public Soldiers
{
    public: 
        Boatman(int num, string name);
        virtual ~Boatman();
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