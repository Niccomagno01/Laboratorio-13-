#include <iostream>
#include "Collezione.h"
#include "Nota.h"
#include "Collezione_Observer.h"
#include "Collezione_Importante.h"

int main() {
    //creo note prova
    Nota* prova = new Nota("prova", "testo di prova", false);
    Nota* prova2 = new Nota("prova2", "testo di prova2", false);
    Nota* prova3 = new Nota("prova3", "testo di prova3", false);

    //creo collezione
    Collezione* c = new Collezione("Collezione");

    //aggiungo note
    std::cout<< "Prova aggiunta note" << std::endl;
    c->AddNota(prova);
    c->AddNota(prova2);
    c->AddNota(prova3);

   //leggo tutte le note
    std::cout << "\n[Contenuto note nella collezione]" << std::endl;
    c->ReadAll();

    //cambio nome collezione
    std::cout << "\n cambio nome collezione \n" << std::endl;
    c->setName("collezione2");
    std::cout << "nome collezione: " << c->getName() << std::endl;

    //creo collezione importante
    std::cout<< "\nProva collezione importante\n" << std::endl;
   Collezione_Importante* ci = new Collezione_Importante("Collezione importante");


    //aggiungo note in importante
    ci->AddNota(prova);
    ci->AddNota(prova3);

    //leggo tutte le note
    std::cout << "\nleggo tutte le note importanti \n" << std::endl;
    ci->ReadAll();

    //cancello nota
    std::cout << "\ncancello nota prova3 da collezione\n" << std::endl;
    ci->DeleteNota(prova3);

    //blocco nota prova
    prova->changeLock();

    //leggo tutte le note
    std::cout << "leggo tutte le note: " << std::endl;
    c->ReadAll();

    //cancello nota prova
    std::cout << "\ncancello nota prova da collezione\n" << std::endl;
    c->DeleteNota(prova);
    delete ci;
    delete c;
    return 0;
}
