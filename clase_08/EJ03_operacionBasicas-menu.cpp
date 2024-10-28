/*
    EJERCICIO O1:
    Hacer un programa para que el usuario ingrese 2 números, y luego elija que operación hacer
    de acuerdo con lo siguiente:

    - si el usuario ingresa una S, se calcule la suma de ambos números.
    - si el usuario ingresa una R, se calcule la resta del primero menos el segundo.
    - si el usuario ingresa una P, se calcule el producto de ambos números.
    - si el usuario ingresa una F, se termine el programa.

*/

#include <iostream>

using namespace std;

// DECLARO LA FUNCIONES
int Sumar(int num1, int num2);
int Restar(int num1, int num2);
int Producto(int num1, int num2);

int pedirNumero();


int main()
{

    // declaro las variables
    int numero1;
    int numero2;
    int resultado;

    int  opcion;



    // menu
    do
    {
        system("cls");

        cout << "****** MENU PRINCIPAL *****" << endl << endl;

        cout << "1. Suma"     << endl;
        cout << "2. Resta"    << endl;
        cout << "3. Producto" << endl;
        cout << "0. Salir" << endl;
        cout << "***************************" << endl << endl;

        cout << "Ingrese la opcion: ";
        cin >> opcion;




        switch(opcion)
        {
        case 1:
            numero1 = pedirNumero();
            numero2 = pedirNumero();
            resultado = Sumar(numero1, numero2);
            cout << "El resultado de la suma es: " << resultado << endl;

            break;
        case 2:
            numero1 = pedirNumero();
            numero2 = pedirNumero();
            resultado = Restar(numero1, numero2);
            cout << "El resultado de la resta es: " << resultado << endl;

            break;
        case 3:
            numero1 = pedirNumero();
            numero2 = pedirNumero();
            resultado = Producto(numero1, numero2);
            cout << "El resultado del producto es: " << resultado << endl;

            break;
        case 0:
            cout << "Fin del programa..." <<endl;
            break;
        default:
            cout << "Opcion no valida..." << endl;
        }




        system("pause");
    }
    while(opcion != 0);










    system("pause");
    return 0;
}

// DESARROLLO LAS FUNCIONES
int Sumar(int num1, int num2)
{

    int suma = num1+num2;
    return suma;
}


int Restar(int num1, int num2)
{

    int resta = num1-num2;
    return resta;

}
int Producto(int num1, int num2)
{

    int producto = num1*num2;
    return producto;

}

int pedirNumero(){
    int numero;
    cout << "Ingrese numero: ";
    cin >> numero;

    return numero;

}
