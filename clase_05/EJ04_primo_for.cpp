
/*
    EJERCICIO 00:
    dado un numero entero informar si dicho numero es primo

    ******************************
    PRIMO:
        - un numero es primo cuando es divisible por 1 y el mismo(es divisible por dos numeros)
        - divisible (resto == 0)
        - entre los divisores de un numero N (divisores: 1,2, ...N)--> deben existir 2 divisores exactos

    ******************************
    ESTRATEGIA:
        - pedir un numero
        - contar los divisores exactos
        -si lo divisores son 2, entonces es un numero primo



*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int cantidadDivisores;

    // pido el numero
    cout << "Ingrese numero: ";
    cin >> numero;

    // inicializo el contador de dvisores en cero antes de entrar al for --> puedo hacerlo en la declaracion
    cantidadDivisores = 0;

    // recorro los numero del 1 al numero
    for(int i = 1; i <= numero; i++){

        //busco divisores exactos
        if(numero% i == 0){
            cantidadDivisores++; // cuento divisores
        }
    }

    // pregunto si la cantidad de divisores exactos son 2 --> sea o no  primo
    if(cantidadDivisores == 2){
        cout << " Es primo" << endl;
    }
    else{
        cout << " No es primo" << endl;
    }

    system("pause");
    return 0;
}
