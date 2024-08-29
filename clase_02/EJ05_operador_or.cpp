
/*
    EJERCICIO 00:
    Ingresa un numero y determina e informa si es menor a 10 o mayor a 65


*/

#include <iostream>

using namespace std;

int main(){

    // declarar la variables
    int numero;

    // ingresar el numero
    cout << "Ingresar el numero: ";
    cin >> numero;

    // pregunto si el numero es menor a 10  o mayor a 65
    if(numero < 10 || numero > 65){  // con tabla de verdad del operador or
        cout << "El numero es menor a 10 o mayor a 65" << endl;
    }

    system("pause");
    return 0;
}
