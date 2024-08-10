/*A person who carries a shield, especially a lower ranking person who 
carries it for a higher ranking person. */

#include "ShieldBearer.h"
#include "Weapon.h"
#include "Spear.h"

#include <iostream>
using namespace std; 

ShieldBearer::ShieldBearer(int num, string name):Soldiers(healthPerSoldier, damagePerSoldier, defencePerSoldier, num, name){
    healthPerSoldier = 100;
    damagePerSoldier = 0;
    defencePerSoldier = 0;
    amountOfSoldiersPerUnit = num;
    unitName = name;
    weapon = new Spear(); 
    inCombat = false;
}

Soldiers* ShieldBearer::clone(){
    return new ShieldBearer(this->amountOfSoldiersPerUnit, this->unitName);

}

void ShieldBearer::engage(){
    if (amountOfSoldiersPerUnit != 0)
    {
        prepare(); 
        cout << "ShieldBearer Unit " << unitName << " attacks with spears." << endl; 
        execute(); 
    }
    else 
    {
        cout << "All soldiers in ShieldBearer Uunit " << unitName << " have died. " << endl; 
    }

}

void ShieldBearer::disengage(){
    retreat();
    rest(); 

}

void ShieldBearer::prepare(){
    healthPerSoldier = 100; 
    defencePerSoldier = 90; 
    damagePerSoldier = 0; 
    inCombat = true; 
    cout << "ShieldBearer Unit " << unitName << " is prepared for battle." << endl;

}

void ShieldBearer::execute(){
    int damage = weapon->useWeapon() * 10;
    cout << "ShieldBearer Unit " << unitName << " caused " << damage << " damage. " << endl; 
    
    this->damagePerSoldier = 30; // just an example of damage 
    int dead = (this->damagePerSoldier * amountOfSoldiersPerUnit) / 100; 
    if (amountOfSoldiersPerUnit == 3)
    {
        amountOfSoldiersPerUnit = 0; 
        dead = 3;   
    }
    else amountOfSoldiersPerUnit = amountOfSoldiersPerUnit - dead; 
}

void ShieldBearer::retreat(){
    inCombat = false; 

    if (amountOfSoldiersPerUnit <= 0)
        cout << "ShieldBearer Unit " << unitName << " did not make it back." << endl; 
    else 
    {
        cout << "ShieldBearer Unit " << unitName << " is retreating." << endl; 
    }

}

void ShieldBearer::rest(){
    if (amountOfSoldiersPerUnit != 0)
    {
        healthPerSoldier = 80;
        damagePerSoldier = 0; 
        defencePerSoldier = 0; 
        cout << "ShieldBearer Unit " << unitName << " is resting. " << endl; 
    } 
    else 
    {
        healthPerSoldier = 0;
        damagePerSoldier = 0; 
        defencePerSoldier = 0;
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
    delete weapon; 
    weapon = nullptr; 
} 