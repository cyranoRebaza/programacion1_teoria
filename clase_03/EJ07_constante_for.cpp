
/*
    EJERCICIO 00:

    CONSTANTE:
        DEFINICION: identificador de un valor que no se espera que modique

        DEFINICION2: es una variable INMUTABLE (se le asigna un valor y no cambia)

        DEFINICION3: este concepto de un valor 10 es constante, siempre sera 10


*/

#include <iostream>

using namespace std;

int main(){

    // declaro la variable
    const int CANTIDAD_VUELTAS = 10;

    // CANTIDAD_VUELTAS = 15; esta instrucion no se compila porque es una variable de solo lectura, no se puede reasigar su valor

    // mostrar las vueltas que da el ciclo usando la variable de control
    for(int i = 1; i <= CANTIDAD_VUELTAS; i++){
        cout << i << endl;
    }

    system("pause");
    return 0;
}
