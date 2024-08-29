
/*
    EJERCICIO 00:
    hacer un programa que pida por teclado la cantidad de numeros
    que quiere que se muestren, y luego mostrar los numero entre
    1 y la cantidad

    ¿conozco la cantidad de vueltas?

    -no, pero el usuario los va ingresar


*/

#include <iostream>

using namespace std;

int main(){

    // declaro la variable
    int numeroVueltas;

    // pido el numero de vueltas
    cout << "Ingrese la cantidad de vueltas: ";
    cin >> numeroVueltas;

    // muestro las vueltas
    for(int i = 1; i <= numeroVueltas; i++){
        cout << i << endl;
    }

    system("pause");
    return 0;
}
