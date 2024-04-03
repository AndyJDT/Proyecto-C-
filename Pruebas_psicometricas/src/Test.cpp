#include "Test.h"

Test::Test(int numero, int puntosCorrectos, int puntosIncorrectos, std::string respuesta, std::string respuestapersona)
: numero(numero),puntosCorrectos(puntosCorrectos),puntosIncorrectos(puntosIncorrectos),respuesta(respuesta),respuestapersona(respuestapersona) {}

int Test::getNumero(){
    return numero;
}

int Test::evaluate(){return 2;}
