#ifndef INFANTRY_H
#define INFANTRY_H 

#include "Soldiers.h"
#include <string>
using namespace std; 

class Infantry : public Soldiers
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
        void engage(); //calls prepare and engage 
        void disenagage(); //calls retreat and rest

    private:
        void prepare(); 
        void execute();
        void retreat();
        void rest(); 

}; 

#endif 