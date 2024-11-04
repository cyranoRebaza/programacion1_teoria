/*
    EJERCICIO O1:


*/

#include <iostream>

using namespace std;

// DECLARACION FUNCIONES
void cargarVector(int v[], int tam);
void mostrarVector(int vNum2[], int tam);
int sumarVector(int vNum2[], int tam);



int main()
{



    // declaracion de un vector sin valores iniciales
    const int TAM = 5;
    int vNum2[TAM] = {};



    // cargo el vector
    cargarVector(vNum2, TAM);


    // sumo los elementos del vector
    int suma2 = sumarVector(vNum2, TAM);


    // mostrar vector
    mostrarVector(vNum2, TAM);


    cout << endl << endl << "la suma de los elementos de vector vNum2 es: " << suma2 << endl << endl;


    system("pause");
    return 0;
}

// DEFINICION FUNCIONES
void cargarVector(int vNum2[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << "valor: ";
        cin >> vNum2[i];
    }

}

void mostrarVector(int vNum2[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << vNum2[i] << "\t";
    }

}

int sumarVector(int vNum2[], int tam)
{
    int suma2 = 0;

    for(int i = 0; i < tam; i++)
    {
        suma2 += vNum2[i];
    }

    return suma2;

}
