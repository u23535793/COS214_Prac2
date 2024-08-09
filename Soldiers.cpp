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
    
}

void Soldiers::engage(){
    prepare(); 
    execute(); 

} 

void Soldiers::disengage(){
    retreat();
    rest(); 

}

Memento* Soldiers::militusMemento(){

}

void Soldiers::vivificaMemento(Memento* mem){
    
}