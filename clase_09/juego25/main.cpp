
/*
    Hacer un juego donde tenga el siguiente menu:
    1- jugar
    2- estadistica
    0- salir

    JUGAR:
    El juego consiste en que cada jugador lanzara dados en una cantidad indefinidas de rondas.
    en cada ronda se lanzan 3 dados (6 caras) y de esos dados se obtendran el puntaje de la ronda

    y el puntaje de la ronda es obtenida a partin del numero de dado con mayor valor

    el puntaje total es la sumatoria de los puntajes obtenidos de cada ronda
    el juego finaliza cuando alguno de los jugadores llegan a 25
    el jugador debe podr jugar contra la CPU

    ESTADISTICA:
    muestra el ganador en la menor cnatidad de rondas y las rondas



*/

#include <iostream>

using namespace std;

#include "menu.h"
#include <ctime> // para la semilla




int main()
{
    int opcion;
    srand(time(0)); // semilla que la funcion rad() en juego.cpp sea aleatorio (dados)

    // variables pertenecen a todo el juego --> pasaremos por referencia --> juego lo modifica, estadistica lo muestra
    int estadisticasJugador = 0;
    int estadisticasRonda = 0;


    do
    {

        system("cls");

        // llamo a seleccionarOpcion() --> guardo el la variable opcion
        opcion = seleccionarOpcion();

        // llamo a ejecutarOpcion() y le paso como arguemto opcion
        ejecutarOpcion(opcion, estadisticasJugador, estadisticasRonda);



        system("pause");
    }
    while(opcion != 0);
    return 0;
}


