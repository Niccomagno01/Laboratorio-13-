//
// Created by Niccolò Magnolfi on 02/03/24.
//

#ifndef PROGETTO_COLLEZIONE_H
#define PROGETTO_COLLEZIONE_H
#include "Nota.h"
#include <list>

class Collezione {
    public:

        Collezione(std::string name): name(name){};
        ~Collezione(){};

        const std::string &getName() const;

        void setName(const std::string &name);

        void AddNota(Nota* nota);

        void DeleteNota(Nota* nota);

        void ReadAll();

    private:
        std::list <Nota* > note;
        std::string name;
};


#endif //PROGETTO_COLLEZIONE_H
