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

void Soldiers::disenagage(){
    retreat();
    rest(); 

}
 
Memento*Soldiers::militusMemento(){
    Memento* memento = new Memento(healthPerSoldier,damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
    cout<<"Health per soldier in militus is:" << healthPerSoldier;
    cout<<"Health in militus is:" <<memento->getHealth();
    return memento;
}
void Soldiers::vivificaMemento(Memento* mem){

    Memento* restore = CareTaker::retrieveMemento(mem);

    if(restore == nullptr)
    {
        cout<<"The memento does not exists." << endl;
        return;
    }
    
    cout<<"Health per soldier is " << restore->healthPerSoldier << endl;
    cout<<"Damage per soldier is " << restore->damagePerSoldier << endl;

    this->healthPerSoldier = restore->getHealth();
    this->damagePerSoldier = restore->damagePerSoldier;
    this->defencePerSoldier = restore->defencePerSoldier;
    this->amountOfSoldiersPerUnit = restore->amountOfSoldiersPerUnit;
    this->unitName = restore->unitName;
}