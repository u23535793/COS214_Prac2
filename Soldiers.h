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

    //from prototype
    public: 
        virtual Soldiers* clone(); // pure virutal? 

    //from template method 
    public: 
        virtual void engage(); //calls prepare and engage 
        virtual void disenagage(); //calls retreat and rest

    private:
        virtual void prepare() = 0; //abstract method
        virtual void execute() = 0; //abstract method
        virtual void retreat() = 0; //abstract method
        virtual void rest() = 0; //abstract method 

    //from memento 
    public:
        Memento* militusMemento(); // creates a memento containing a snapshot of its current state
        void vivificaMemento(Memento* mem); //restores its stae from the memento object 

};

#endif 

//according to factory method: this class is ABSTRACT 
// -- need to add a pure virtual function and implement in Infantry, ShieldBearer & Boatman
