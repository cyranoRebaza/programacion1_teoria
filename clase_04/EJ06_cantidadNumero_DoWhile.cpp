
/*
    EJERCICIO 00:
    Dada una lista de numeros positivos que finaliza cuando se ingrese el tercer numero par,
    mostrar cuatos numeros se ingresaron el total

    ****************************************
    - pedir los numero hasta que se ingrese el tercer par --> numero centinela forma parte --> usamos dowhile
    - contar la cantidad de numeros ingresados
    - mostrar la cantidad de numeros ingresados

    ****************************************


*/

#include <iostream>

using namespace std;

int main(){

    // declaracion de variables
    int numero;
    int cantidadPares = 0;
    int cantidadNumeros = 0;

    do{
        // pido numero
        cout << "Ingrese un numero: ";
        cin >> numero;

        // verifico si el numero es par
        if(numero % 2 == 0){

            cantidadPares++; //cuento los pares
        }

        // cuento la cantidad de numeros ingresados
        cantidadNumeros++;



    }while(cantidadPares < 3);

    // muestro la cantidad de numeros ingresados
    cout << "La cantidad de numeros ingresados fueron: " << cantidadNumeros << endl;

    system("pause");
    return 0;
}
