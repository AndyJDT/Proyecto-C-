#include <iostream>
#include "test_complejo.h"


Test_complejo::Test_complejo(int numero, int puntosCorrectos, int puntosIncorrectos, std::string respuesta, std::string respuestapersona)
: Test(numero,puntosCorrectos,puntosIncorrectos,respuesta,respuestapersona){}

int Test_complejo::evaluate(){
    int s = 0;
    for(int i = 0; i < respuesta.size(); i++){
        if(respuestapersona[i] == respuesta[i]){
            s += puntosCorrectos;
        }else{
            s -= 2*puntosIncorrectos;
        }
    }
    return s;
}


