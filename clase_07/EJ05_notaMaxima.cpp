
/*
    EJERCICIO 05:
    una escuela dispone de las notas de sus 10 alumnos, por cada nota se carga
    - legajo
    - nota

    se pide informar el alumno con la nota mas alta


*/

#include <iostream>

using namespace std;

int main(){

    // declaracion variables
    int legajo;
    int nota;
    string nombre;

    int notaMaxima = 0;
    int legajoMaximo;
    string nombreMaximo;

    for(int i = 1; i <= 10; i++){

        // pido legajo, nombre, nota
        cout << "Ingrese legajo: ";
        cin >> legajo;

        cout << "Ingrese nombre: ";
        cin >> nombre;

        cout << "Ingrese nota: ";
        cin >> nota;

        // busco la nota maxima
        if(nota > notaMaxima){
            notaMaxima = nota;
            legajoMaximo = legajo;
            nombreMaximo = nombre;
        }


    }// FIN FOR

    // muestro el alumno con la nota mas alta
    cout << "El alumno con la nota mas alta es: " << legajoMaximo << endl;
    cout << "El nombre es: " << nombreMaximo << endl;


    system("pause");
    return 0;
}
