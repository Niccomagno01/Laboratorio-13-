//
// Created by Niccolò Magnolfi on 02/03/24.
//

#include "Collezione.h"
const std::string &Collezione::getName() const {
    return name;
}

void Collezione::setName(const std::string &name) {
    Collezione::name = name;
}

void Collezione::AddNota(Nota* nota) {
    if (nota) {
        note.push_back(nota);
    } else {
        std::cerr << "Errore: tentativo di aggiungere una nota non esistente." << std::endl;
    }
}


void Collezione::DeleteNota(Nota* nota) {
    if (!nota) {
        std::cerr << "Errore: tentativo di eliminare una nota non esistente." << std::endl;
        return;
    }
    for (auto itr = note.begin(); itr != note.end(); itr++) {
        if ((*itr)->getTitle() == nota->getTitle()) {
            delete *itr;
            note.erase(itr);
            break;
        }
    }
}

void Collezione::ReadAll() {
    for (auto i : note) {
        i->read();
    }
}