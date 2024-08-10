// #include "Boatman.h"
// #include "BoatmanFactory.h"
// #include "Enemies.h"
// #include "Infantry.h"
// #include "InfantryFactory.h"
// #include "ShieldBearer.h"
// #include "ShieldBearerFactory.h"
// #include "Soldiers.h"
// #include "SoldierFactory.h"

// #include <iostream>
// using namespace std;
// using std::cout;
// using std::endl;

// int main()
// {
//     //introduction
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//     cout << "WELCOME TO: THE CALL OF DESTINY" << endl; 
//     cout << "created by Gang of Two (GoT)" << endl; 
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//     cout << "Introduction: " << endl; 
//     cout << "It is the year 100 BC, Rome is a republic on the brink of empire." << endl;
//     cout << "To the north, hostile barbarian tribes threaten the borders." << endl; 
//     cout << "To the east, the vast realms of Parthia eye Rome warily." << endl; 
//     cout <<  "As you, a young Roman legionnaire, Titus Flavius rises through the ranks in a time of war and expansion," << endl; 
//     cout << "you are tasked with strategically building and managing the Roman legions using advanced military systems." << endl; 
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;
    
//     //creating factories
//     cout << "Creating Factories..." << endl; 
//     BoatmanFactory* boatmen1 = new BoatmanFactory();
//     cout << "Boatman Factory boatmen1 created." << endl; 
//     InfantryFactory* infantry1 = new InfantryFactory(); 
//     cout << "Infantry Factory infantry1 created." << endl; 
//     ShieldBearerFactory* shieldBearer1 = new ShieldBearerFactory(); 
//     cout << "ShieldBearer Factory shieldBearer1 created." << endl; 
//     cout << "3 Factories Created" << endl; 
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;
    
//     //creating intital units using factory 
//     cout << "LEVEL 1: Create Units..." << endl << endl; 
//     //create boatmen units
//     char response = 'N'; 
//     cout << "Would you like to create a Boatman Unit? [Y/N]  ";
//     cin >> response; 
//     bool haveBoatmanUnit = false; 
//     Soldiers* manyBoatmen = nullptr; 
//     if (response == 'y' || response == 'Y')
//     {
//         int num = 0;
//         string name = ""; 
//         cout << "What would you like to name this unit?  "; 
//         cin >> name; 
//         cout << "How many soldiers do you want in this unit?  ";
//         cin >> num;
//         //check if num is greater than 0
//         while (num <= 0)
//         {
//             cout << "Invalid input. Please enter a number > 0:  ";
//             cin >> num;
//         }
//         manyBoatmen = boatmen1->createUnit(num,name);
//         cout << "> Created Boatman Unit " << name << " with " << num << " soldiers." << endl; 
//         haveBoatmanUnit = true; 
//     }
//     else 
//     {
//         cout << "You have 0 Boatman Units in your army. " << endl; 
//     }
//     cout << endl; 

//     //create infantry units
//     response = 'N'; 
//     cout << "Would you like to create an Infantry Unit? [Y/N]  ";
//     cin >> response; 
//     bool haveInfantryUnit = false; 
//     Soldiers* manyInfantryMen = nullptr; 
//     if (response == 'y' || response == 'Y')
//     {
//         int num = 0;
//         string name = ""; 
//         cout << "What would you like to name this unit?  "; 
//         cin >> name; 
//         cout << "How many soldiers do you want in this unit?  ";
//         cin >> num;
//         //check if num is greater than 0
//         while (num <= 0)
//         {
//             cout << "Invalid input. Please enter a number > 0:  ";
//             cin >> num;
//         }
//         manyInfantryMen = infantry1->createUnit(num,name);
//         cout << "> Created Infantry Unit " << name << " with " << num << " soldiers." << endl; 
//         haveInfantryUnit = true; 
//     }
//     else 
//     {
//         cout << "You have 0 Infantry Units in your army. " << endl; 
//     }
//     cout << endl; 

