#include <InfantryFactory.h>
#include <Infantry.h>

#include <iostream>
using namespace std;


Soldiers* InfantryFactory::createUnit(int num, string name){

    Soldiers* boatmen = new Infantry(num, name);
    cout << "Unit " <<name<< " created successfully!" << endl;
    return boatmen;

}
int InfantryFactory::calculateTotalHealthPerUnit(){
    return 0;

}
int InfantryFactory::calculateTotalDamagePerUnit(){
    return 0;
}
int InfantryFactory::calculateTotalDefencePerUnit(){
    return 0;
}

InfantryFactory::~InfantryFactory(){

}