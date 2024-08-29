
/*
    EJERCICIO 00:
    Ingrese la posicion en una competencia de atletismo y muestre por pantalla
    el tipo de medalla que se obtiene por dicha posicion

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int posicion;  // variable a evaluar

    string medalla;

    // pido la posicion
    cout << "Ingresar la posicion en la competencia: ";
    cin >> posicion;

    switch(posicion){
        case 1:
            medalla = "ORO";
            break;

        case 2:
            medalla = "PLATA";
            break;

        case 3:
            medalla = "BRONCE";
            break;


    }

    // muestro la posicion
    cout << "La medalla obtenida es: " << medalla << endl;

    system("pause");
    return 0;
}
