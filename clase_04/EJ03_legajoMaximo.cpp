
/*
    EJERCICIO 00:
    Dado una lista de los legajos y las edades de los 35 alumnos de un curso,
    calcular e informar el legajo del alumno de mayor edad y la posicion ingresada

    *********************************
    - pido las edades y los legajos de cada uno de los alumnos
    - como son edades,puedo crear una variable maxima edad lo inicializo en cero
     y lo tomo como referencia guardo su legajo
     - la segunda edad lo comparo con el maximo anterior y actualizo
     - muestro el legajo maximo

     **********************************


*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    const int ALUMNOS = 3; // si funciona con 3 funciona con 35 alumnos
    int legajo;
    int edad;
    int edadMaxima = 0;
    int legajoMaximo;

    int posicion;

    // uso un for para ingresar la lista de alumnos
    for(int i = 1; i <= ALUMNOS; i++){

        //pido el legajo
        cout << "Ingrese legajo: ";
        cin >> legajo;

        // pido la edad
        cout << "Ingrese la edad: ";
        cin >> edad;

        // pregunto si la edad ingresada es maximo
        if(edad > edadMaxima){
            edadMaxima = edad;
            legajoMaximo = legajo;
            posicion = posicion + i; // posicion +=i
        }
    }

    // muestro el legajo del alumno de mayor edad
    cout << "El legajo del alumno con mayor  edad es: " << legajoMaximo << " en la posicion " << posicion;


    system("pause");
    return 0;
}
