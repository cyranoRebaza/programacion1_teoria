
/*
    EJERCICIO O1:
    // crear una funcion que muestre si un anio es bisiesto

    - creamos funcion tipo bool

*/

#include <iostream>

using namespace std;

// DECLARACION FUNCION
bool esbisiesto(int anio);

int main(){

    // declaro la varibles
    int anio;

    // pido el anio
    cout << "Ingrese el anio: ";
    cin >> anio;

    // llamo a la funcion esBisiesto() --> directamente pregunto por su valor
    if(esbisiesto(anio)){
        cout << "El anio ingresado es bisiesto " << endl;
    }
    else{
        cout << "El anio ingresado no es bisisesto " << endl;
    }


    system("pause");
    return 0;
}

// DEFINICION FUNCION
bool esbisiesto(int anio){
    bool valor = ((anio % 4 == 0) && (anio % 100 != 0 || anio % 400 == 0));
    return valor;


}
