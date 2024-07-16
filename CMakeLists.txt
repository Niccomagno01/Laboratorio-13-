cmake_minimum_required(VERSION 3.5)
project(Progetto)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test) #aggiunto per includere la cartella test

set(SOURCE-FILES Collezione.cpp Collezione.h
        Collezione_Observer.h
        Nota.cpp Nota.h
        Observer.h
        Subject.h
        Collezione_Importante.h
        Eccezioni.h) #aggiunto per includere i file cpp e h
add_executable(${CMAKE_PROJECT_NAME} main.cpp)
add_library(${CMAKE_PROJECT_NAME}_lib ${SOURCE-FILES})
target_link_libraries(${CMAKE_PROJECT_NAME}
        ${CMAKE_PROJECT_NAME}_lib)