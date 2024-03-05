//
// Created by Niccolò Magnolfi on 04/03/24.
//

#ifndef PROGETTO_OBSERVER_H
#define PROGETTO_OBSERVER_H
class Observer {
public:
    virtual ~Observer(){}
    virtual void attach() = 0;
    virtual void detach() = 0;
    virtual void update() = 0;
};
#endif //PROGETTO_OBSERVER_H
