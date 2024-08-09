#include "CareTaker.h"

Memento* CareTaker::retrieveMemento(Memento* stateToRetrieve){
    if(mementos!=nullptr){
        int i = 0;
        while(mementos[i]!=nullptr && mementos[i]==stateToRetrieve){
            return mementos[i];
        }
    }
    else
        return nullptr;
}

CareTaker::~CareTaker(){
    if(mementos!=nullptr){
        int i=0;

        while(mementos[i]!=nullptr){
            delete mementos[i];
            mementos[i] = nullptr;
            i++;
        }
    }
    
    mementos = nullptr;
}