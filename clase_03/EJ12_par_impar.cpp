
/*
    EJERCICIO 00:


*/

#include <iostream>

using namespace std;

int main(){

    // declarar las variables
    int numero;

    //pido el numero
    cout << "Ingrese el numero: ";
    cin >> numero;

    // pregunto si es impar
    // el resto es una division por eso contemplo si el numero que ingresa el usuario es negativo
    if( numero % 2 != 1 || numero % 2 != -1){
        cout << "Es impar" << endl;
    }
    else{
        cout << "Es par" << endl;
    }

//    // METODO 2: PREFERIBLE PREGUNTAR SI EL NUMERO ES DISTINTO DE CERO
//    if( numero % 2 != 0){
//        cout << "Es impar" << endl;
//    }
//    else{
//        cout << "Es par" << endl;
//    }

    system("pause");
    return 0;
}
