
/*
    EJERCICIO 00:
    Hacer un programa que muestre los numeros pares entre el 1 y el 20


*/

#include <iostream>

using namespace std;

int main(){

    // METODO1: dar 20 vueltas y mostrara solo los que son multiplos de 2
    for(int i = 0; i <= 20; i++){
        //pregunto si es par
        if(i % 2 == 0){
            cout << i << endl;
        }
    }

//    // METODO2: dar 10 vueltas modifico la configuracion del for (reduce la cantidad de procesamiento)
//    for(int i = 2; i <= 20; i+=2){
//        //muestro la variable de control
//        cout << i << endl;
//    }

    system("pause");
    return 0;
}
