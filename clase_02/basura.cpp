
/*
    EJERCICIO O1:

    - HARD CODE: codigo duro
    - EXPRESION: es cualquier cosa del cual se puede obtener un valor

                5: expresion constante que equivale a cinco
                numero: expresion numerica que equivale a cinco

                exiten: EXPRESIONES NUMERICAS, LOGICAS, FUNCIONALES

    -CONCEPTO DE BASURA: cuando declaramos una variable se establece un espacio de memoria, y puede que el espacio de memoria tenga algun valor,
                        creo la variable y no inicializo y la muestro mostrara el valor que tiene en ese momento el espacio de memoria

*/

#include <iostream>

using namespace std;

int main(){

    int resultado;
    int numero;

    int numero2;
    int resultado2;

    cout << "**************************" << endl;
    numero = 5; // expresion

    resultado = numero + 10; // 5 + 10 -- se resuelve la expresion numerica  y se almacena la operacion en resultado

    numero = 10;

    cout << resultado << endl; // muestra el valor de 15

    cout << "**************************" << endl;
    resultado2 = numero2 + 10; // valor + 10
    numero2 = 5;

    numero2 = 10;

    cout << resultado2 << endl; // depende del valor de numero2




    system("pause");
    return 0;
}
