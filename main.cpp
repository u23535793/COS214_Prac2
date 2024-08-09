#include <iostream>
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "Boatman.h"
#include "BoatmanFactory.h"
#include "Infantry.h"
#include "InfantryFactory.h"
#include "ShieldBearer.h"
#include "ShieldBearerFactory.h"

using namespace std;

int main()
{
    int num = 10;
    // cout << "How many boatmen do you want in this unit?";
    // cin>>num;
    BoatmanFactory* boatmen1 = new BoatmanFactory();
    boatmen1->createUnit(num,"Many Men");
    cout << "The total health of boatmen1 is " << boatmen1->calculateTotalHealthPerUnit() << endl;

    InfantryFactory* footmen = new InfantryFactory();
    footmen->createUnit(num,"Many Men On Foot");
    cout << "The total health of footmen1 is " << footmen->calculateTotalHealthPerUnit() << endl;

    // delete boatmen1;
    
}