//     //create shieldbearer units
//     response = 'N'; 
//     cout << "Would you like to create a ShieldBearer Unit? [Y/N]  ";
//     cin >> response; 
//     bool haveShieldbearerUnit = false; 
//     Soldiers* manyShieldbearers = nullptr; 
//     if (response == 'y' || response == 'Y')
//     {
//         int num = 0;
//         string name = ""; 
//         cout << "What would you like to name this unit?  "; 
//         cin >> name; 
//         cout << "How many soldiers do you want in this unit?  ";
//         cin >> num;
//         //check if num is greater than 0
//         while (num <= 0)
//         {
//             cout << "Invalid input. Please enter a number > 0:  ";
//             cin >> num;
//         }
//         manyShieldbearers = shieldBearer1->createUnit(num,name);
//         cout << "> Created ShieldBearer Unit " << name << " with " << num << " soldiers." << endl; 
//         haveShieldbearerUnit = true; 
//     }
//     else 
//     {
//         cout << "You have 0 ShieldBearer Units in your army. " << endl; 
//     }
//     cout << endl; 

//     int count = 0; 
//     if (haveBoatmanUnit) count++; 
//     if (haveInfantryUnit) count++; 
//     if (haveShieldbearerUnit) count++; 
//     cout << "You have " << count << " units in your army." << endl; 
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;

//     //create damage to enemy land using template method 
//     cout << "LEVEL 2: Damage Enemy Land..." << endl << endl; 
//     cout << "Your army has reached Enemy Land" << endl << endl; 
//     if (haveBoatmanUnit)
//     {
//         manyBoatmen->engage();
//         manyBoatmen->disengage(); 
//         cout << endl; 
//     }
//     if (haveInfantryUnit)
//     {
//         manyInfantryMen->engage(); 
//         manyInfantryMen->disengage(); 
//         cout << endl; 
//     }
//     if (haveShieldbearerUnit)
//     {
//         manyShieldbearers->engage(); 
//         manyShieldbearers->disengage(); 
//         cout << endl; 
//     }
    
//     if (!haveBoatmanUnit && !haveInfantryUnit && !haveShieldbearerUnit)
//     {
//         cout << "You have no units available in your army." << endl; 
//         cout << "Army caused 0 damage. " << endl; 
//     }
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;

//     //save progress using memento
//     bool progressSaved = false; 
//     Memento* boatmanProgess = nullptr;
//     Memento *infantryProgress = nullptr;
//     Memento *shieldProgress = nullptr;
//     cout << "Would you like to save your current progress? [Y/N] ";
//     cin >> response;
//     if (response == 'y' || response == 'Y') 
//     {
//         progressSaved = true; 

//         if(haveBoatmanUnit){
//             boatmanProgess = manyBoatmen->militusMemento();
//             cout<<"Boatman Unit " << manyBoatmen->getName() << "'s progress has been saved!" << endl;
//         }
//         if(haveInfantryUnit){
//             infantryProgress = manyInfantryMen->militusMemento();
//             cout<<"Infantry Unit " << manyInfantryMen->getName() << "'s progress has been saved!" << endl;
//         }
//         if(haveShieldbearerUnit){
//             shieldProgress = manyShieldbearers->militusMemento();
//             cout<<"ShieldBearer Unit " << manyShieldbearers->getName() << "'s progress has been saved!" << endl;
//         }
//     }
//     else 
//     {
//         cout << "Progress has not been saved." << endl << "You will not be able to revert back to previous state." << endl; 
//     }
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;

//     //fight enemies using template method
//     cout << "LEVEL 3: Fighting Enemy Soldiers..." << endl << endl; 

//     if (haveBoatmanUnit)
//     {
//         Enemies* enemyBoatmen = new Enemies(300, "enemyBoatmen");
//         cout << "Enemy Boatman have arrived." << endl; 
//         cout << "Would you like to fight or surrender? [F/S] "; 
//         cin >> response;
//         cout << endl; 
//         if (response == 'f' || response == 'F')
//         {
//             cout << "Fighting Enemy Boatman" << endl; 
//             while (manyBoatmen->getUnitAmount() != 0 && enemyBoatmen->getNumber() != 0)
//             {
//                 manyBoatmen->engage();
//                 enemyBoatmen->takeDamage(); 
//             }
//             cout << endl; 
//             if (enemyBoatmen->getNumber() <= 0)
//             {
//                 cout << "Enemy Boatman have been defeated!" << endl; 
//                 manyBoatmen->disengage(); 

//             }
//             else 
//             {
//                 manyBoatmen->disengage(); 
//                 cout << "Enemy Boatmen have defeated Boatman Unit "<< manyBoatmen->getName()  << "." << endl; 
//                 if (!progressSaved)
//                     haveBoatmanUnit = false; 
//             }

