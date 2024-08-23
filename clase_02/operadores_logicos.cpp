
/*
    EJERCICIO 00:
    determinar si el numero esta dentro del rango 20 y 30


     *******************
    OPERADORES LOGICOS:
    *******************
    && (and) (Y) equivale * => nececita 2 operandos
    || (or)  (O) equivale + => necesita 2 operandos
    !(not)   (NO)equivale - => necesita 1 operando


    AND: da verdadero, si ambos operandos son verdaderos

    V && V => V
    V && F => F
    F && V => F
    F && F => F

    OR: da verdadero, si ALGUNOS de sus operandos son verdaderos

    V || V => V
    V || F => V
    F || V => V
    F || F => F

    NOT: niega el valor de verdad

    !V => F
    !F => V


    *******************
    EJEMPLO:
    *******************

    2  +  5  *  3 => 2  + 15 => 17

    V ||  F &&  V => V || F  => V

    1 +   0 *  1 => 1 + 0  => 1



*/

#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    // metodo1: if anidado
    if (numero >= 20){
        if(numero <= 30){
            cout << "Esta dentro del rango" << endl;
        }
        else{
            cout << "no esta dentro del rango" << endl;
        }
    }
    else{
        cout << "no esta dentro del rango" << endl;
    }


//    // metodo2: concatenadores logicos
//
//    if( (numero >= 20) && (numero <= 30) ){
//        cout << "Esta dentro del rango" << endl;
//    }
//    else{
//        cout << "no esta dentro del rango" << endl;
//    }

    system("pause");
    return 0;
}
