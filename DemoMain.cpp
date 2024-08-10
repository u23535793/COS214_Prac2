// #include <iostream>

// #include "Boatman.h"
// #include "BoatmanFactory.h"
// #include "Enemies.h"
// #include "Infantry.h"
// #include "InfantryFactory.h"
// #include "ShieldBearer.h"
// #include "ShieldBearerFactory.h"
// #include "Soldiers.h"
// #include "SoldierFactory.h"

// using namespace std;
// // using std::cout;
// // using std::endl;

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
    
//     //creating intital units
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

//     //create damage to enemy land
//     cout << "LEVEL 2: Damage Enemy Land..." << endl << endl; 
//     cout << "Your army has reached Enemy Land" << endl << endl; 
//     if (haveBoatmanUnit)
//     {
//         manyBoatmen->engage();
//         manyBoatmen->disenagage(); 
//         cout << endl; 
//     }
//     if (haveInfantryUnit)
//     {
//         manyInfantryMen->engage(); 
//         manyInfantryMen->disenagage(); 
//         cout << endl; 
//     }
//     if (haveShieldbearerUnit)
//     {
//         manyShieldbearers->engage(); 
//         manyShieldbearers->disenagage(); 
//         cout << endl; 
//     }
    
//     if (!haveBoatmanUnit && !haveInfantryUnit && !haveShieldbearerUnit)
//     {
//         cout << "You have no units available in your army." << endl; 
//         cout << "Army caused 0 damage. " << endl; 
//     }
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;

//     //save progress
//     cout << "Would you like to save your current progress? [Y/N] ";
//     cin >> response;
//     if (response == 'y' || response == 'Y') 
//     {

//     }
//     cout << "------------------------------------------------------------------------------------------------------------------" << endl;

//     //create fight enemies
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
//                 manyBoatmen->disenagage(); 

//             }
//             else 
//             {
//                 manyBoatmen->disenagage(); 
//                 cout << "Enemy Boatmen have defeated Boatman Unit "<< manyBoatmen->getName()  << "." << endl; 
//                 haveBoatmanUnit = false; 
//             }

//         }
//         else if (response == 's' || response == 'S')
//         {
//             cout << "Boatman Unit " << manyBoatmen->getName() << " have surrended." << endl; 
//             cout << "Boatman Unit " << manyBoatmen->getName() << " has been removed from your army." << endl; 
//             haveBoatmanUnit = false; 
//         }
//         delete enemyBoatmen; 
//         enemyBoatmen = nullptr; 
//         cout << endl; 
//     }
//     if (haveInfantryUnit)
//     {
//         Enemies* enemyInfantry = new Enemies(400, "enemyInfantry");
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
//                 manyInfantryMen->disenagage(); 
//             }
//             else 
//             {
//                 manyInfantryMen->disenagage(); 
//                 cout << "Enemy Infantry have defeated Infantry Unit "<< manyInfantryMen->getName()  << "." << endl; 
//                 haveInfantryUnit = false; 
//             }

//         }
//         else if (response == 's' || response == 'S')
//         {
//             cout << "Infantry Unit " << manyInfantryMen->getName() << " have surrended." << endl; 
//             cout << "Infantry Unit " << manyInfantryMen->getName() << " has been removed from your army." << endl; 
//             haveInfantryUnit = false; 
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
//                 manyShieldbearers->disenagage(); 

//             }
//             else 
//             {
//                 manyShieldbearers->disenagage(); 
//                 cout << "Enemy ShieldBearers have defeated ShieldBearer Unit "<< manyShieldbearers->getName()  << "." << endl; 
//                 haveShieldbearerUnit = false; 
//             }

//         }
//         else if (response == 's' || response == 'S')
//         {
//             cout << "ShieldBearer Unit " << manyShieldbearers->getName() << " have surrended." << endl; 
//             cout << "ShieldBearer Unit " << manyShieldbearers->getName() << " has been removed from your army." << endl; 
//             haveShieldbearerUnit = false; 
//         }
//         delete enemyShielders; 
//         enemyShielders = nullptr; 
//         cout << endl; 
//     }

//     if (!haveBoatmanUnit && !haveInfantryUnit && !haveShieldbearerUnit)
//     {
//         cout << "You have no units available in your army to fight enemies." << endl; 
//     }
    
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