#include <iostream>
#include "Collezione.h"
#include "Collezione_Observer.h"
#include "Nota.h"

int main() {

    //creo note prova
    Nota *prova = new Nota("prova", "testo di prova", true);
    Nota *prova2 = new Nota("prova2", "testo di prova2", false);
    Nota *prova3 = new Nota("prova3", "testo di prova3", false);

    try {
        //leggo nota
        std::cout << "leggo nota prova" << std::endl;
        std::cout << prova->read() << std::endl;

        //modifica nota
        std::cout << "modifica nota prova2" << std::endl;
        prova2->SetTitle("prova5");
        prova2->SetText("non bloccata");

        //modifica nota bloccata
        std::cout << "modifica nota prova" << std::endl;
        prova->SetTitle("prova5");

        //leggo nota
        std::cout << "leggo nota prova" << std::endl;
        std::cout << prova->read() << std::endl;
    }
    catch (const NotaException &e) {
        std::cerr << "Errore nella modifica della nota: " << e.what() << std::endl;
    }

    //creo collezione
    Collezione *c = new Collezione("Collezione");

    //aggiungo observer
    Collezione_Observer *co = new Collezione_Observer(c);


    //aggiungo note come shared ptr
    c->AddNota(std::shared_ptr<Nota>(prova));
    c->AddNota(std::shared_ptr<Nota>(prova2));

    //leggo tutte le note
    std::cout << "\nleggo tutte le note nella collezione importante \n" << std::endl;
    c->ReadAll();

    //cancello nota
    std::cout << "\ncancello nota prova da collezione c\n" << std::endl;
    c->DeleteNota("prova5");

    //leggo tutte le note
    std::cout << "leggo tutte le note in c: " << std::endl;
    c->ReadAll();

    //creo collezione importante
    Collezione *c2 = new Collezione("Collezione importante", true);

    //aggiungo observer associato
    Collezione_Observer *co2 = new Collezione_Observer(c2);

    //aggiungo note
    c2->AddNota(std::shared_ptr<Nota>(prova3));
    //aggiungo nota inesistente
    c2->AddNota(std::shared_ptr<Nota>(nullptr));
    return 0;
}
