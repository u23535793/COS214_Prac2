/*soldiers on a warship*/

#include "Boatman.h"
#include "Weapon.h"
#include "Cannon.h"
#include "SoldierFactory.h"
#include "CareTaker.h"

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

Boatman::Boatman(int num, string name): Soldiers(healthPerSoldier, damagePerSoldier, defencePerSoldier, num, name){
    healthPerSoldier = 100;
    damagePerSoldier = 0;
    defencePerSoldier = 0;
    amountOfSoldiersPerUnit = num;
    unitName = name;
    weapon = new Cannon(); 
    inCombat = false; 
}

Soldiers* Boatman::clone(){
    return new Boatman(this->amountOfSoldiersPerUnit, this->unitName);
}

void Boatman::engage(){
    if (amountOfSoldiersPerUnit != 0)
    {
        prepare(); 
        cout << "Boatman Unit " << unitName << " attacks with cannons." << endl; 
        execute(); 
    }
    else 
    {
        cout << "All soldiers in Boatman Unit " << unitName << " have died. " << endl; 
    }
}

void Boatman::disengage(){
    retreat();
    rest(); 
}

void Boatman::prepare(){
    healthPerSoldier = 100; 
    defencePerSoldier = 80; 
    damagePerSoldier = 0; 
    weapon->reload(); 
    inCombat = true; 
    cout << "Boatman Unit " << unitName << " is prepared for battle." << endl; 
}

void Boatman::execute(){
    int damage = 0; 
    while (weapon->getSupply() != 0)
    {
        damage += weapon->useWeapon(); 
    }
    cout << "Boatman Unit " << unitName << " caused " << damage << " damage." << endl;  

    this->damagePerSoldier = 30; // just an example of damage 
    int dead = (this->damagePerSoldier * amountOfSoldiersPerUnit) / 100; 
    if (amountOfSoldiersPerUnit == 3)
    {
        amountOfSoldiersPerUnit = 0; 
        dead = 3;   
    }
    else amountOfSoldiersPerUnit = amountOfSoldiersPerUnit - dead; 
}

void Boatman::retreat(){
    inCombat = false; 

    if (amountOfSoldiersPerUnit <= 0)
        cout << "Boatman Unit " << unitName << " did not make it back." << endl; 
    else 
    {
        cout << "Boatman Unit " << unitName << " is retreating." << endl; 
    }
}

void Boatman::rest(){
    if (amountOfSoldiersPerUnit != 0)
    {
        healthPerSoldier = 100;
        damagePerSoldier = 0; 
        defencePerSoldier = 0; 
        cout << "Boatman Unit " << unitName << " is resting. " << endl; 
    } 
    else 
    {
        healthPerSoldier = 0;
        damagePerSoldier = 0; 
        defencePerSoldier = 0;
    }
}

int Boatman::getHealth(){
    return this->healthPerSoldier;
}

int Boatman::getUnitAmount(){
    return this->amountOfSoldiersPerUnit;
}

int Boatman::getDamage(){
    return this->damagePerSoldier;
}

int Boatman::getDefence(){
    return this->defencePerSoldier;
}

string Boatman::getName(){
    return this->unitName; 
}
Boatman::~Boatman(){
    delete weapon; 
    weapon = nullptr; 
}

Memento*Boatman::militusMemento(){
    Memento* memento = new Memento(healthPerSoldier,damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
    return memento;
}

void Boatman::vivificaMemento(Memento* mem){
    Memento* restore = CareTaker::retrieveMemento(mem);

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