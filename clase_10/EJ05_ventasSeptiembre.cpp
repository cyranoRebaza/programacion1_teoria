/*
    EJERCICIO O1:


*/

#include <iostream>

using namespace std;

// DECLARACION FUNCIONES
void mostrarVector(float v[], int tam);





int main()
{



    // declaracion de variables y vector
    int dia;
    float importe;
    float vDias[30] = {};

    // pido importe de cada dia

    cout << "Ingrese el dia: ";
    cin >> dia;

    while(dia != 0){

        cout << "Importe: ";
        cin >> importe;

        vDias[dia-1] += importe;

        cout << "Ingrese el dia: ";
        cin >> dia;
    }

    // llamo a funcion mostrarVector()
    mostrarVector(vDias, 30);





    system("pause");
    return 0;
}

// DEFINICION FUNCIONES
void mostrarVector(float v[], int tam){

    for(int i = 0; i < tam; i++){
        cout << "dia " << i+1 << "recaudacion " << v[i] << endl;
    }

}
