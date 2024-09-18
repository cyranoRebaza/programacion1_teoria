/*
    EJERCICIO 16-tp4:
    hacer un programa para ingresar una lista de numeros que finaliza cuando se ingresan
    dos numeros consecutivos iguales, y luego informar el maximo.

    cuando se ingresa el numero repetido el mismo debe ser descartado

    Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listará Máximo 35.
    En este caso, el segundo número 22 no se analiza, solo sirve para finalizar el ingreso.

    Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listará Máximo 55.
    En este caso, el segundo número 33 no se analiza, solo sirve para finalizar el ingreso.

    Ejemplo C: 5, 10, 20, 8, 55, 13, 55, -8, -5,  88, 88. Se listará Máximo 88.
    En este caso, el segundo número 88 no se analiza, solo sirve para finalizar el ingreso.

    NOTA: EN ESTA VERSION QUE SEAN 3 LISTAS


*/

#include <iostream>

using namespace std;

int main()
{

    // declaro las variables
    int numero;
    bool seguir = true;

    int numeroAnterior;
    int maximo;

    for(int i =0; i <3; i++)
    {

        // pido numero
        cout << "Ingrese numero: ";
        cin >> numero;

        //guardo el primer numero como maximo
        maximo = numero;

        seguir = true; //inicializo nuevamente en true para la sigueinte vuelta del for

        //armo la estructura principal
        while(seguir == true)
        {

            //guardo el numero anterior
            numeroAnterior = numero;

            // calculo el numero maximo
            if(numero > maximo)
            {
                maximo = numero;
            }


            // pido numero
            cout << "Ingrese numero: ";
            cin >> numero;

            //comparo el numero ingresado con el anterior
            if(numero == numeroAnterior)
            {
                seguir = false;
            }

        }

        // muestro el numero maximo
        cout << "numero maximo lista es: " << maximo << endl;

    }

    system("pause");
    return 0;
}
