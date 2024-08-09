#include "Memento.h"

#include <iostream>
using namespace std; 

Memento::Memento(int health, int damage, int defence, int unitAmount, string unitName)
{
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->amountOfSoldiersPerUnit = unitAmount;
    this->unitName = unitName;
}
