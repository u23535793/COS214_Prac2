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

Infantry::Infantry(int num, string name):Soldiers(healthPerSoldier, damagePerSoldier, defencePerSoldier, num, name){
    healthPerSoldier = 100;
    damagePerSoldier = 0;
    defencePerSoldier = 0;
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

void Infantry::disengage(){
    retreat();
    rest(); 
}

void Infantry::prepare(){
    healthPerSoldier = 100; 
    defencePerSoldier = 60; 
    damagePerSoldier = 0; 
    inCombat = true; 
    cout << "Infantry Unit " << unitName << " is prepared for battle." << endl; 
}

void Infantry::execute(){
    int damage = weapon->useWeapon();
    cout << "Infantry Unit " << unitName << " caused " << damage << " damage." << endl; 

    this->damagePerSoldier = 30; // just an example of damage 
    int dead = (this->damagePerSoldier * amountOfSoldiersPerUnit) / 100; 
    if (amountOfSoldiersPerUnit == 3)
    {
        amountOfSoldiersPerUnit = 0; 
        dead = 3;   
    }
    else amountOfSoldiersPerUnit = amountOfSoldiersPerUnit - dead; 
}

void Infantry::retreat(){
    inCombat = false; 

    if (amountOfSoldiersPerUnit <= 0)
        cout << "Infantry Unit " << unitName << " did not make it back." << endl; 
    else 
    {
        cout << "Infantry Unit " << unitName << " is retreating." << endl; 
    } 
}

void Infantry::rest(){
    if (amountOfSoldiersPerUnit != 0)
    {
        healthPerSoldier = 80;
        damagePerSoldier = 0; 
        defencePerSoldier = 0; 
        cout << "Infantry Unit " << unitName << " is resting. " << endl; 
    } 
    else 
    {
        healthPerSoldier = 0;
        damagePerSoldier = 0; 
        defencePerSoldier = 0;
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
    delete weapon; 
    weapon = nullptr; 
}

Memento*Infantry::militusMemento(){
    Memento* memento = new Memento(healthPerSoldier,damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
    return memento;
}

void Infantry::vivificaMemento(Memento* mem){
    Memento* restore = mem;

    if(restore == nullptr)
    {
        cout<<"The memento does not exists." << endl;
        return;
    }

    this->healthPerSoldier = restore->healthPerSoldier;
    this->damagePerSoldier = restore->damagePerSoldier;
    this->defencePerSoldier = restore->defencePerSoldier;
    this->amountOfSoldiersPerUnit = restore->amountOfSoldiersPerUnit;
    this->unitName = restore->unitName;
}