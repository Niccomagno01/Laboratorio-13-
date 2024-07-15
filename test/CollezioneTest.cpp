//
// Created by Niccolò Magnolfi on 10/07/24.
//
#include "gtest/gtest.h"
#include "../Collezione.h"

TEST(Collezione, Constructor){
    Collezione test("prova");
    ASSERT_EQ(test.getName(), "prova");
    ASSERT_EQ(test.contaNota(), 0);
}

TEST(Collezione, SetName){
    Collezione test("prova");
    test.setName("prova2");
    ASSERT_EQ(test.getName(), "prova2");
}

TEST(Collezione, AddNota){
    Collezione test("Test");
    Nota nota1("Creazione1", "Testo1", true);
    test.AddNota(&nota1);
    ASSERT_EQ(test.contaNota(), 1);
}

TEST(Collezione, DeleteNota) {
    Collezione test("Test");
    Nota nota1("Creazione1", "Testo1", true);
    test.AddNota(&nota1);
    ASSERT_EQ(test.contaNota(), 1);
    test.DeleteNota(&nota1);
    ASSERT_EQ(test.contaNota(), 0);
}

TEST(Collezione, ReadAll){
    Collezione test("Test");
    Nota nota1("Creazione1", "Testo1", true);
    Nota nota2("Creazione2", "Testo2", true);
    test.AddNota(&nota1);
    test.AddNota(&nota2);
    test.ReadAll();
}