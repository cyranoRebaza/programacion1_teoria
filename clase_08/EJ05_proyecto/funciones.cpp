
#include <iostream>
using namespace std;
#include "funciones.h" // incluye las declaraciones de las funciones


// DEFINICIONES O IMPLEMENTACIONES  DE PROCEDIMIENTOS
void mostrar()
{
    cout << "Hola mundo" << endl;
    return;
}

void saludar(string nombre, int tipo)
{
    switch(tipo)
    {
    case 1:
        cout << "hola " << nombre << endl;
        break;

    case 2:
        cout << "hello " << nombre << endl;
        break;

    default:
        cout << "que hace " << nombre << endl;
        break;

    }
    return;

}


// DEFINICIONES O IMPLEMENTACIONES DE FUNCIONES
int pedirNumeroPositivo()
{
    int numero;

    do
    {
        cout << "Ingrese numero: ";
        cin >> numero;

        if(numero < 0)
        {
            cout << "el numero debe ser positivo " << endl;
        }
    }
    while(numero <= 0);


    return numero;

}


int pedirNumeroRango(int minimo, int maximo)
{
    int numero;

    do
    {
        cout << "Ingrese numero: ";
        cin >> numero;

        if(numero < minimo || numero > maximo)
        {
            cout << "El numero debe estar entre el " << minimo << "y el " << maximo << endl;
        }
    }
    while(numero < minimo || numero > maximo);


    return numero;

}
