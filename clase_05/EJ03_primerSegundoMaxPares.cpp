
/*
    EJERCICIO 00:
    dado una lista de numero(5) mostrar el primer y segundo maximo de numero pares

    *************************
    - pido numeros
    - pregunto si el numero es par
    - busco el  primer par es el primero maximo
    - busco el segundo par es el segundo maximo

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int primerMaximoPar;
    int segundoMaximoPar;

    int contadorPares = 0;

    // pido los numero usando un for
    for(int i = 1; i <= 5; i++){

        // pido el numero
        cout << "Ingrese numero: ";
        cin >> numero;

        //pregunto si el numero es par
        if(numero % 2 == 0){
            contadorPares++;

            //pregunto si es primer par
            if(contadorPares == 1){
                primerMaximoPar = numero;
            }
            else if(contadorPares == 2){
                if(numero > primerMaximoPar){
                    segundoMaximoPar = primerMaximoPar;
                    primerMaximoPar = numero;
                }
                else{
                    segundoMaximoPar = numero;
                }
            }
            else if(numero > primerMaximoPar){
                    segundoMaximoPar = primerMaximoPar;
                    primerMaximoPar = numero;
            }
            else if(numero > segundoMaximoPar){
                segundoMaximoPar = numero;
            }
        }

    }

    // muestro el primer y segundo maximo de los numero pares
    if(contadorPares >= 2){
        cout << "Primer maximo par: " << primerMaximoPar << endl;
        cout << "segudo maximo par: " << segundoMaximoPar << endl;

    }
    else{
        cout << "La cantidad de numero pares ingresados no es suficiente" << endl;
    }




    system("pause");
    return 0;
}
