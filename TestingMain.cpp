#include <iostream>
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "Boatman.h"
#include "BoatmanFactory.h"

//     int num = 10;
//     // cout << "How many boatmen do you want in this unit?";
//     // cin>>num;
//     BoatmanFactory* boatmen1 = new BoatmanFactory();
//     Soldiers* ManyMen = boatmen1->createUnit(num,"Many Men");
//     cout << "The total health of boatmen1 is " << boatmen1->calculateTotalHealthPerUnit() << endl;

//     InfantryFactory* footmen = new InfantryFactory();
//     Soldiers* FootMen = footmen->createUnit(num,"Many Men On Foot");
//     cout << "The total health of footmen1 is " << footmen->calculateTotalHealthPerUnit() << endl;

// using namespace std;

int main()
{
    //creating boatmen 
    BoatmanFactory* boatmen1 = new BoatmanFactory();
    cout << "BoatmanFactory boatmen1 created" << endl; 

    char response = 'N'; 
    cout << "Would you like to create a Boatman unit? [Y/N]  ";
    cin >> response; 

    Soldiers* manyMen = nullptr; 
    if (response == 'y' || response == 'Y')
    {
        int num = 0;
        string name = ""; 
        cout << "What would you like to name this unit?  "; 
        cin >> name; 
        cout << "How many boatmen do you want in this unit?  ";
        cin >> num;
        //check if num is greater than 0
        while (num <= 0)
        {
            cout << "Invalid input. Please enter a number > 0:  ";
            cin >> num;
        }
        manyMen = boatmen1->createUnit(num,"Many Men");
    }
    else 
    {
        cout << "You have 0 Boatman units in your army. " << endl; 
    }

    Memento* manyMenState = manyMen->militusMemento();

    if(manyMen != nullptr)
    {
        char response = 'N'; 
        cout << "Would you like to send " << manyMen->getName() << " to war? [Y/N]  ";
        cin >> response; 

        if (response == 'y' || response == 'Y')
        {
            manyMen->engage(); 
        }

        cout << "Would you like to send " << manyMen->getName() << " to war? [Y/N]  ";
        cin >> response; 

        if (response == 'y' || response == 'Y')
        {
            manyMen->engage(); 
        }        
    }

    cout<<"The damage of many men before restoration is:" << manyMen->getDamage() <<endl;
    manyMen->vivificaMemento(manyMenState);
    cout<<"The damage of many men after restoration is:" << manyMen->getDamage() <<endl;
    
    delete boatmen1;
    
}