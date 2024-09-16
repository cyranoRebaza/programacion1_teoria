
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
        - busco algun divisor entre 1 el numero --> sabemos que mas de 2 divisores no es primo
        - inicializo divisor en 2
        - mientras no aparesca un divisor sigo buscando
        - pregunto si el divisor encontrado es igual al numero ingresado

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int divisor;

    // pido el numero
    cout << "Ingrese numero: ";
    cin >> numero;

    // inicializo el divisor en 2 --> descarto el 1 porque es divisor
    divisor = 2;

    // busco divisores entre 2 y el numero --> mientras resto sea distinto cero seguira buscando
    // cuando sea falso --> encuetre un divisor dejara de ejecutar
    while(numero% divisor != 0 && numero > 1){
        divisor++;
    }

    /*
    ********************************

    divisor = 1;

    do{
        divisor++;


    }while(numero% divisor != 0 && numero > 1);

    **********************************

    */

    // pregunto por el divisor encontrado --> numero y divisor son iguales
    if(numero == divisor){
        cout << "Es primo" << endl;
    }
    else{
        cout << "No es primo" << endl;
    }




    system("pause");
    return 0;
}
