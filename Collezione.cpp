//
// Created by Niccolò Magnolfi on 02/03/24.
//

#include "Collezione.h"
#include "Collezione_Observer.h"
#include <memory>


Collezione::Collezione(std::string name): name(name){
    observer = std::make_unique<Collezione_Observer>(this);
}

Collezione::~Collezione() {}

const std::string &Collezione::getName() const {
    return name;
}

void Collezione::setName(const std::string &name) {
    Collezione::name = name;
}

void Collezione::AddNota(Nota* nota) {
    if (nota) {
        note.push_back(nota);
        notify();
    } else {
        std::cerr << "[ERRORE]: tentativo di aggiungere una nota non esistente." << std::endl;
    }
}

void Collezione::DeleteNota(Nota* nota) {
    if (!nota) {
        std::cerr << "[ERRORE]: tentativo di eliminare una nota non esistente." << std::endl;
        return;
    }
    for (auto itr = note.begin(); itr != note.end(); itr++) {
        if ((*itr)->getTitle() == nota->getTitle()) {
            note.erase(itr);
            notify();
            break;
        }
    }
}

void Collezione::ReadAll() {
    for (auto i : note) {
        i->read();
    }
}

void Collezione::AddObserver(Observer *o) {
    obs.push_back(o);
}

void Collezione::RemObserver(Observer *o){
    obs.remove(o);
}

void Collezione::notify() {
    for (auto &itr : obs) {
        itr->update();
    }
}

int Collezione::contaNota() {
    int conta = 0;
    for(auto &itr:note){
        conta++;
    }
    return conta;
}

const std::list<Nota *> &Collezione::getNote() const {
    return note;
}