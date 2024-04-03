#ifndef TEST_COMPLEJO_H
#define TEST_COMPLEJO_H
#include"Test.h"

class Test_complejo: public Test
{
    public:
        Test_complejo(int, int puntosCorrectos, int puntosIncorrectos, std::string respuesta, std::string respuestapersona);
        int evaluate() override;
};

#endif // TEST_COMPLEJO_H
