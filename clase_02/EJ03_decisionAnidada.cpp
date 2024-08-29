
/*
    EJERCICIO 00:
    Ingresar un numero entero y ver si es positivo negativo o cero

    **********************************************

    DECISION ANIDADA:

    if (proposicion_logica){
        // Instrucciones a ejecutar si la proposición lógica fue verdadera
    }
    else{
        if (proposicion_logica){
            // Instrucciones a ejecutar si la proposición lógica fue verdadera
        }
        else{
            // Instrucciones a ejecutar si la proposición lógica fue falsa
        }

    }

        NOTA:
            -el else no tiene condicion, este se ejecuta si la proposicion logica no es verdadera,



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
        cout << "El numero es positivo" << endl;
    }
    else{
        if(numero == 0){
            cout << "El numero es cero " << endl;
        }
        else{
            cout << "El numero es negativo " << endl;
        }
    }

    system("pause");
    return 0;
}
