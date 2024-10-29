
/*
    EJERCICIO O1:
    Hacer una función que reciba un entero que represente el valor de un año
    y un string por referencia y devuelva true o false si el año es o no bisiesto.
    En la variable string debe escribir BISIESTO o NO BISIESTO según el caso

*/

#include <iostream>

using namespace std;

// DECLARACION FUNCION
bool esbisiesto(int anio, string &respuesta);

int main(){

    // declaro la varibles
    int anio;
    string palabra = "";

    // pido el anio
    cout << "Ingrese el anio: ";
    cin >> anio;

    // llamo a la funcion esBisiesto() --> argumento palabra esta por referencia
    esbisiesto(anio, palabra);

    // muestro el valor de palabra
    cout << "el anio ingresado: " << palabra << endl;


    system("pause");
    return 0;
}

// DEFINICION FUNCION
bool esbisiesto(int anio, string &respuesta){

    if((anio % 4 == 0) && (anio % 100 != 0 || anio % 400 == 0)){
        respuesta = "bisiesto";
        return true;
    }
    respuesta = "No bisiesto";
    return false;


}
