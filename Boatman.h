#ifndef BOATMAN_H
#define BOATMAN_H 

#include "Soldiers.h"
#include "Weapon.h"

#include <string>
using namespace std; 

class Boatman : public Soldiers
{
    public:
        //constructor and destructor
        Boatman(int num, string name);
        virtual ~Boatman();
        //getters 
        int getUnitAmount();
        int getHealth();
        int getDamage();
        int getDefence();
        string getName(); 
        //from template method 
        void engage(); //calls prepare and execute 
        void disengage(); //calls retreat and rest
        //from prototype
        virtual Soldiers* clone();
 
    private:
        //from factory method
        int healthPerSoldier = 100;
        int damagePerSoldier = 0;
        int defencePerSoldier = 50;
        int amountOfSoldiersPerUnit = 30;
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