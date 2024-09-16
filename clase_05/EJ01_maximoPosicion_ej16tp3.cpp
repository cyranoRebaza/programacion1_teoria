
/*
    EJERCICIO 00:
    dado un conjunto de numeros (5), calcular y mostrar
    - cual es el maximo y su posicion
    - el ultimo impar ingresado

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int numeroMaximo;
    int posicionMaximo;

    int ultimoImpar;
    bool bandera_impar = false;

    // pido los numeros usando un for --> se la cantidad de numeros a ingresar
    for(int i= 1; i <= 5;i++){

        //pido numero
        cout << "Ingrese numero: ";
        cin >> numero;


        //**********************************

        //tomo como maximo al primer numero ingresado --> usando iterador del for
        if(i == 1){
            numeroMaximo = numero; // no es necesario inicializar el numeroMaximo --> es el primero
            posicionMaximo = i;
        }
        else{
            //verifico los numeros ingresados son mayor al maximo almacenado
            if(numero > numeroMaximo){
                numeroMaximo = numero; // actualiza el numero maximo
                posicionMaximo = i;
            }
        }

        //*************************************

        // verifico hubo un numero es impar
        if(numero % 2 != 0){
            ultimoImpar = numero;
            bandera_impar = true;
        }
    }

    // muestro numero maximo y su posicion
    cout << "El numero maximo es: " << numeroMaximo << endl;
    cout << "Ingresado en la posicion : " << posicionMaximo << endl;


    //pregunto si hubo o no numeros impares
    if(bandera_impar == true){
        cout << "El ultimo impar ingresado es: " << ultimoImpar << endl;
    }
    else{
        cout << "No hubo valores impares ingresados" << endl;
    }



    system("pause");
    return 0;
}
