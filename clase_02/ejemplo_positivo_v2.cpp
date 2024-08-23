/*
    EJERCICIO 01:
    Hacer un programa que pida un numero y muestre si es positivo, negativo o cero

    USAR ESTRUCTURA DE CONTROL ANIDADA
*/

#include <iostream>

using namespace std;

int main()
{

    // declaro las variables
    int numero;

    // pido el numero
    cout << "ingrese un numero: ";
    cin >> numero;

    // va evaluar los 2 veces como maximo como minimo 1
    if(numero > 0)
    {
        cout << "Es positivo" << endl;
    }
    else
    {
        if(numero < 0)
        {
            cout << "Es negativo" << endl;
        }
        else
        {
            cout << "Es cero" << endl;
        }


    }





    system("pause");
    return 0;
}
