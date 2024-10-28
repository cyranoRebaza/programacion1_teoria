/*
    NOTA:
    - al crear un archivo.h(encabezados) donde van las declaraciones de las funciones --> debemos incluirlo en main.cpp y en funciones.cpp
*/

#include <iostream>

using namespace std;

#include "funciones.h" // incluye las declaraciones de las funciones



int main()
{

    // llamo a procedimientos

    mostrar();

    saludar("Pepe", 1);
    saludar("Juan", 2);
    saludar("Eli", 3);

    // llamo a las funciones

    int valor = pedirNumeroPositivo();
    cout << " el valor devuelto es: " << valor << endl;


    int rango = pedirNumeroRango(10, 30);
    cout << " el rango devuelto es: " << rango << endl;


    system("pause");
    return 0;
}


