#include "Soldiers.h"
#include "Memento.h"
#include "CareTaker.h"

#include <iostream>
using namespace std; 

/* Attributes: 
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
        Weapon* weapon               */

Soldiers::Soldiers(int health, int damage, int defence, int unitNum, string name)
{
    this->healthPerSoldier = health;
    damagePerSoldier = damage;
    defencePerSoldier = defence;
    amountOfSoldiersPerUnit = unitNum;
    unitName = name;
}

Soldiers::~Soldiers(){
    
}

void Soldiers::engage(){
    prepare(); 
    execute(); 

} 

void Soldiers::disengage(){
    retreat();
    rest(); 

}