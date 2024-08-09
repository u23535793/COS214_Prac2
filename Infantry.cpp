/*Members of the infantry are ground troops that engage with the enemy 
in close-range combat. They operate weapons and equipment to engage and 
destroy enemy ground forces. This job is typically considered to be the 
job in the Military that is more physically demanding and psychologically
stressful than any other job.*/

#include "Infantry.h"
#include "Weapon.h"
#include "Sword.h"

#include <iostream>
using namespace std; 

/* Attributes: 
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;    
        Weapon* weapon; 
        bool inCombat;           */

Infantry::Infantry(int num, string name){
    healthPerSoldier = 100;
    damagePerSoldier = 0;
    defencePerSoldier = 50;
    amountOfSoldiersPerUnit = num;
    unitName = name;
    weapon = new Sword(); 
    inCombat = false; 
}

Soldiers* Infantry::clone(){
    return new Infantry(this->amountOfSoldiersPerUnit, this->unitName);
    
}

void Infantry::engage(){
    prepare(); 
    execute(); 

}

void Infantry::disenagage(){
    retreat();
    rest(); 

}

void Infantry::prepare(){
    healthPerSoldier = 100; 
    defencePerSoldier = 60; 
    damagePerSoldier = 0; 
    inCombat = true; 
    cout << unitName << " is prepared for battle." << endl; 

}

void Infantry::execute(){
    int damage = weapon->useWeapon();
    cout << unitName << " caused " << damage << " damage." << endl; 

}

void Infantry::retreat(){
    inCombat = false; 

    damagePerSoldier = 50; // just an example of damage 
    int dead = damagePerSoldier/100 * amountOfSoldiersPerUnit; 
    amountOfSoldiersPerUnit -= dead; 

    if (amountOfSoldiersPerUnit < 0)
        cout << "Unit " << unitName << "did not make it back." << endl; 
    else 
    {
        cout << unitName << " is retreating." << endl; 
        cout << dead << " soldiers from unit " << unitName << " have died." << endl; 
    }
    
}

void Infantry::rest(){
    if (amountOfSoldiersPerUnit != 0)
    {
        healthPerSoldier = 80;
        damagePerSoldier = 0; 
        defencePerSoldier = 0; 
        cout << unitName << " is resting. " << endl; 
    } 
} 

int Infantry::getHealth(){
    return this->healthPerSoldier;
}

int Infantry::getUnitAmount(){
    return this->amountOfSoldiersPerUnit;
}

int Infantry::getDamage(){
    return this->damagePerSoldier;
}

int Infantry::getDefence(){
    return this->defencePerSoldier;
}

string Infantry::getName(){
    return this->unitName; 
}

Infantry::~Infantry(){
    
}