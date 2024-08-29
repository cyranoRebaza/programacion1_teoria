
/*
    EJERCICIO 00:
    Ingresar un numero entero y ver si es positivo o no

    **********************************************

    DECISION DOBLE:

    if (proposicion_logica){
        // Instrucciones a ejecutar si la proposición lógica fue verdadera
    }
    else{
        // Instrucciones a ejecutar si la proposición lógica fue falsa
    }

        NOTA:
            -el else no tiene condicion, este se ejecuta si la proposicion logica no es verdadera


*/

#include <iostream>

using namespace std;

int main(){

    // declaro la variable
    int numero;

    // pido que ingrese el numero
    cout << "Ingrese el numero: ";
    cin >> numero;

    // pregunto si el numero es positivo
    if(numero > 0){
        cout << "El numero es positivo" << endl;  // se ejeccuta solo si el usuario ingresa un numero positivo
    }
    else{
        cout << "El numero NO es positivo " << endl;
    }

    system("pause");
    return 0;
}
