#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H 

#include "Soldiers.h"
#include <string>
using namespace std; 

class ShieldBearer : public Soldiers
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
        virtual Soldiers* clone();

    //from template method 
    public: 
        ShieldBearer(int num, string name);
        void engage(); //calls prepare and engage 
        void disenagage(); //calls retreat and rest

    private:
        void prepare(); 
        void execute();
        void retreat();
        void rest(); 

}; 

#endif