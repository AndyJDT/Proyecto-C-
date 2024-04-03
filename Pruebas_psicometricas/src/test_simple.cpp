#include <iostream>
#include "test_simple.h"

Test_simple::Test_simple(int numero, int puntosCorrectos, int puntosIncorrectos, std::string respuesta, std::string respuestapersona)
: Test(numero,puntosCorrectos,puntosIncorrectos,respuesta,respuestapersona) {}

int Test_simple::evaluate(){
    int s = 0;
    for(int i = 0; i < respuesta.size(); i++){
        if(respuestapersona[i] == respuesta[i]){
            s += puntosCorrectos;
        }else{
            s -= puntosIncorrectos;
        }
    }
    return s;
}
