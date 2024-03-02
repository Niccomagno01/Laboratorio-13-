//
// Created by Niccolò Magnolfi on 02/03/24.
//

#include "Nota.h"
Nota::Nota(std::string title, std::string text, bool lock): title(title), text(text), lock(lock = false) {}

void Nota::SetTitle(std::string newTitle){
    if(!lock)
        title = newTitle;
    else
        std::cout << "nota bloccata" << std::endl;
}

const std::string &Nota::getTitle() const {
    return title;
}

void Nota::SetText(std::string newText){
    if(!lock)
        text = newText;
    else
        std::cout << "nota bloccata" << std::endl;
}

void Nota::changeLock() {
    lock = !lock;
}

void Nota::read(){
    std::cout << "titolo: " << title << std::endl;
    std::cout << "testo: " << text << std::endl;
    if(lock){
        std::cout <<"blocco: si \n"<< std::endl;
    }
}
