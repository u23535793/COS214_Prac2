#ifndef BOATMAN_H
#define BOATMAN_H 

#include "Soldiers.h"
#include <string>
using namespace std; 

class Boatman : public Soldiers
{
    //from factory method 
    private:
        int healthPerSoldier = 100;
        int damagePerSoldier = 0;
        int defencePerSoldier = 50;
        int amountOfSoldiersPerUnit = 30;
        string unitName;

    //from prototype
    public: 
        virtual Soldiers* clone();
        virtual ~Boatman();

    //from template method 
    public: 
        Boatman(int num, string name);
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