//         }
//         else if (response == 's' || response == 'S')
//         {
//             cout << "Boatman Unit " << manyBoatmen->getName() << " have surrended." << endl; 
//             cout << "Boatman Unit " << manyBoatmen->getName() << " has been removed from your army." << endl; 
//             if (!progressSaved)
//                 haveBoatmanUnit = false; 
//         }
//         delete enemyBoatmen; 
//         enemyBoatmen = nullptr; 
//         cout << endl; 
//     }
//     if (haveInfantryUnit)
//     {
//         Enemies* enemyInfantry = new Enemies(300, "enemyInfantry");
//         cout << "Enemy Infantry have arrived." << endl; 
//         cout << "Would you like to fight or surrender? [F/S] "; 
//         cin >> response;
//         cout << endl; 
//         if (response == 'f' || response == 'F')
//         {
//             cout << "Fighting Enemy Infantry" << endl; 
//             while (manyInfantryMen->getUnitAmount() != 0 && enemyInfantry->getNumber() != 0)
//             {
//                 manyInfantryMen->engage();
//                 enemyInfantry->takeDamage(); 
//             }
//             cout << endl; 
//             if (enemyInfantry->getNumber() <= 0)
//             {
//                 cout << "Enemy Infantry have been defeated!" << endl; 
//                 manyInfantryMen->disengage(); 
//             }
//             else 
//             {
//                 manyInfantryMen->disengage(); 
//                 cout << "Enemy Infantry have defeated Infantry Unit "<< manyInfantryMen->getName()  << "." << endl;
//                 if (!progressSaved)
//                     haveInfantryUnit = false; 
//             }

//         }
//         else if (response == 's' || response == 'S')
//         {
//             cout << "Infantry Unit " << manyInfantryMen->getName() << " have surrended." << endl; 
//             cout << "Infantry Unit " << manyInfantryMen->getName() << " has been removed from your army." << endl; 
//             if (!progressSaved)
//                 haveInfantryUnit = false; 
//         }
//         delete enemyInfantry; 
//         enemyInfantry = nullptr; 
//         cout << endl; 
//     }
//     if (haveShieldbearerUnit)
//     {
//         Enemies* enemyShielders = new Enemies(300, "enemyShieldBearers");
//         cout << "Enemy ShieldBearers have arrived." << endl; 
//         cout << "Would you like to fight or surrender? [F/S] "; 
//         cin >> response;
//         cout << endl; 
//         if (response == 'f' || response == 'F')
//         {
//             cout << "Fighting Enemy ShieldBearers" << endl; 
//             while (manyShieldbearers->getUnitAmount() != 0 && enemyShielders->getNumber() != 0)
//             {
//                 manyShieldbearers->engage();
//                 enemyShielders->takeDamage(); 
//             }
//             cout << endl; 
//             if (enemyShielders->getNumber() <= 0)
//             {
//                 cout << "Enemy ShieldBearers have been defeated!" << endl; 
//                 manyShieldbearers->disengage(); 

//             }
//             else 
//             {
//                 manyShieldbearers->disengage(); 
//                 cout << "Enemy ShieldBearers have defeated ShieldBearer Unit "<< manyShieldbearers->getName()  << "." << endl; 
//                 if (!progressSaved)
//                     haveShieldbearerUnit = false; 
//             }

//         }
//         else if (response == 's' || response == 'S')
//         {
//             cout << "ShieldBearer Unit " << manyShieldbearers->getName() << " have surrended." << endl; 
//             cout << "ShieldBearer Unit " << manyShieldbearers->getName() << " has been removed from your army." << endl; 
//             if (!progressSaved)
//                 haveShieldbearerUnit = false; 
//         }
//         delete enemyShielders; 
//         enemyShielders = nullptr; 
//         cout << endl; 
//     }

//     if (!haveBoatmanUnit && !haveInfantryUnit && !haveShieldbearerUnit)
//     {
//         cout << "You have no units available in your army to fight enemies." << endl; 
//     }

