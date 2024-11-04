/*
    EJERCICIO O1:


*/

#include <iostream>

using namespace std;

// DECLARACION FUNCIONES
void queViajaDireccion(int v[]);
void queViajaValor(int var);




int main()
{



    // declaracion de vector
    const int TAM = 5;
    int vNum2[TAM] = {};
    int vNum3[7];

    // muestro direccion memoria donde comienza cada vector
    cout << "vNum2: " << vNum2 << endl;
    cout << "vNum3: " << vNum3 << endl;

    cout << "queViaja(vNum2): ";
    queViajaDireccion(vNum2);
    cout << "queViaja(vNum3): ";
    queViajaDireccion(vNum3);

    cout << "***************" << endl;

    // declaro un numero entero
    int numero;

    // muestro la direccion memoria donde comienza el numero
    cout << "numero: " << &numero << endl;

    cout << "queViaja(numero): ";
    queViajaValor(numero);










    system("pause");
    return 0;
}

// DEFINICION FUNCIONES
void queViajaDireccion(int v[]){
    cout << "direccion: " << v << endl;
}

void queViajaValor(int var){
    cout<<&var<<endl;
}
