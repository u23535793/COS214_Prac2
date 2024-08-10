#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H 

#include "Soldiers.h"
#include "Weapon.h"

#include <string>
using namespace std; 

class ShieldBearer : public Soldiers
{
    public: 
        //constructor and destructor
        ShieldBearer(int num, string name);
        virtual ~ShieldBearer(); 
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
        //from memento
        virtual Memento* militusMemento(); // creates a memento containing a snapshot of its current state
        virtual void vivificaMemento(Memento* mem); //restores its stae from the memento object

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