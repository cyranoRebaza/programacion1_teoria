
/*
    EJERCICIO O3:
    dadas las edades de los alumnos de los  cursos de TUP, calcular e informar la edad maxima de cada uno de ellos

    nota: no se sabe la cantidad de curso. se ingresa primero el numero de curso, y luego las edades de cada uno de los 25 integrantes
          del curso.
          para indicar el fin de los cursos se ingresa un valor de curso igual a cero

    *****************************
    DATOS ENTRADA
        - un numero que indica el curso y a continuacion un conjunto de 25 valores de edad
        - se repite una cantidad indeterminada de veces, hasta que el valor del curso sea cero

    DATOS SALIDA
        - 1 valor de edad maxima, para cada curso --> no se sabe cuantos


*/

#include <iostream>

using namespace std;

int main(){

    // declaracion de variables
    int edad;
    int edadMaxima;

    int curso;

    // WHILE EXTERNO: INGRESAN VARIOS CURSOS --> HASTA CURSO SEA CERO
    // pido el curso
    cout << "curso: ";
    cin >> curso;

    while(curso != 0){


        //***************************************************************
        //inicializo la edad maxima
        edadMaxima = 0;

        // FOR INTERNO: CADA CURSO --> 25 ALUMNOS
        for(int j = 1; j<= 25; j++){

            // pido la edad
            cout << "Ingrese la edad: ";
            cin >> edad;

            // establesco una edad maxima de comparacion --> edadMaxima = 0 (para cada curso)
            if(edad > edadMaxima){
                edadMaxima = edad;
            }


        }

        // muestro la edad maxima para cada curso
        cout << "La edad maxima es: " << edadMaxima << endl;

        //****************************************************************



        // pido el curso
        cout << "curso: ";
        cin >> curso;
    }


    system("pause");
    return 0;
}
