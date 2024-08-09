#ifndef SOLDIERS_H
#define SOLDIERS_H

#include "Memento.h"
#include <string>
using namespace std; 

class Soldiers 
{
    //from factory method
    private: 
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
        friend class Memento;

    //from prototype
    public: 
        virtual Soldiers* clone() = 0; // pure virutal? 
        virtual ~Soldiers();

    //from template method 
    public: 
        virtual void engage() =0; //calls prepare and engage 
        virtual void disenagage() =0; //calls retreat and rest

    private:
        virtual void prepare() = 0; //abstract method
        virtual void execute() = 0; //abstract method
        virtual void retreat() = 0; //abstract method
        virtual void rest() = 0; //abstract method 

    //from memento 
    public:
        Memento* militusMemento(); // creates a memento containing a snapshot of its current state
        void vivificaMemento(Memento* mem); //restores its stae from the memento object 

    //own
    public: 
        virtual int getUnitAmount() = 0;
        virtual int getHealth() = 0;
        virtual int getDamage() = 0;
        virtual int getDefence() = 0;


};

#endif 

//according to factory method: this class is ABSTRACT 
// -- need to add a pure virtual function and implement in Infantry, ShieldBearer & Boatman
