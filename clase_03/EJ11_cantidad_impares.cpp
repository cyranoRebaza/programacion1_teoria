
/*
    EJERCICIO 00:
    hacer un programa que pida 10 numero y
      muestre cuantos de ellos son impares

    **************************************
    CONTADOR:
        1- se inicializa en un valor, generalmente en cero
        2- se realiza con una operacion

            cont = cont + 1 ---> es universal
            cont = cont - 1 ---> es universal

            cont += 1
            cont -= 1

            cont++  //posincremento --> primero usa la variable luego incrementa
            cont--

            ++cont  //preincremento --> primero incrementa la variable luego lo suma
            --cont

        3- generalmente dependen de una condicion

    **************************************
    ACUMULADOR:
        1- se inicializa en un valor, generalmente en cero
        2- se realiza con una operacion,se suma una cantidad variable

            acu = acu + N ---> es universal
            acu = acu - N ---> es universal

            cont += N
            cont -= N



        3- generalmente dependen de una condicion

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;

    int cantidadImpar = 0;

    // cargo los datos (utlizo un for) este seria la ESTRUCTURA PRINCIPAL
    for(int i = 1; i <= 10; i++){

        cout << "Ingrese numero: "; //pido los  numeros (con el for pedire 10 veces el numero)
        cin >> numero;

        // verifico si dicho numero es impar
        if(numero % 2 != 0){
            //cuento los que cumplan la condicion
            cantidadImpar++;
        }
    }


    // muestro la cantidad
    cout << "\nLa cantidad de impares son: " << cantidadImpar << endl;

    system("pause");
    return 0;
}
