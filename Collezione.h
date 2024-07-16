//
// Created by Niccolò Magnolfi on 02/03/24.
//

#ifndef PROGETTO_COLLEZIONE_H
#define PROGETTO_COLLEZIONE_H

#include "Nota.h"
#include "Subject.h"
#include "Eccezioni.h"
#include <list>
#include <memory>

class Collezione : public Subject {
public:

    Collezione(const std::string &name = "");

    ~Collezione();

    const std::string &getName() const;

    void setName(const std::string &name);

    void AddNota(std::shared_ptr<Nota> nota);

    void ModifyNota(const std::string &name, const std::string &newTitle, const std::string &newText);

    void DeleteNota(const std::string &name);

    void ReadAll() const;

    const std::list<std::shared_ptr<Nota>> &getNote() const;

    int contaNota() const;

    void AddObserver(Observer *o) override;

    void RemObserver(Observer *o) override;

    void notify() override;

private:

    std::list<std::shared_ptr<Nota>> note;
    std::list<Observer *> obs;
    std::string name;

};


#endif //PROGETTO_COLLEZIONE_H