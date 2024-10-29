
/*
    EJERCICIO O1:
    // crear una funcion que muestre si un anio es bisiesto

*/

#include <iostream>

using namespace std;

// DECLARACION FUNCION
int esbisiesto(int anio);

int main(){

    // declaro la varibles
    int anio;

    // pido el anio
    cout << "Ingrese el anio: ";
    cin >> anio;

    // llamo a la funcion esBisiesto() --> lo guardo en una variable bisiesto
    int bisiesto = esbisiesto(anio);

    // pregunto
    if(bisiesto == 1){
        cout << "El anio ingresado es bisiesto " << endl;
    }
    else{
        cout << "El anio ingresado no es bisisesto " << endl;
    }


    system("pause");
    return 0;
}

// DEFINICION FUNCION
int esbisiesto(int anio){
    //busco los anios que no son divisibles por 4
    if(anio % 4 != 0){
        // el anio no es es bisiesto
        return 0;
    }

    // los que son divisibles por 100 (no bisiesto) --> excepto divisibles por 400
    if(anio % 100 == 0){
        // excepto
        if(anio % 400 == 0){
            return 1;
        }

        return  0;
    }

    return 1;
}
