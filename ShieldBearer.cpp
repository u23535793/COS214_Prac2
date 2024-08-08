#include "ShieldBearer.h"

#include <iostream>
using namespace std; 

ShieldBearer::ShieldBearer(int num, string name){

    healthPerSoldier = 100;
    damagePerSoldier = 0;
    defencePerSoldier = 50;
    amountOfSoldiersPerUnit = num;
    unitName = name;
    
}

Soldiers* ShieldBearer::clone(){
    return new ShieldBearer(this->amountOfSoldiersPerUnit, this->unitName);

}

void ShieldBearer::engage(){

}
void ShieldBearer::disenagage(){
    
}
void ShieldBearer::prepare(){

}
void ShieldBearer::execute(){

}
void ShieldBearer::retreat(){

}
void ShieldBearer::rest(){

} 
