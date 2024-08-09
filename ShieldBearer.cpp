/*A person who carries a shield, especially a lower ranking person who 
carries it for a higher ranking person. */

#include "ShieldBearer.h"
#include "Weapon.h"
#include "Spear.h"

#include <iostream>
using namespace std; 

ShieldBearer::ShieldBearer(int num, string name){
    healthPerSoldier = 100;
    damagePerSoldier = 0;
    defencePerSoldier = 50;
    amountOfSoldiersPerUnit = num;
    unitName = name;
    weapon = new Spear(); 
    inCombat = false;

}

Soldiers* ShieldBearer::clone(){
    return new ShieldBearer(this->amountOfSoldiersPerUnit, this->unitName);

}

void ShieldBearer::engage(){
    prepare(); 
    execute(); 

}

void ShieldBearer::disenagage(){
    retreat();
    rest(); 

}

void ShieldBearer::prepare(){
    healthPerSoldier = 100; 
    defencePerSoldier = 80; 
    damagePerSoldier = 0; 
    inCombat = true; 
    cout << unitName << " is prepared for battle." << endl;

}

void ShieldBearer::execute(){
    int damage = weapon->useWeapon();
    cout << unitName << " caused " << damage << " damage." << endl; 

}

void ShieldBearer::retreat(){
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

void ShieldBearer::rest(){
    if (amountOfSoldiersPerUnit != 0)
    {
        healthPerSoldier = 80;
        damagePerSoldier = 0; 
        defencePerSoldier = 0; 
        cout << unitName << " is resting. " << endl; 
    } 
    
} 

int ShieldBearer::getHealth(){
    return this->healthPerSoldier;
}

int ShieldBearer::getUnitAmount(){
    return this->amountOfSoldiersPerUnit;
}

int ShieldBearer::getDamage(){
    return this->damagePerSoldier;
}

int ShieldBearer::getDefence(){
    return this->defencePerSoldier;
}

string ShieldBearer::getName(){
    return this->unitName; 
}

ShieldBearer::~ShieldBearer(){

} 