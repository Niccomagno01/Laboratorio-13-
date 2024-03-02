//
// Created by Niccolò Magnolfi on 02/03/24.
//

#ifndef PROGETTO_NOTA_H
#define PROGETTO_NOTA_H
#include <iostream>
class Nota {
public:

    Nota(std::string title, std::string text, bool lock);
    ~Nota(){};

    void SetTitle(std::string newTitle);

    const std::string &getTitle() const;

    void SetText(std::string newText);

    void changeLock();

    void read();

private:
    std::string title;
    std::string text;
    bool lock;

};


#endif //PROGETTO_NOTA_H
