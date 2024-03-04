//
// Created by Niccolò Magnolfi on 04/03/24.
//

#ifndef PROGETTO_COLLEZIONE_IMPORTANTE_H
#define PROGETTO_COLLEZIONE_IMPORTANTE_H
#include "Collezione.h"
class Collezione_Importante: public Collezione {
public:
    Collezione_Importante(std::string name): Collezione(name){};
    ~Collezione_Importante(){};
};
#endif //PROGETTO_COLLEZIONE_IMPORTANTE_H
