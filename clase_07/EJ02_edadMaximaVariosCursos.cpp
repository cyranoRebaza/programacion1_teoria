
/*
    EJERCICIO O2:
    dadas las edades de los alumnos de 10 cursos, calcular e informar la edad maxima de cada uno de ellos

    nota: todos los cursos tienes 25 alumnos

    *****************************
    DATOS ENTRADA
        - 10 LOTES (1 para cada curso) de 25 valores de edad

    DATOS SALIDA
        - 10 valores de edad maxima, 1 para cada curso


*/

#include <iostream>

using namespace std;

int main(){

    // declaracion de variables
    int edad;
    int edadMaxima;

    // FOR EXTERNO: 10 CURSOS
    for(int i = 1; i <= 10; i++){

        cout << "*********************" << endl;
        cout << "curso: " << i << endl;

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
    }

    system("pause");
    return 0;
}