//     //revert back using memento
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//     if (progressSaved)
//     {
//         cout << "Would you like to revert back to previously saved state? [Y/N] ";
//         cin >> response;
//         if (response == 'y' || response == 'Y') 
//         {
//             if(haveBoatmanUnit){
//             manyBoatmen->vivificaMemento(boatmanProgess);
//             cout<<"Boatman Unit " << manyBoatmen->getName() << " has been restored to previous state and now has " << manyBoatmen->getUnitAmount() << " soldiers." << endl;
//             }
//             if(haveInfantryUnit){
//                 manyInfantryMen->vivificaMemento(infantryProgress);
//                 cout<<"Infantry Unit " << manyInfantryMen->getName() << " has been restored to previous state and now has " << manyInfantryMen->getUnitAmount() << " soldiers." << endl;
//             }
//             if(haveShieldbearerUnit){
//             manyShieldbearers->vivificaMemento(shieldProgress);
//             cout<<"ShieldBearer Unit " << manyShieldbearers->getName() << " has been restored to previous state and now has " << manyShieldbearers->getUnitAmount() << " soldiers." << endl;
//             }
//         }
//         else
//         {
//             cout << "Army has not been reverted back to previous saved state." << endl; 
//             if (haveBoatmanUnit && manyBoatmen->getUnitAmount() == 0)
//                 haveBoatmanUnit = false;
//             if (haveInfantryUnit && manyInfantryMen->getUnitAmount() == 0)
//                 haveInfantryUnit = false;
//             if (haveShieldbearerUnit && manyShieldbearers->getUnitAmount() == 0)
//                 haveShieldbearerUnit = false;
//         }
//         cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//     }
    
//     //increase army using prototype
//     cout << "LEVEL 4: Increase your army..." << endl << endl; 
//     cout << "You now have the ability to clone one of your units." << endl; 
//     cout << "1. Boatman Unit" << endl; 
//     cout << "2. Infantry Unit" << endl;
//     cout << "3. ShieldBearer Unit" << endl;
//     cout << "4. Don't Clone" << endl;
//     cout << "Choose a unit to clone [Enter 1, 2, 3 or 4]: "; 
//     int choice = 0; 
//     cin >> choice; 
//     Soldiers *clone = nullptr; 
//     switch (choice) 
//     {
//         case 1:
//             if (haveBoatmanUnit)
//             {
//                 clone = manyBoatmen->clone(); 
//                 cout << "Cloned Boatman Unit " << clone->getName() << endl; 
//             }
//             else 
//             {
//                 cout << "You don't have a Boatman Unit to clone." << endl; 
//             }
//             break;
//         case 2:
//             if (haveInfantryUnit)
//             {
//                 clone = manyInfantryMen->clone(); 
//                 cout << "Cloned Infantry Unit " << clone->getName() << endl; 
//             }
//             else 
//             {
//                 cout << "You don't have an Infantry Unit to clone." << endl; 
//             }
//             break;
//         case 3:
//             if (haveShieldbearerUnit)
//             {
//                 clone = manyShieldbearers->clone(); 
//                 cout << "Cloned ShieldBearer Unit " << clone->getName() << endl; 
//             }
//             else 
//             {
//                 cout << "You don't have a ShieldBearer Unit to clone." << endl; 
//             }
//             break;
//         case 4:
//             cout << "No units have been cloned." << endl; 
//             break;
//         default:
//             cout << "Invalid number entered. No units have been cloned." << endl; 
//             break;
//     }

//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//     cout << endl; 
//     cout << "You have reached the end of the demo for The Call Of Destiny." << endl; 
//     cout << "Please purchase the game to continue playing :)" << endl; 
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;

// //OBJECT DIAGRAM CREATED AT THIS POINT 

//     //deletes
//     delete clone; 
//     clone = nullptr; 

//     delete boatmanProgess; 
//     boatmanProgess = nullptr; 
//     delete infantryProgress; 
//     infantryProgress = nullptr; 
//     delete shieldProgress; 
//     shieldProgress = nullptr; 

//     delete manyBoatmen; 
//     manyBoatmen = nullptr; 
//     delete manyInfantryMen; 
//     manyInfantryMen = nullptr; 
//     delete manyShieldbearers; 
//     manyShieldbearers = nullptr; 

//     delete boatmen1;
//     boatmen1 = nullptr;
//     delete infantry1; 
//     infantry1 = nullptr; 
//     delete shieldBearer1;
//     shieldBearer1 = nullptr; 
    
// }