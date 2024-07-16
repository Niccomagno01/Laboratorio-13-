//
// Created by Niccolò Magnolfi on 10/07/24.
//
#include "gtest/gtest.h"
#include "../Collezione.h"

TEST(Collezione, Constructor) {
    Collezione test("prova");
    ASSERT_EQ(test.getName(), "prova");
    ASSERT_EQ(test.contaNota(), 0);
}

TEST(Collezione, ConstructorEmpty) {
    Collezione test;
    ASSERT_EQ(test.getName(), "");
    ASSERT_EQ(test.contaNota(), 0);
}

TEST(Collezione, SetName) {
    Collezione test("prova");
    test.setName("prova2");
    ASSERT_EQ(test.getName(), "prova2");
}

TEST(Collezione, AddNota) {
    Collezione test("Test");
    Nota nota1("Creazione1", "Testo1", true);
    test.AddNota(std::make_shared<Nota>(nota1));
    ASSERT_EQ(test.contaNota(), 1);
}

TEST(Collezione, AddNota_NotaNulla) {
    Collezione test("Test");
    ASSERT_THROW(test.AddNota(nullptr), std::invalid_argument);
}

TEST(Collezione, DeleteNota) {
    Collezione test("Test");
    Nota nota1("Creazione1", "Testo1", false);
    test.AddNota(std::make_shared<Nota>(nota1));
    test.DeleteNota("Creazione1");
    ASSERT_EQ(test.contaNota(), 0);
}

TEST(Collezione, DeleteNota_Bloccata) {
    Collezione test("Test");
    Nota nota1("Creazione1", "Testo1", true);
    test.AddNota(std::make_shared<Nota>(nota1));
    ASSERT_THROW(test.DeleteNota("Creazione1"), NotaBloccataException);
}

TEST(Collezione, DeleteNota_NonTrovata) {
    Collezione test("Test");
    ASSERT_THROW(test.DeleteNota("Creazione1"), NotaNonTrovataException);
}

TEST(Collezione, ModifyNota) {
    Collezione test("Test");
    Nota nota1("Creazione1", "Testo1", false);
    test.AddNota(std::make_shared<Nota>(nota1));
    test.ModifyNota("Creazione1", "Creazione2", "Testo2");
    ASSERT_EQ(test.getNote().front()->getTitle(), "Creazione2");
    ASSERT_EQ(test.getNote().front()->getText(), "Testo2");
}

TEST(Collezione, ModifyNota_Bloccata) {
    Collezione test("Test");
    Nota nota1("Creazione1", "Testo1", true);
    test.AddNota(std::make_shared<Nota>(nota1));
    ASSERT_THROW(test.ModifyNota("Creazione1", "Creazione2", "Testo2"), NotaBloccataException);
}

TEST(Collezione, ReadAll) {
    Collezione test("Test");
    Nota nota1("Creazione1", "Testo1", true);
    Nota nota2("Creazione2", "Testo2", true);
    test.AddNota(std::make_shared<Nota>(nota1));
    test.AddNota(std::make_shared<Nota>(nota2));
    test.ReadAll();
}

TEST(Collezione, CambiaImportante) {
    Collezione test("Test");
    test.setIsImportant(true);
    ASSERT_EQ(test.isImportant1(), true);
}