//
// Created by Niccolò Magnolfi on 10/07/24.
//
#include "gtest/gtest.h"
#include "../Nota.h"

TEST(Nota, Constructor) {
    Nota test;
    ASSERT_TRUE(test.getTitle().empty());
    ASSERT_TRUE(test.getText().empty());
    ASSERT_FALSE(test.isLock());

}

TEST(Nota, createNote) {
    Nota nota1("Creazione1", "Testo1", true);

    ASSERT_EQ(nota1.getTitle(), "Creazione1");
    ASSERT_EQ(nota1.getText(), "Testo1");
    ASSERT_EQ(nota1.isLock(), true);

}

TEST(Nota, modifyTitleTRUE) {
    Nota nota1("Creazione1", "Testo1", true);
    ASSERT_THROW(nota1.SetTitle("Creazione2"), NotaBloccataException);
}

TEST(Nota, modifyTextTRUE) {
    Nota nota1("Creazione1", "Testo1", true);
    ASSERT_THROW(nota1.SetText("Testo2"), NotaBloccataException);
}

TEST (Nota, modifyFALSE) {
    Nota nota1("Creazione1", "Testo1", false);
    nota1.SetTitle("Creazione2");
    nota1.SetText("Testo2");
    ASSERT_EQ(nota1.getTitle(), "Creazione2");
    ASSERT_EQ(nota1.getText(), "Testo2");
}

TEST(Nota, lettura) {
    Nota nota1("Creazione1", "Testo1", true);
    ASSERT_EQ(nota1.read(), "\ntitolo: Creazione1\ntesto: Testo1\nblocco: si \n");
}

TEST(Nota, changeLock) {
    Nota nota1("Creazione1", "Testo1", true);
    nota1.changeLock();
    ASSERT_FALSE(nota1.isLock());
    nota1.changeLock();
    ASSERT_TRUE(nota1.isLock());
}