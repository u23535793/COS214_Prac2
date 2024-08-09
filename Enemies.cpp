#include "Enemies.h"

#include <iostream>
#include <string>
using namespace std; 

Enemies::Enemies(int number, string name){
    this->number = number;
    this->name = name; 
}

int Enemies::getNumber(){
    return number; 
}

void Enemies::takeDamage(){
    int dead = number * 0.3; 
    if (number == 3)
    {
        dead = 3;
        number = 0; 
    }
    else number = number - dead; 
    cout << dead << " enemies have been killed from " << name << endl;
    cout << number << " enemies remaining in " << name << endl; 
}