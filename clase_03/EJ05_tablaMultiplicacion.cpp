
/*
    EJERCICIO 00:
    Hacer un programa que dado un numero me muestre la tabla de multiplicar de ese numero

    DATOS ENTRADA:
        - un numero

    DATOS SALIDA:
        - resultado de cada operacion -> numero * 1
                                         numero * 2
                                         ...
                                         numero * 10
    OPERACION
        resultado1 = numero * 1
        resultado2 = numero * 2
        ....
        resultado10 = numero * 10

    ESTRATEGIA
        - pido el numero
        - mostrar el numero * 1
        - mostrar el numero * 2
        ....
        - mostrar el numero * 10


*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;

    // ingrese el numero
    cout << "Ingrese el numero: ";
    cin >> numero;

    cout << "\nTABLA DEL " << numero << endl << endl;

    cout << numero << " x " << " 1 " << "  = " << numero * 1 << endl;
    cout << numero << " x " << " 2 " << "  = " << numero * 2 << endl;
    cout << numero << " x " << " 3 " << "  = " << numero * 3 << endl;
    cout << numero << " x " << " 4 " << "  = " << numero * 4 << endl;
    cout << numero << " x " << " 5 " << "  = " << numero * 5 << endl;
    cout << numero << " x " << " 6 " << "  = " << numero * 6 << endl;
    cout << numero << " x " << " 7 " << "  = " << numero * 7 << endl;
    cout << numero << " x " << " 8 " << "  = " << numero * 8 << endl;
    cout << numero << " x " << " 9 " << "  = " << numero * 9 << endl;
    cout << numero << " x " << " 10 " << " = " << numero * 10 << endl;


    system("pause");
    return 0;
}
