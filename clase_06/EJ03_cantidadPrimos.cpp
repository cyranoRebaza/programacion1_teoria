/*
    EJERCICIO 02-tp5:
    dado una lista de 10 numero entero informar cuantos de los numeros ingresados son primos
    ******************************
    PRIMO:
        - un numero es primo cuando es divisible por 1 y el mismo(es divisible por dos numeros)
        - divisible (resto == 0)
        - entre los divisores de un numero N (divisores: 1,2, ...N)--> deben existir 2 divisores exactos

    ******************************
    ESTRATEGIA:
        - armo la estructura externa --> ingresar los 10 numeros
        - pedir un numero
        - busco primo con un for
        - si lo divisores son 2, entonces cuento cantidad de primos
        - muestro la cantidad de primos



*/

#include <iostream>

using namespace std;

int main()
{

    // declaro las variables
    int numero;
    int cantidadDivisores;
    int contadorPrimos = 0;

    for(int x = 0; x < 10; x++)
    {

        // pido el numero
        cout << "Ingrese numero: ";
        cin >> numero;

        // inicializo el contador de divsores  en cero antes de entrar al for
        cantidadDivisores = 0;


        // recorro los numero del 1 al numero
        for(int i = 1; i <= numero; i++)
        {

            //busco divisores exactos
            if(numero% i == 0)
            {
                cantidadDivisores++; // cuento divisores
            }
        }

        // pregunto si la cantidad de divisores exactos son 2
        if(cantidadDivisores == 2)
        {
            contadorPrimos++;
        }


    }

    // muestro la cantidad de primos
    cout << "La cantidad de primos son: " << contadorPrimos << endl;

    system("pause");
    return 0;
}
