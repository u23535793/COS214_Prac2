#include "CareTaker.h"

vector<Memento*> CareTaker::mementos;

Memento* CareTaker::retrieveMemento(Memento* stateToRetrieve){

    for (int i = 0; i < mementos.size(); ++i) {
        if (mementos[i] == stateToRetrieve) {
            return mementos[i];
        }
    }
}

void CareTaker::storeMemento(Memento* memento){
    mementos.push_back(memento);  
}

CareTaker::~CareTaker(){
   for (int i = 0; i < mementos.size(); ++i) {
        if (mementos[i] != nullptr) {
            delete mementos[i];
            mementos[i] = nullptr;
        }
    }
    mementos.clear();
}