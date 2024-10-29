
#include <iostream>
using namespace std;

#include "menu.h"
#include "juego.h"

// DESAROLLO O IMPLEMENTACION DE FUNCIONES
int seleccionarOpcion()
{

    int opcion;

    cout << "JUEGO 25" << endl;
    cout << "1- Jugar " << endl;
    cout << "2- Estadisticas " << endl;
    cout << "****************" << endl;
    cout << "0- Salir " << endl << endl;

    cout << "opcion: ";
    cin >> opcion;

    return opcion;

}

void mostrarEstadistica(int estadisticasJugador, int estadisticasRonda)
{

    //TODO: Solo se debe mostrar si ya se jugo aunque sea una vez

    cout << "Jugador con menos rondas: " << estadisticasJugador << endl;
    cout << "Cantidad  rondas: " << estadisticasRonda << endl;

}



void ejecutarOpcion(int opcion,int &estadisticasJugador, int &estadisticasRonda)
{
    switch(opcion)
    {
    case 1:
        jugar(estadisticasJugador, estadisticasRonda);
        break;

    case 2:
        mostrarEstadistica(estadisticasJugador, estadisticasRonda);
        break;

    case 0:
        cout << "gracias por jugar al 25 " << endl;

    }


}
