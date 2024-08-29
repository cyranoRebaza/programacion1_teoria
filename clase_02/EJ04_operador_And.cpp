
/*
    EJERCICIO 00:
    Ingresar un numero y determina e informa si esta entre 1 y 9


*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variable
    int numero;

    // pido el numero
    cout << "Ingresar el numero: ";
    cin >> numero;

    // pregunto rango
    if(numero > 0 && numero < 10){ // usamos la tabla de verdad operador logico && para combinar proposiciones logicas
        cout << "El numero esta entre 1 y 9" << endl;
    }

    system("pause");
    return 0;
}
