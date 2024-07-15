//
// Created by Niccolò Magnolfi on 04/03/24.
//
#ifndef PROGETTO_COLLEZIONE_OBSERVER_H
#define PROGETTO_COLLEZIONE_OBSERVER_H

#include "Observer.h"
#include "Collezione.h"

class Collezione_Observer :public Observer{
public:
    Collezione_Observer(Collezione* coll):coll(coll){
        attach();
    }

    ~Collezione_Observer(){
        detach();
        std::cout<<"[RIMOZIONE] Rimozione dell'observer \n\n"<<std::endl;
    };

    void attach() override{
        coll->AddObserver(this);
    }

    void detach() override{
        coll->RemObserver(this);
    }

    void update() override{
        std::cout<<"[AGGIORNAMENTO] il numero di note è: "<<coll->contaNota()<<"\n"<<std::endl;
    }

private:
    Collezione* coll;
};

#endif //PROGETTO_COLLEZIONE_OBSERVER_H