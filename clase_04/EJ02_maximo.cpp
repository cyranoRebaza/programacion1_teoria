
/*
    EJERCICIO 00:
    dado una lista de numeros (5) calcular el mayor de ellos

    ****************************
    - pido los numeros con un for
    - tomo como maximo y  valor de comparacion al primer numero ingresado
    - comparo los siguientes numeros con el maximo anterior



*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int numeroMaximo;

    // uso un for para pedir los numeros
    for(int i = 1; i <= 5; i++){

        //pido el numero
        cout << "Ingrese numero: ";
        cin >> numero;

        //METODO 1:

        //guardo el primero numero como maximo
        if(i == 1){
            numeroMaximo = numero;
        }
        else{
            // comparo el maximo con los numero que ingresan
            if(numero > numeroMaximo){
                numeroMaximo = numero;
            }
        }

        /*

        //METODO2:
        if((i == 1)||(numero > numeroMaximo) ){
            numeroMaximo = numero;
        }

        */


    }

    // muestro el numero maximo
    cout << "El numero maximo es: " << numeroMaximo << endl;


    system("pause");
    return 0;
}
