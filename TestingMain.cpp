#include "Boatman.h"
#include "BoatmanFactory.h"
#include "Cannon.h"
#include "CareTaker.h"
#include "Enemies.h"
#include "Infantry.h"
#include "InfantryFactory.h"
#include "Memento.h"
#include "ShieldBearer.h"
#include "ShieldBearerFactory.h"
#include "SoldierFactory.h"
#include "Soldiers.h"
#include "Spear.h"
#include "Sword.h"

#include <iostream>
using namespace std;

int main()
{
    //testing boatman 
        cout << "testing boatman only" << endl; 
        //constructor
        cout << endl; 
        Boatman* boat1 = new Boatman(100, "boat1"); 
        //getters
        cout << "name: " << boat1->getName() << endl; 
        cout << "number of soldiers: " << boat1->getUnitAmount() << endl; 
        cout << "health: " << boat1->getHealth() << endl; 
        cout << "defence: " << boat1->getDefence() << endl; 
        cout << "damage: " << boat1->getDamage() << endl; 
        //template methods
        cout << endl; 
        boat1->engage(); 
        boat1->disengage();
        //prototype clone
        cout << endl; 
        Soldiers* boat1Clone = boat1->clone(); 
        cout << "boat1 has been cloned." << endl; 
        cout << "name: " << boat1Clone->getName() << endl; 
        cout << "number of soldiers: " << boat1Clone->getUnitAmount() << endl; 
        cout << "health: " << boat1Clone->getHealth() << endl; 
        cout << "defence: " << boat1Clone->getDefence() << endl; 
        cout << "damage: " << boat1Clone->getDamage() << endl; 
        //deletes 
        delete boat1; 
        boat1 = nullptr; 
        delete boat1Clone; 
        boat1Clone = nullptr; 

    //testing boatman factory
        cout << endl; 
        cout << "testing boatman factory" << endl; 
        //default constructor 
        cout << endl; 
        BoatmanFactory* boatman = new BoatmanFactory(); 
        //create unit 
        Soldiers* boatUnit1 = boatman->createUnit(100, "boatUnit1");
        //getters
        cout << "name: " << boatUnit1->getName() << endl; 
        cout << "number of soldiers: " << boatUnit1->getUnitAmount() << endl; 
        cout << "health: " << boatUnit1->getHealth() << endl; 
        cout << "defence: " << boatUnit1->getDefence() << endl; 
        cout << "damage: " << boatUnit1->getDamage() << endl;  
        //calculations before engage 
        cout << endl;   
        cout << "calculations before engage " << endl; 
        cout << "total health per unit: " << boatman->calculateTotalHealthPerUnit() << endl; 
        cout << "total defense per unit: " << boatman->calculateTotalDefencePerUnit() << endl; 
        cout << "total damage per unit: " << boatman->calculateTotalDamagePerUnit() << endl; 
        //engage
        cout << endl;
        boatUnit1->engage();  
        //calculations after engage 
        cout << endl;     
        cout << "calculations after engage" << endl; 
        cout << "total health per unit: " << boatman->calculateTotalHealthPerUnit() << endl; 
        cout << "total defense per unit: " << boatman->calculateTotalDefencePerUnit() << endl; 
        cout << "total damage per unit: " << boatman->calculateTotalDamagePerUnit() << endl; 
        //disengage
        cout << endl;
        boatUnit1->disengage();  
        //calculations after engage 
        cout << endl;     
        cout << "calculations after disengage" << endl; 
        cout << "total health per unit: " << boatman->calculateTotalHealthPerUnit() << endl; 
        cout << "total defense per unit: " << boatman->calculateTotalDefencePerUnit() << endl; 
        cout << "total damage per unit: " << boatman->calculateTotalDamagePerUnit() << endl;
        //prototype clone 
        cout << endl; 
        Soldiers* boatUnit1Clone = boatUnit1->clone(); 
        cout << "name: " << boatUnit1Clone->getName() << endl; 
        cout << "number of soldiers: " << boatUnit1Clone->getUnitAmount() << endl; 
        cout << "health: " << boatUnit1Clone->getHealth() << endl; 
        cout << "defence: " << boatUnit1Clone->getDefence() << endl; 
        cout << "damage: " << boatUnit1Clone->getDamage() << endl;  
        cout << endl; 
        boatUnit1Clone->engage(); 
        boatUnit1Clone->disengage(); 
        cout << endl; 
        cout << "name: " << boatUnit1->getName() << endl; 
        cout << "number of soldiers: " << boatUnit1->getUnitAmount() << endl; 
        cout << "health: " << boatUnit1->getHealth() << endl; 
        cout << "defence: " << boatUnit1->getDefence() << endl; 
        cout << "damage: " << boatUnit1->getDamage() << endl; 
        cout << endl; 
        cout << "clone: " << endl; 
        cout << "name: " << boatUnit1Clone->getName() << endl; 
        cout << "number of soldiers: " << boatUnit1Clone->getUnitAmount() << endl; 
        cout << "health: " << boatUnit1Clone->getHealth() << endl; 
        cout << "defence: " << boatUnit1Clone->getDefence() << endl; 
        cout << "damage: " << boatUnit1Clone->getDamage() << endl;  
        
        delete boatUnit1Clone; 
        boatUnit1Clone = nullptr; 
        delete boatUnit1;
        boatUnit1 = nullptr; 
        delete boatman;   
        boatman = nullptr; 

    //testing cannon
        cout << endl; 
        //constructor
        Weapon* cannon = new Cannon(); 
        cout << "created cannon" << endl; 
        //get supply
        cout << "cannon supply: " << cannon->getSupply() << endl; 
        //use weapon
        cout << "cannon created " << cannon->useWeapon() << " damage" << endl; 
        cout << "cannon supply before reload: " << cannon->getSupply() << endl; 
        //reload
        cannon->reload();
        cout << "cannon supply after reload: " << cannon->getSupply() << endl; 
        delete cannon; 
        cannon = nullptr; 

    //testing enemies 
        cout << endl; 
        //constructor
        Enemies* enemyBoatmen = new Enemies(63, "enemyBoatmen");
        //take damage 
        while (enemyBoatmen->getNumber() > 0)
        {
            enemyBoatmen->takeDamage(); 
        }
        delete enemyBoatmen; 
        enemyBoatmen = nullptr; 

    //testing infantry
        cout << endl; 
        cout << "testing infantry only" << endl; 
        //constructor
        cout << endl; 
        Infantry* infant1 = new Infantry(100, "infant1"); 
        //getters
        cout << "name: " << infant1->getName() << endl; 
        cout << "number of soldiers: " << infant1->getUnitAmount() << endl; 
        cout << "health: " << infant1->getHealth() << endl; 
        cout << "defence: " << infant1->getDefence() << endl; 
        cout << "damage: " << infant1->getDamage() << endl; 
        //template methods
        cout << endl; 
        infant1->engage(); 
        infant1->disengage();
        //prototype clone
        cout << endl; 
        Soldiers* infant1Clone = infant1->clone(); 
        cout << "infant1 has been cloned." << endl; 
        cout << "name: " << infant1Clone->getName() << endl; 
        cout << "number of soldiers: " << infant1Clone->getUnitAmount() << endl; 
        cout << "health: " << infant1Clone->getHealth() << endl; 
        cout << "defence: " << infant1Clone->getDefence() << endl; 
        cout << "damage: " << infant1Clone->getDamage() << endl; 
        //deletes 
        delete infant1; 
        infant1 = nullptr; 
        delete infant1Clone; 
        infant1Clone = nullptr;

    //testing infantry factory
        cout << endl; 
        cout << "testing infantry factory" << endl; 
        //default constructor
        cout << endl; 
        InfantryFactory* infantry = new InfantryFactory(); 
        //create unit 
        Soldiers* infantUnit1 = infantry->createUnit(123, "infantUnit1"); 
        //getters
        cout << "name: " << infantUnit1->getName() << endl; 
        cout << "number of soldiers: " << infantUnit1->getUnitAmount() << endl; 
        cout << "health: " << infantUnit1->getHealth() << endl; 
        cout << "defence: " << infantUnit1->getDefence() << endl; 
        cout << "damage: " << infantUnit1->getDamage() << endl; 
        //calculations before engage 
        cout << endl;   
        cout << "calculations before engage " << endl; 
        cout << "total health per unit: " << infantry->calculateTotalHealthPerUnit() << endl; 
        cout << "total defense per unit: " << infantry->calculateTotalDefencePerUnit() << endl; 
        cout << "total damage per unit: " << infantry->calculateTotalDamagePerUnit() << endl;
        //engage
        cout << endl;
        infantUnit1->engage();  
        //calculations after engage 
        cout << endl;     
        cout << "calculations after engage " << endl; 
        cout << "total health per unit: " << infantry->calculateTotalHealthPerUnit() << endl; 
        cout << "total defense per unit: " << infantry->calculateTotalDefencePerUnit() << endl; 
        cout << "total damage per unit: " << infantry->calculateTotalDamagePerUnit() << endl;        //disengage
        //disengage
        cout << endl;
        infantUnit1->disengage();  
        //calculations after disngage 
        cout << endl;     
        cout << "calculations after disengage" << endl; 
        cout << "total health per unit: " << infantry->calculateTotalHealthPerUnit() << endl; 
        cout << "total defense per unit: " << infantry->calculateTotalDefencePerUnit() << endl; 
        cout << "total damage per unit: " << infantry->calculateTotalDamagePerUnit() << endl;
        //prototype clone
        cout << endl; 
        Soldiers* infantUnit1Clone = infantUnit1->clone(); 
        cout << "cloned infantUnit1" << endl; 
        cout << "name: " << infantUnit1Clone->getName() << endl; 
        cout << "number of soldiers: " << infantUnit1Clone->getUnitAmount() << endl; 
        cout << "health: " << infantUnit1Clone->getHealth() << endl; 
        cout << "defence: " << infantUnit1Clone->getDefence() << endl; 
        cout << "damage: " << infantUnit1Clone->getDamage() << endl; 
        cout << endl; 
        infantUnit1Clone->engage();
        infantUnit1Clone->disengage(); 
        cout << endl; 
        cout << "name: " << infantUnit1->getName() << endl; 
        cout << "number of soldiers: " << infantUnit1->getUnitAmount() << endl; 
        cout << "health: " << infantUnit1->getHealth() << endl; 
        cout << "defence: " << infantUnit1->getDefence() << endl; 
        cout << "damage: " << infantUnit1->getDamage() << endl; 
        cout << endl << "clone: " << endl; 
        cout << "name: " << infantUnit1Clone->getName() << endl; 
        cout << "number of soldiers: " << infantUnit1Clone->getUnitAmount() << endl; 
        cout << "health: " << infantUnit1Clone->getHealth() << endl; 
        cout << "defence: " << infantUnit1Clone->getDefence() << endl; 
        cout << "damage: " << infantUnit1Clone->getDamage() << endl; 
        cout << endl; 
        while (infantUnit1Clone->getUnitAmount() > 0)
        {
            infantUnit1Clone->engage(); 
        }
        infantUnit1Clone->disengage();
        cout << endl; 
        cout << "name: " << infantUnit1Clone->getName() << endl; 
        cout << "number of soldiers: " << infantUnit1Clone->getUnitAmount() << endl; 
        cout << "health: " << infantUnit1Clone->getHealth() << endl; 
        cout << "defence: " << infantUnit1Clone->getDefence() << endl; 
        cout << "damage: " << infantUnit1Clone->getDamage() << endl;  
        //deletes
        delete infantUnit1Clone; 
        infantUnit1Clone = nullptr; 
        delete infantUnit1; 
        infantUnit1 = nullptr; 
        delete infantry; 
        infantry = nullptr; 

    //testing shieldbearer only 
        cout << endl; 
        cout << "testing shieldbearer only" << endl; 
        //constructor
        cout << endl; 
        ShieldBearer* shielder1 = new ShieldBearer(175, "shielder1"); 
        //getters
        cout << "name: " << shielder1->getName() << endl; 
        cout << "number of soldiers: " << shielder1->getUnitAmount() << endl; 
        cout << "health: " << shielder1->getHealth() << endl; 
        cout << "defence: " << shielder1->getDefence() << endl; 
        cout << "damage: " << shielder1->getDamage() << endl; 
        //template methods
        cout << endl; 
        shielder1->engage(); 
        shielder1->disengage();
        //prototype clone
        cout << endl; 
        Soldiers* shielder1Clone = shielder1->clone(); 
        cout << "shielder1 has been cloned." << endl; 
        cout << "name: " << shielder1Clone->getName() << endl; 
        cout << "number of soldiers: " << shielder1Clone->getUnitAmount() << endl; 
        cout << "health: " << shielder1Clone->getHealth() << endl; 
        cout << "defence: " << shielder1Clone->getDefence() << endl; 
        cout << "damage: " << shielder1Clone->getDamage() << endl; 
        //deletes 
        delete shielder1; 
        shielder1 = nullptr; 
        delete shielder1Clone; 
        shielder1Clone = nullptr;

    //testing shieldbearer factory
        cout << endl; 
        cout << "testing shieldbearer factory" << endl; 
        //default constructor
        cout << endl; 
        ShieldBearerFactory* shieldbearer = new ShieldBearerFactory(); 
        //create unit 
        Soldiers* shieldUnit1 = shieldbearer->createUnit(145, "shieldUnit1"); 
        //getters
        cout << "name: " << shieldUnit1->getName() << endl; 
        cout << "number of soldiers: " << shieldUnit1->getUnitAmount() << endl; 
        cout << "health: " << shieldUnit1->getHealth() << endl; 
        cout << "defence: " << shieldUnit1->getDefence() << endl; 
        cout << "damage: " << shieldUnit1->getDamage() << endl; 
        //calculations before engage 
        cout << endl;   
        cout << "calculations before engage " << endl; 
        cout << "total health per unit: " << shieldbearer->calculateTotalHealthPerUnit() << endl; 
        cout << "total defense per unit: " << shieldbearer->calculateTotalDefencePerUnit() << endl; 
        cout << "total damage per unit: " << shieldbearer->calculateTotalDamagePerUnit() << endl;
        //engage
        cout << endl;
        shieldUnit1->engage();  
        //calculations after engage 
        cout << endl;     
        cout << "calculations after engage " << endl; 
        cout << "total health per unit: " << shieldbearer->calculateTotalHealthPerUnit() << endl; 
        cout << "total defense per unit: " << shieldbearer->calculateTotalDefencePerUnit() << endl; 
        cout << "total damage per unit: " << shieldbearer->calculateTotalDamagePerUnit() << endl;        //disengage
        //disengage
        cout << endl;
        shieldUnit1->disengage();  
        //calculations after disngage 
        cout << endl;     
        cout << "calculations after disengage" << endl; 
        cout << "total health per unit: " << shieldbearer->calculateTotalHealthPerUnit() << endl; 
        cout << "total defense per unit: " << shieldbearer->calculateTotalDefencePerUnit() << endl; 
        cout << "total damage per unit: " << shieldbearer->calculateTotalDamagePerUnit() << endl;
        //prototype clone
        cout << endl; 
        Soldiers* shieldUnit1Clone = shieldUnit1->clone(); 
        cout << "cloned shieldUnit1" << endl; 
        cout << "name: " << shieldUnit1Clone->getName() << endl; 
        cout << "number of soldiers: " << shieldUnit1Clone->getUnitAmount() << endl; 
        cout << "health: " << shieldUnit1Clone->getHealth() << endl; 
        cout << "defence: " << shieldUnit1Clone->getDefence() << endl; 
        cout << "damage: " << shieldUnit1Clone->getDamage() << endl; 
        cout << endl; 
        shieldUnit1Clone->engage();
        shieldUnit1Clone->disengage(); 
        cout << endl; 
        cout << "name: " << shieldUnit1->getName() << endl; 
        cout << "number of soldiers: " << shieldUnit1->getUnitAmount() << endl; 
        cout << "health: " << shieldUnit1->getHealth() << endl; 
        cout << "defence: " << shieldUnit1->getDefence() << endl; 
        cout << "damage: " << shieldUnit1->getDamage() << endl; 
        cout << endl << "clone: " << endl; 
        cout << "name: " << shieldUnit1Clone->getName() << endl; 
        cout << "number of soldiers: " << shieldUnit1Clone->getUnitAmount() << endl; 
        cout << "health: " << shieldUnit1Clone->getHealth() << endl; 
        cout << "defence: " << shieldUnit1Clone->getDefence() << endl; 
        cout << "damage: " << shieldUnit1Clone->getDamage() << endl; 
        cout << endl; 
        while (shieldUnit1Clone->getUnitAmount() > 0)
        {
            shieldUnit1Clone->engage(); 
        }
        shieldUnit1Clone->disengage();
        cout << endl; 
        cout << "name: " << shieldUnit1Clone->getName() << endl; 
        cout << "number of soldiers: " << shieldUnit1Clone->getUnitAmount() << endl; 
        cout << "health: " << shieldUnit1Clone->getHealth() << endl; 
        cout << "defence: " << shieldUnit1Clone->getDefence() << endl; 
        cout << "damage: " << shieldUnit1Clone->getDamage() << endl; 
        //deletes
        delete shieldUnit1Clone; 
        shieldUnit1Clone = nullptr; 
        delete shieldUnit1; 
        shieldUnit1 = nullptr; 
        delete shieldbearer; 
        shieldbearer = nullptr;

    //testing spear
        cout << endl; 
        //constructor
        Weapon* spear = new Spear(); 
        cout << "created spear" << endl; 
        //get supply
        cout << "spear supply: " << spear->getSupply() << endl; 
        //use weapon
        cout << "spear created " << spear->useWeapon() << " damage" << endl; 
        cout << "spear supply before reload: " << spear->getSupply() << endl; 
        //reload
        spear->reload();
        cout << "spear supply after attempted reload: " << spear->getSupply() << endl; 
        delete spear; 
        spear = nullptr; 

    //testing sword
        cout << endl; 
        //constructor
        Weapon* sword = new Sword(); 
        cout << "created sword" << endl; 
        //get supply
        cout << "sword supply: " << sword->getSupply() << endl; 
        //use weapon
        cout << "sword created " << sword->useWeapon() << " damage" << endl; 
        cout << "sword supply before reload: " << sword->getSupply() << endl; 
        //reload
        sword->reload();
        cout << "sword supply after attempted reload: " << sword->getSupply() << endl; 
        delete sword; 
        sword = nullptr; 
    
    //testing memento and caretaker
    cout << endl; 
    Memento *boatmanProgess, *infantryProgress, *shieldProgress;
    cout << "testing memento for boatman"<< endl; 
    BoatmanFactory *b = new BoatmanFactory(); 
    Soldiers *manyBoatman = b->createUnit(100, "ManyBoatmen"); 
    cout << manyBoatman->getName() << " created with " << manyBoatman->getUnitAmount() << " soldiers" << endl; 
    boatmanProgess = manyBoatman->militusMemento();
    cout<<"Boatman Unit " << manyBoatman->getName() << "'s progress has been saved!" << endl;
    manyBoatman->engage(); 
    manyBoatman->disengage(); 
    cout << manyBoatman->getName() << " have returned from war with " << manyBoatman->getUnitAmount() << " soldiers" << endl; 
    manyBoatman->vivificaMemento(boatmanProgess);
    cout<<"Boatman Unit " << manyBoatman->getName() << " has been restored to previous state and now has " << manyBoatman->getUnitAmount() << " soldiers." << endl;
    delete manyBoatman; 
    manyBoatman = nullptr; 
    delete b; 
    b = nullptr; 
    delete boatmanProgess;
    boatmanProgess = nullptr; 
    cout << endl; 
    cout << "testing memento for infantry"<< endl; 
    InfantryFactory *i = new InfantryFactory(); 
    Soldiers *manyInfantry = i->createUnit(100, "ManyInfantry"); 
    cout << manyInfantry->getName() << " created with " << manyInfantry->getUnitAmount() << " soldiers" << endl; 
    infantryProgress = manyInfantry->militusMemento();
    cout<<"Infantry Unit " << manyInfantry->getName() << "'s progress has been saved!" << endl;
    manyInfantry->engage(); 
    manyInfantry->disengage(); 
    cout << manyInfantry->getName() << " have returned from war with " << manyInfantry->getUnitAmount() << " soldiers" << endl; 
    manyInfantry->vivificaMemento(infantryProgress);
    cout<<"Infantry Unit " << manyInfantry->getName() << " has been restored to previous state and now has " << manyInfantry->getUnitAmount() << " soldiers." << endl;
    delete manyInfantry; 
    manyInfantry = nullptr; 
    delete i; 
    i = nullptr; 
    delete infantryProgress;
    infantryProgress = nullptr;
    cout << endl; 
    cout << "testing memento for shieldbearer"<< endl; 
    ShieldBearerFactory *s = new ShieldBearerFactory(); 
    Soldiers *manyShields = s->createUnit(100, "ManyShields"); 
    cout << manyShields->getName() << " created with " << manyShields->getUnitAmount() << " soldiers" << endl; 
    manyShields->engage(); 
    manyShields->disengage(); 
    cout << manyShields->getName() << " have returned from war with " << manyShields->getUnitAmount() << " soldiers" << endl; 
    shieldProgress = manyShields->militusMemento();
    cout<<"ShieldBearer Unit " << manyShields->getName() << "'s progress has been saved!" << endl;
    manyShields->engage(); 
    manyShields->disengage(); 
    cout << manyShields->getName() << " have returned from war with " << manyShields->getUnitAmount() << " soldiers" << endl; 
    manyShields->vivificaMemento(shieldProgress);
    cout<<"ShieldBearer Unit " << manyShields->getName() << " has been restored to previous state and now has " << manyShields->getUnitAmount() << " soldiers." << endl;
    delete manyShields; 
    manyShields = nullptr; 
    delete s; 
    s = nullptr; 
    delete shieldProgress;
    shieldProgress = nullptr;

}