
/*
    EJERCICIO 00:
    Hacer un programa que muestre los numero del 1 al 10 y del 10 al 1

    INCREMENTO
        for(int i = masChico; i <= masGrande; i++){

        }
    DECREMENTO
        for(int i = masGrande; i >= masChicoe; i++){

        }

*/

#include <iostream>

using namespace std;

int main(){

    cout << "mostrar los numeros del 1 al 10: " << endl;

    // INCREMENTO
    for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    cout << "mostrar los numeros del 10 al 1: " << endl;

    // DECREMENTO
    for(int j = 10; j >= 1; j--){
        cout << j << endl;
    }

    system("pause");
    return 0;
}
