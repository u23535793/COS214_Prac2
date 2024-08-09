#ifndef BOATMAN_H
#define BOATMAN_H 

#include "Soldiers.h"
#include "Weapon.h"

#include <string>
using namespace std; 

class Boatman : public Soldiers
{
    public:
        Boatman(int num, string name);
        virtual ~Boatman();
        int getUnitAmount();
        int getHealth();
        int getDamage();
        int getDefence();
        string getName(); 

    //from factory method 
    private:
        int healthPerSoldier = 100;
        int damagePerSoldier = 0;
        int defencePerSoldier = 50;
        int amountOfSoldiersPerUnit = 30;
        string unitName;
        Weapon* weapon; 
        bool inCombat; 

    //from prototype
    public: 
        virtual Soldiers* clone();

    //from template method 
    public: 
        void engage(); //calls prepare and execute 
        void disenagage(); //calls retreat and rest

    private:
        void prepare(); 
        void execute();
        void retreat();
        void rest(); 

}; 

#endif