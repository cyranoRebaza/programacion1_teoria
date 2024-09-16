
/*
    EJERCICIO 00:
    Dada una lista de numeros positivos que finaliza con cero,mostrar cuantos de ellos son pares

    **********************************
    - el usuario va ingresar una cantidad de numeros indeterminada, dejara de
      cargar datos cuando ingrese un cero

    - al finalizar la carga de numeros debe mostrar una sola vez la cantidad de pares

    ESTRATEGIA
    A) pedir la lista de numeros , hasta que ingrese cero (cero no forma parte de la lista numeros)
    B) contar cuantos de ellos son pares
    C) mostrar la cantidad de pares

    **********************************
    NOTA: cuando usamos un while la varible CENTINELA --> se debe inicializar antes del while
                                                      --> siempre se debe modificar dentro de while

    **********************************
    while(expresion_logica){} --> puede o no tener repeticiones ---> el ultimo dato se ignora

    do{

    }while(expresion_logica);  --> al menos repite una vez -->  se procesa el dato

*/

#include <iostream>

using namespace std;

int main(){

    //declaro las variables

    //A
    int numero;

    //B
    int cantidadPares =0;

    //***************************************

    // pido un numero
    cout << "Ingrese un numero: ";
    cin >> numero;

    //A--> pido el resto de numeros donde condicion de corte es cero
    while(numero != 0){

        //por cada  numero --> verifico si es par
        if(numero % 2 == 0){

            cantidadPares++; // B--> cuento los pares
        }


        // pido nuevo numero
        cout << "Ingrese un numero: ";
        cin >> numero;

    }

    //*******************************************

    // C--> muestro la cantidad de pares
    cout << "La cantidad de pares ingresados son: " << cantidadPares << endl;

    system("pause");
    return 0;
}
