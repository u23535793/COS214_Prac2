#include <iostream>
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "Boatman.h"
#include "BoatmanFactory.h"

using namespace std;

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

    if (manyMen != nullptr)
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
    
    delete boatmen1;
    
}