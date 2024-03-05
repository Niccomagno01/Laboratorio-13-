//
// Created by Niccolò Magnolfi on 02/03/24.
//

#ifndef PROGETTO_COLLEZIONE_H
#define PROGETTO_COLLEZIONE_H
#include "Nota.h"
#include "Subject.h"
#include <list>

class Collezione :public Subject{
    public:

        Collezione(std::string name): name(name){};
        ~Collezione(){};

        const std::string &getName() const;

        void setName(const std::string &name);

        void AddNota(Nota* nota);

        void DeleteNota(Nota* nota);

        void ReadAll();

        int contaNota();

        void AddObserver(Observer *o) override;

        void RemObserver(Observer *o) override;

        void notify() override;



    private:
        std::list <Nota* > note;
        std::list <Observer*>obs;
        std::string name;

};


#endif //PROGETTO_COLLEZIONE_H
