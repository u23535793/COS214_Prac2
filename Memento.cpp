#include "Memento.h"
#include "CareTaker.h"

#include <iostream>
using namespace std;

Memento::Memento(int health, int damage, int defence, int unitAmount, string unitName)
{
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->amountOfSoldiersPerUnit = unitAmount;
    this->unitName = unitName;
    CareTaker::storeMemento(this);
}

int Memento::getHealth()
{
    return this->healthPerSoldier;
}
