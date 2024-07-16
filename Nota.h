//
// Created by Niccolò Magnolfi on 02/03/24.
//

#ifndef PROGETTO_NOTA_H
#define PROGETTO_NOTA_H

#include <iostream>
#include <string>

class Nota {
public:

    Nota(const std::string &title = "", const std::string &text = "", bool lock = false);

    ~Nota() {};

    void SetTitle(const std::string &newTitle);

    const std::string &getTitle() const;

    void SetText(const std::string &newText);

    const std::string &getText() const;

    bool isLock() const;

    void changeLock();

    std::string read() const;

private:
    std::string title;
    std::string text;
    bool lock;

};


#endif //PROGETTO_NOTA_H
