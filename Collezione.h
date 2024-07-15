//
// Created by Niccolò Magnolfi on 02/03/24.
//

#ifndef PROGETTO_COLLEZIONE_H
#define PROGETTO_COLLEZIONE_H

#include "Nota.h"
#include "Subject.h"
#include <list>
#include <memory>

class Collezione_Observer; //faccio una dichiarazione anticipata per evitare problemi di inclusione circolare

class Collezione :public Subject{
public:

    Collezione(std::string name ="");

    ~Collezione();

    const std::string &getName() const;

    void setName(const std::string &name);

    void AddNota(Nota* nota);

    void DeleteNota(Nota* nota);

    void ReadAll();

    const std::list<Nota *> &getNote() const;

    int contaNota();

    void AddObserver(Observer *o) override;

    void RemObserver(Observer *o) override;

    void notify() override;

private:

    std::list <Nota* > note;
    std::list <Observer*>obs;
    std::string name;
    std::unique_ptr<Observer> observer;

};


#endif //PROGETTO_COLLEZIONE_H