
/*
    EJERCICIO 00:
    Dados dos numeros que se ingresan en variables separadas, informar cuantos son positivos


*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int num1;
    int num2;
    int cantidadPositivos = 0;

    // pidos los numeros
    cout << "Ingrese primer numero: ";
    cin >> num1;

    cout << "Ingrese segundo numero: ";
    cin >> num2;

    // pregunto
    if(num1 > 0){
        cantidadPositivos = cantidadPositivos + 1;  // cantidadPositivos++  o cantidadPositivos += 1
    }
    if(num2 > 0){
        cantidadPositivos++;
    }

    // muestro
    cout << "Cantidad de positivos: " << cantidadPositivos << endl;




    system("pause");
    return 0;
}
