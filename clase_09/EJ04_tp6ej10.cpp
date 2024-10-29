
/*
    EJERCICIO 00:
    Hacer una funcion que reciba un codigo de naipe (del 1 al 40) y determine el numero y el palo de la baraja
    española de 40 cartas (sin los 8,9 y comodines del mazo). la funcion debe recbir por referencia el numero
    de naipe y el nombre del palo (para ser completada por la funcion) y por valor el codigo de naipe.

    tener en cuenta:
    - los codigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del 21 al 30 y oro del 31 al 40.
    - ejemplo naipe con id #10 es el 12 de espadas


*/

#include <iostream>

using namespace std;

// DECLARACION FUNCION
bool seleccionarNaipe(int codigo, int &numero, string &palo);

int main(){

    // declaro la varibles
    int codigoNaipe;
    int numeroNaipe;
    string paloNaipe;

    // pido codigo
    cout << "ingrese codigo: ";
    cin >> codigoNaipe;

    // llamo la funcion
    seleccionarNaipe(codigoNaipe, numeroNaipe, paloNaipe);

    // muestro
    cout << "carta que corresponde "  << numeroNaipe << " " << paloNaipe << endl;


    system("pause");
    return 0;
}

// DEFINICION FUNCION
bool seleccionarNaipe(int codigo, int &numero,string &palo){
    if(codigo < 1 || codigo > 40){
        return false;
    }

    if(codigo < 11){
        palo = "espada";
    }
    else if(codigo < 21){
        palo = "basto";
    }
    else if(codigo < 31){
        palo = "copa";
    }
    else{
        palo = "oro";
    }

    int resto = codigo % 10;
    if(resto == 0){
        numero = 12;
    }
    else{
        if(resto < 8 ){
            numero = resto;
        }
        else{
            numero = resto + 2;
        }
    }






    return true;
}
