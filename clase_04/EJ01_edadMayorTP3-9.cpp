
/*
    EJERCICIO 00:
    Dada una lista de edades(5) de los alumnos de un curso, mostrar la edad mayor

    **************************
    - todos los valores(edades) son positivos --> puedo inicializar el edad maxima en cero

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int edad;
    int edadMaxima = 0;

    // ingreso las edades usando un for
    for(int i = 1; i <= 5; i++){

        //pido las edades
        cout << "Ingrese edad: ";
        cin >> edad;

        if(edad > edadMaxima){
            edadMaxima = edad;
        }
    }

    // muestro la edad maxima
    cout << "La edad maxima es: " << edadMaxima << endl;

    system("pause");
    return 0;
}
