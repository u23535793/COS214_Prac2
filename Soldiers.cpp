#include "Soldiers.h"
#include "Memento.h"
#include "CareTaker.h"

#include <iostream>
using namespace std; 
 
Memento*Soldiers::militusMemento(){
    Memento(this->healthPerSoldier,this->damagePerSoldier, this->defencePerSoldier, this->amountOfSoldiersPerUnit, this->unitName);
}
void Soldiers::vivificaMemento(Memento* mem){

    CareTaker careTaker = CareTaker();
    Memento* restore = careTaker.retrieveMemento(mem);
    this->healthPerSoldier = restore->healthPerSoldier;
    this->damagePerSoldier = restore->damagePerSoldier;
    this->defencePerSoldier = restore->defencePerSoldier;
    this->amountOfSoldiersPerUnit = restore->amountOfSoldiersPerUnit;
    this->unitName = restore->unitName;
}

Soldiers::~Soldiers(){

}