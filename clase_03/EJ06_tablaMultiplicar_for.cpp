
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

    ***********************************
    INSTRUCCION FOR
        - SINTAXIS
            for(inicializacion; condicion;incremento){

            }
            - inicializacion:especifica la inicializacion del blucle

            - condicion:se evalua antes de cada iteracion
                -si es true se ejecuta el codigo y a continuacion se evalua incremento
                -si es false el ciclo termina

            - incremento: se evalua despues de cada iteracion

            ****************************************************************

            for(int i=0; i <= 10; i++)  ---> da 10 repeticiones
            for(int i=11; i <= 20; i++)  ---> da 10 repeticiones

                i es la variable de control (suele usar j k l ...)


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

    // mostrar la tabla
    for(int i=1; i <= 10; i++){
        cout << numero << " x " << i << "  = " <<  numero * i << endl;
    }



    cout << endl;
    system("pause");
    return 0;
}
