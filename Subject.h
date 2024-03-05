//
// Created by Niccolò Magnolfi on 04/03/24.
//

#ifndef PROGETTO_SUBJECT_H
#define PROGETTO_SUBJECT_H
#include "Observer.h"
class Subject {
public:
    ~Subject(){}
    virtual void AddObserver(Observer *o) = 0;
    virtual void RemObserver(Observer *o) = 0;
    virtual void notify() = 0;

};
#endif //PROGETTO_SUBJECT_H
