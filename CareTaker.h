/* Responsibility: Manages saving and restoring of Memento objects. 
   This class can hold a stack, list, or another collection of mementos 
   allowing the game to revert to any previous state or trace back 
   multiple steps 
   
   CareTaker Class: Manage a collection of Memento objects. 
   Implement methods to add new mementos to the collection and retrieve 
   them based on the game’s need (like undo functionality) */

#include <iostream>
#include <vector>
#include "Memento.h"
#include "Soldiers.h"

using namespace std;

class CareTaker{

   private:
      static vector<Memento*> mementos;

   public:
      static Memento* retrieveMemento(Memento*);
      static void storeMemento(Memento*);
      ~CareTaker();

};