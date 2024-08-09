#ifndef ENEMIES_H
#define ENEMIES_H

#include <string>
using namespace std; 

class Enemies 
{
    private: 
        string name; 
        int number; 

    public: 
        Enemies(int number, string name); 
        int getNumber(); 
        void takeDamage(); 

}; 

#endif