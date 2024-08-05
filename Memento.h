#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>
using namespace std; 

class Memento
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
    
    public:
        Memento(int health, int damage, int defence, int unitAmount, string unitName); 
        
};

#endif