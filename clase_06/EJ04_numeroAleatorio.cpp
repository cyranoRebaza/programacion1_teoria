
/*
    EJERCICIO O1:

    srand():
    La funci�n srand() en C++ se utiliza para inicializar la semilla del generador de n�meros aleatorios.
    Esta funci�n forma parte de la biblioteca est�ndar <cstdlib>.
    Si no se establece una semilla con srand(),
    el generador de n�meros aleatorios usar� por defecto una semilla fija,
    lo que significa que el programa generar� la misma secuencia de n�meros aleatorios cada vez que se ejecute.

    *******************
    time(0) --> devuelve el tiempo actual en segundos desde el 1 de enero de 1970
                y esto se usa como semilla para que la secuencia de numeros aleatorios sea diferente

    rand() % 100 --> genera un  numero entre 0 y 99, para que este entre 1 y 100 le sumamos 1

*/

#include <iostream>
#include <ctime>

using namespace std;

int main(){

    cout << "************** CUALQUIER NUMERO **************" << endl;

    // Inicializamos la semilla usando el tiempo actual
    srand(time(0)); // una sola vez en el main

    // generar numeros aleatorios --> genero cinco numeros
    for(int i = 0; i < 5; i++){
        cout << rand() << endl;
    }

    cout << "************* NUMEROS ENTRE 1 Y 100 *********" << endl;

    // para generar y mostrar numeros aleatorios entre 1 y 100 (en este caso genera 5 numero)
    for (int i = 0; i < 5; i++) {

        int num = 1 + (rand() % 100) ;  // Genera n�meros entre 1 y 100
        cout << num << endl;
    }

    system("pause");
    return 0;
}


