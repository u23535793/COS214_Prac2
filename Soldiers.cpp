#include "Soldiers.h"

#include <iostream>
using namespace std; 

/* Attributes: 
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
        Weapon* weapon               */

Soldiers::~Soldiers(){
    // delete weapon; 
}

void Soldiers::engage(){
    prepare(); 
    execute(); 

} 

void Soldiers::disenagage(){
    retreat();
    rest(); 

}