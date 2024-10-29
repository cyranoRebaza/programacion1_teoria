
#include <iostream>
using namespace std;

#include "juego.h"

// DESAROLLO O IMPLEMENTACION DE FUNCIONES

int lanzarDado()
{
    return rand() % 6 +1; // genera numero aleatorio  entre 1 y 6
}

int obtenerPuntajeRonda(int dado1, int dado2, int dado3)
{

    int puntos;

    if(dado1 > dado2 && dado1 > dado3)
    {
        puntos = dado1;
    }
    else if(dado2 > dado3)
    {
        puntos = dado2;
    }
    else
    {
        puntos = dado3;
    }

    // TODO: si todos son iguales el puntaje de la ronda es cero

    return puntos;
}

int realizarTirada()
{
    int dado1;
    int dado2;
    int dado3;

    int puntajeRonda;

    // lanzamiento dados
    dado1 = lanzarDado();
    dado2 = lanzarDado();
    dado3 = lanzarDado();

    // muestro los puntajes de la ronda (3 dados)
    cout << dado1 << " " << dado2 << " " << dado3 << endl;

    cout << "***********************************" << endl;

    // busco puntaje de la ronda
    puntajeRonda = obtenerPuntajeRonda(dado1, dado2, dado3);
    cout << "puntaje ronda: " << puntajeRonda << endl;

    return puntajeRonda;

}

void jugar(int &estadisticasJugador, int &estadisticasRonda)
{

    int puntajeTotal1 = 0;
    int puntajeTotal2 = 0;

    int numeroRonda = 0;

    // vamos acumular los puntos hasta llegar a 25 puntos
    do
    {
        // calculo y muestro el numeo de ronda
        numeroRonda++;
        cout << "ronda #: " << numeroRonda << endl;



        // acumulo el puntaje de la ronda de cada jugador
        cout << "turno jugador #1:" << endl;
        puntajeTotal1 += realizarTirada();

        cout << "turno jugador #2:" << endl;
        puntajeTotal2 += realizarTirada();

    }
    while(puntajeTotal1 < 25 && puntajeTotal2 < 25);

    if(puntajeTotal1 >= 25)
    {

        estadisticasJugador = 1;
        cout << "el ganador es el jugador #1 en la ronda " << numeroRonda << endl;
    }

    if(puntajeTotal2 >= 25)
    {
        estadisticasJugador = 2;
        cout << "el ganador es el jugador #2 en la ronda " << numeroRonda << endl;
    }

    estadisticasRonda = numeroRonda;

    //TODO: Hacer que solo guarde cuando sea menor de las rondas






}

