#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <vector>
#include"Test.h"

class Persona{

    std::string nombre;
    int edad;
    char sexo;
    std::vector<Test*> tests;

public:
    Persona(std::string nombre, int edad, char sexo);
    void addTest(Test* test);
    void showResults();
};

#endif // PERSONA_H
