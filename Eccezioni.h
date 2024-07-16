//
// Created by Niccolò Magnolfi on 16/07/24.
//

#ifndef PROGETTO_ECCEZIONI_H
#define PROGETTO_ECCEZIONI_H

#include <stdexcept>

class NotaException : public std::runtime_error {
public:
    explicit NotaException(const std::string& message)
            : std::runtime_error(message) {}
};

class NotaNonTrovataException : public NotaException {
public:
    explicit NotaNonTrovataException(const std::string& message)
            : NotaException(message) {}
};

class NotaBloccataException : public NotaException {
public:
    explicit NotaBloccataException(const std::string& message)
            : NotaException(message) {}
};

#endif //PROGETTO_ECCEZIONI_H
