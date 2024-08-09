#ifndef SOLDIERS_H
#define SOLDIERS_H

#include "Memento.h"
#include "Weapon.h"

#include <string>
using namespace std; 

class Soldiers 
{
    public: 
        //destructor
        virtual ~Soldiers();
        //getters
        virtual int getUnitAmount() = 0;
        virtual int getHealth() = 0;
        virtual int getDamage() = 0;
        virtual int getDefence() = 0;
        virtual string getName() = 0; 
        //from prototype
        virtual Soldiers* clone() = 0; // pure virutal? 
        //from template method 
        virtual void engage(); //calls prepare and execute 
        virtual void disenagage(); //calls retreat and rest
        //from memento
        Memento* militusMemento(); // creates a memento containing a snapshot of its current state
        void vivificaMemento(Memento* mem); //restores its stae from the memento object 

    private: 
        //from factory method
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
        //additonal attributes
        Weapon* weapon; 
        //from template method 
        virtual void prepare() = 0; //abstract method
        virtual void execute() = 0; //abstract method
        virtual void retreat() = 0; //abstract method
        virtual void rest() = 0; //abstract method 

};

#endif 
