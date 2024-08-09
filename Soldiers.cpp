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
        Weapon* weapon               
*/

void Soldiers::engage(){
    prepare(); 
    execute(); 

} 

void Soldiers::disenagage(){
    retreat();
    rest(); 

}
 
Memento*Soldiers::militusMemento(){
    Memento* memento = new Memento(this->healthPerSoldier,this->damagePerSoldier, this->defencePerSoldier, this->amountOfSoldiersPerUnit, this->unitName);
    return memento;
}
void Soldiers::vivificaMemento(Memento* mem){

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

Soldiers::~Soldiers(){
    // delete weapon; 
}