#ifndef INFANTRY_H
#define INFANTRY_H 

#include "Soldiers.h"
#include "Weapon.h"

#include <string>
using namespace std; 

class Infantry : public Soldiers
{
    public: 
        //constructor and destructor
        Infantry(int num, string name);
        virtual ~Infantry();
        //getters
        int getUnitAmount();
        int getHealth();
        int getDamage();
        int getDefence();
        string getName();
        //from template method 
        void engage(); //calls prepare and engage 
        void disengage(); //calls retreat and rest
        //from prototype
        virtual Soldiers* clone();

    private:
        //from factory method 
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
        //additional attributes
        Weapon* weapon; 
        bool inCombat;
        //from template method
        void prepare(); 
        void execute();
        void retreat();
        void rest(); 

}; 

#endif 