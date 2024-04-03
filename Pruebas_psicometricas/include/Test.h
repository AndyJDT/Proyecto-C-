#ifndef TEST_H
#define TEST_H

#include <string>

class Test
{
    public:
        Test(int, int, int, std::string respuesta, std::string respuestapersona);
        virtual int evaluate();
        int getNumero();

    protected:
        int numero;
        int puntosCorrectos;
        int puntosIncorrectos;
        std::string respuesta;
        std::string respuestapersona;
};

#endif // TEST_H
