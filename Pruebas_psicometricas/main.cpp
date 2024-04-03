#include <iostream>
#include "Persona.h"
#include "Test.h"
#include "Test_simple.h"
#include "Test_complejo.h"

using namespace std;

int main()
{
    int m = 0;
    while(m != 2){
            std:: cout << "\5Que opcion desea ejecutar: \n1->Agregar nueva persona \n2->Terminar" << std:: endl;
            std:: cin >> m;
            if(m == 1){
                std:: cout << "\5Introdusca el nombre, edad, sexo(debes poner m si es masculino y f si es femenino) de la persona :" << std:: endl;

                std:: string nombre;
                int edad;
                char sexo;

                std:: cin >> nombre >> edad >> sexo;
                Persona persona(nombre, edad, sexo);

                std:: cout << "\5Introdusca la cantida de test realizados a la persona :" << std:: endl;
                int c;
                std:: cin >> c;
                for(int i = 0; i < c; i++){
                    std:: cout << "\5Para decir el tipo de test teclee s para el simple y c para el complejo:" << std:: endl;
                    char a;
                    std:: cin >> a;
                    if(a == 's'){
                        std:: cout << "\1Teclee el valor de las pregutas correctas y de las incorrectas:" << std:: endl;
                        int puntoscorrectos, puntosincorrectos;
                        std:: cin >> puntoscorrectos >> puntosincorrectos;

                        std:: cout << "\1Teclee la respuesta correcta(debe tener 'ABCD' como ejemplo )" << std:: endl;
                        std:: string respuestacorrecta;
                        std:: cin >> respuestacorrecta;

                        std:: cout << "\1Teclee la respuesta de la persona" << std:: endl;
                        std:: string respuestapersona;
                        std:: cin >> respuestapersona;

                        Test* test = new Test_simple(i+1,puntoscorrectos,puntosincorrectos,respuestacorrecta,respuestapersona);

                        persona.addTest(test);

                    }else if(a == 'c'){
                        std:: cout << "\2Teclee el valor de las pregutas correctas y de las incorrectas:" << std:: endl;
                        int puntoscorrectos, puntosincorrectos;
                        std:: cin >> puntoscorrectos >> puntosincorrectos;

                        std:: cout << "\2Teclee la respuesta correcta(debe tener 'ABCD' como ejemplo)\2" << std:: endl;
                        std:: string respuestacorrecta;
                        std:: cin >> respuestacorrecta;

                        std:: cout << "\2Teclee la respuesta de la persona\2" << std:: endl;
                        std:: string respuestapersona;
                        std:: cin >> respuestapersona;

                        Test* test = new Test_complejo(i+1,puntoscorrectos,puntosincorrectos,respuestacorrecta,respuestapersona);

                        persona.addTest(test);


                    }
                }
                persona.showResults();
            }
    }
    return 0;
}
