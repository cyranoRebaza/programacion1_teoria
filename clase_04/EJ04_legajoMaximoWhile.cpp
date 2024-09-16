/*
    EJERCICIO O0:
    Dada una lista de los legajos y las edades de los alumnos de un curso, calcular e informar
    el legajo del alumno de mayor edad

    nota: para indicar el fin del ingreso de datos se puso un valor de legajo igual a cero

*/

#include <iostream>

using namespace std;

int main()
{

    // declaro las variables
    int legajo;
    int edad;
    int edadMaxima = 0;
    int legajoMaximo;

    //pido el legajo
    cout << "Ingrese legajo: ";
    cin >> legajo;

    //uso un while para ingresar una determinada cantidad de alumnos, corto con legajo igual a cero
    while(legajo != 0)
    {


        // pido la edad
        cout << "Ingrese la edad: ";
        cin >> edad;

        // pregunto si la edad ingresada es maximo
        if(edad > edadMaxima)
        {
            edadMaxima = edad;
            legajoMaximo = legajo;
        }


        //pido el legajo nuevamente
        cout << "Ingrese legajo: ";
        cin >> legajo;

    }

    // muestro el legajo del alumno de mayor edad
    cout << "El legajo del alumno con mayor  edad es: " << legajoMaximo << endl;


    system("pause");
    return 0;

}
