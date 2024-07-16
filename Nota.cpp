//
// Created by Niccolò Magnolfi on 02/03/24.
//

#include "Nota.h"

Nota::Nota(const std::string &title, const std::string &text, bool lock) : title(title), text(text), lock(lock) {}

void Nota::SetTitle(const std::string &newTitle) {

    if (lock) {
        throw NotaBloccataException("Nota bloccata, impossibile modificare il titolo");
    }

    title = newTitle;
}

const std::string &Nota::getTitle() const {
    return title;
}

void Nota::SetText(const std::string &newText) {

    if (lock) {
        throw NotaBloccataException("Nota bloccata, impossibile modificare il testo");
    }

    text = newText;
}

void Nota::changeLock() {
    lock = !lock;
}

std::string Nota::read() const {
    std::string stringa = "\ntitolo: " + title + "\ntesto: " + text;
    if (lock) {
        stringa += "\nblocco: si \n";
    }
    return stringa;
}

const std::string &Nota::getText() const {
    return text;
}

bool Nota::isLock() const {
    return lock;
}