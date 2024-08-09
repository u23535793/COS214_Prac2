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
        virtual ~Infantry();

    //from template method 
    public: 
        Infantry(int num, string name);
        void engage(); //calls prepare and engage 
        void disenagage(); //calls retreat and rest
        int getUnitAmount();
        int getHealth();
        int getDamage();
        int getDefence();


    private:
        void prepare(); 
        void execute();
        void retreat();
        void rest(); 

}; 

#endif 