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
    note.push_back(nota);
}

void Collezione::DeleteNota(Nota* nota) {
    for (auto itr = note.begin(); itr != note.end(); itr++) {
        if ((*itr)->getTitle() == nota->getTitle()) {
            note.erase(itr);
            delete nota;
            break;
        }
    }
}

void Collezione::ReadAll() {
    for (auto i : note) {
        i->read();
    }
}