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
        void disenagage(); //calls retreat and rest
        //from prototype
        virtual Soldiers* clone();
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