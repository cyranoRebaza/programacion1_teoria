/*
    EJERCICIO 00:
    EXPRESION LOGICA: obtener un valor de verdad -- verdadero (true) / falso (false)


    ESTRUCTURA DE SELECION SIMPLE O DOBLE

    if(expresion_logica){
        verdadero -- true (representacion numerica es 1)
    }
    else{
        falso -- false (representacion numerica es 0)
    }

    ***********************
    OPERADORES RELACIONALES: > , >= , < , <= , != , ==
    ***********************


    *******************
    OPERADORES LOGICOS:
    *******************
    && (and) (Y)equivale *
    || (or)  (O)equivale +
    !(not)   (NO)



*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    bool valorVerdad1 = true;   // valorVerdad1 = 1
    bool valorVerdad2 = false;  // valorVerdad1 = 0



    // la expresion logica puede venir de una constante litereal,de una variable, de una operacion

    if(valorVerdad1){
        cout << "lado verdadero" << endl;
    }
    else{
        cout << "lado falso" << endl;
    }

    if(valorVerdad2){
        cout << "lado verdadero" << endl;
    }
    else{
        cout << "lado falso" << endl;
    }






    system("pause");
    return 0;
}
