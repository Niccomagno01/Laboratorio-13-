//
// Created by Niccolò Magnolfi on 02/03/24.
//

#include "Collezione.h"
#include <memory>
#include <stdexcept>


Collezione::Collezione(const std::string &name, bool isImportant) : name(name), isImportant(isImportant) {}

Collezione::~Collezione() {}

const std::string &Collezione::getName() const {
    return name;
}

void Collezione::setName(const std::string &name) {
    Collezione::name = name;
}


void Collezione::AddNota(std::shared_ptr<Nota> nota) {
    try {
        if (!nota) {
            throw std::invalid_argument("Tentativo di aggiungere una nota nulla");
        }

        note.push_back(nota);
        notify();
    }
    catch (const std::invalid_argument &e) {
        std::cerr << "Errore nell'aggiunta della nota: " << e.what() << std::endl;
        throw;
    }
    catch (const NotaException &e) {
        std::cerr << "Errore nell'aggiunta della nota: " << e.what() << std::endl;
        throw;
    }
}

void Collezione::DeleteNota(const std::string &name) {
    try {
        for (auto itr = note.begin(); itr != note.end(); itr++) {
            if ((*itr)->getTitle() == name) {

                if ((*itr)->isLock()) {
                    throw NotaBloccataException("Nota bloccata, impossibile cancellare");
                } else {
                    note.erase(itr);
                    notify();
                    return;
                }
            }
        }
        throw NotaNonTrovataException("Nota non trovata");
    }
    catch (const NotaException &e) {
        std::cerr << "Errore nella cancellazione della nota: " << e.what() << std::endl;
        throw;
    }
}

void Collezione::ReadAll() const {
    for (const auto &itr: note) {
        itr->read();
    }
}

void Collezione::AddObserver(Observer *o) {
    obs.push_back(o);
}

void Collezione::RemObserver(Observer *o) {
    obs.remove(o);
}

void Collezione::notify() {
    for (auto &itr: obs) {
        itr->update();
    }
}

int Collezione::contaNota() const {
    return note.size();
}

const std::list<std::shared_ptr<Nota>> &Collezione::getNote() const {
    return note;
}

void Collezione::ModifyNota(const std::string &name, const std::string &newTitle, const std::string &newText) {
    try {
        bool found = false;
        for (auto &itr: note) {
            if (itr->getTitle() == name) {

                if (itr->isLock()) {
                    throw NotaBloccataException("Nota bloccata, impossibile modificare");
                }

                itr->SetTitle(newTitle);
                itr->SetText(newText);
                found = true;
                return;
            }
        }
        if (!found) {
            throw NotaNonTrovataException("Nota non trovata");
        }
    }
    catch (const NotaException &e) {
        std::cerr << "Errore nella modifica della nota: " << e.what() << std::endl;
        throw;
    }
}

bool Collezione::isImportant1() const {
    return isImportant;
}

void Collezione::setIsImportant(bool isImportant) {
    Collezione::isImportant = isImportant;
}

