/*
    EJERCICIO 00:
    Hacer un programa que solicite 2 numeros y muestre
    A) si alguno es par
    B) si ambos son pares


*/

#include <iostream>

using namespace std;

int main()
{

    // declarar las variables
    int numero1;
    int numero2;


    // Ingresar los numeros
    cout << "Ingrese primer numero: ";
    cin >> numero1;

    cout << "Ingrese segundo numero: ";
    cin >> numero2;

    //************************************************

    // si hay algun par
    if((numero1 % 2 == 0) || (numero2 % 2 == 0))
    {

        // pregunto si los dos son pares
        if((numero1 % 2 == 0) && (numero2 % 2 == 0))
        {
            cout << "Ambos son pares" << endl; //mostrar cartel "ambos son paeres"
        }
        else
        {
            cout << "Hay algun par" << endl; //mostrar cartel "algunos es par"
        }
    }

    else  // si no hay par
    {

        //mostrar cartel "no hay par"
        cout << "ninguno es par" << endl;
    }


    //*************************************************

//    if((numero1 % 2 == 0) && (numero2 % 2 == 0)) // pregunto ambos son pares
//    {
//        cout << "Ambos son pares" << endl;
//    }
//    else
//    {
//        if((numero1 % 2 == 0) || (numero2 % 2 == 0)) // pregunto si alguno es par
//        {
//            cout << "Hay algun par" << endl;
//        else
//        {
//            cout << "Ninguno es par" << endl;
//        }
//    }


    system("pause");
    return 0;
}
