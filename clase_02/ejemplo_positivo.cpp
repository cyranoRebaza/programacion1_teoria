/*
    EJERCICIO 00:
    Hacer un programa que pida un numero y muestre si es positivo, negativo o cero


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

    // va evaluar los tres if, porque esta en secuencia
    if(numero > 0)
    {
        cout << "Es positivo" << endl; // se muestra cuando la condicion es true
    }

    if(numero < 0)
    {
        cout << "Es negativo" << endl;
    }

    if(numero == 0)
    {
        cout << "Es cero" << endl;
    }


    system("pause");
    return 0;
}

