#include "Persona.h"
#include <iostream>
#include "Test.h"

Persona::Persona(std:: string nombre, int edad, char sexo) : nombre(nombre), edad(edad), sexo(sexo) {}

void Persona::addTest(Test* test){
    tests.push_back(test);
}

void Persona::showResults(){
    std:: cout <<" Resultado para " << nombre << ":" << std:: endl;
    for (auto &test : tests){
            int eval = test->evaluate();
        std:: cout <<" Test " << test->getNumero() << ":" << (eval > 0? std:: to_string(eval):"DESCALIFICADO") << std:: endl;
    }
}
