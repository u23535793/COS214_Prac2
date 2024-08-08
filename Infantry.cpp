#include <Infantry.h>

#include <iostream>
using namespace std; 

Infantry::Infantry(int num, string name){

    healthPerSoldier = 100;
    damagePerSoldier = 0;
    defencePerSoldier = 50;
    amountOfSoldiersPerUnit = num;
    unitName = name;
    
}

Soldiers* Infantry::clone(){
    return new Infantry(this->amountOfSoldiersPerUnit, this->unitName);

}

void Infantry::engage(){

}
void Infantry::disenagage(){
    
}
void Infantry::prepare(){

}
void Infantry::execute(){

}
void Infantry::retreat(){

}
void Infantry::rest(){

} 