/*soldiers on a warship*/

#include "Boatman.h"
#include "Weapon.h"
#include "Cannon.h"

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

Boatman::Boatman(int num, string name){

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
    prepare(); 
    execute(); 

}

void Boatman::disenagage(){
    retreat();
    rest(); 
}

void Boatman::prepare(){
    healthPerSoldier = 100; 
    defencePerSoldier = 70; 
    damagePerSoldier = 0; 
    weapon->reload(); 
    inCombat = true; 
    cout << unitName << " is prepared for battle." << endl; 
}

void Boatman::execute(){
    int damage = 0; 
    while (weapon->getSupply() != 0)
    {
        damage += weapon->useWeapon(); 
    }
    cout << unitName << " caused " << damage << " damage." << endl;   
    this->healthPerSoldier-=30;
}

void Boatman::retreat(){
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

void Boatman::rest(){
    if (amountOfSoldiersPerUnit != 0)
    {
        healthPerSoldier = 100;
        damagePerSoldier = 0; 
        defencePerSoldier = 0; 
        cout << unitName << " is resting. " << endl; 
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

}
