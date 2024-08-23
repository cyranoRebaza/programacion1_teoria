
/*
    EJERCICIO 11:
    Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.

    Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
    Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.


    ******************************************
    ETAPA1: IDENTIFICAR O ENTENDER EL PROBLEMA
    ******************************************

    -pide que reciba los minutos totales y muestre los dias, horas y minutos que equivalen

    ******************************************
    ETAPA1: ANALISIS DE LOS DATOS
    ******************************************
    DATOS DE ENTRADA: Es un dato requerido para la solucion de mi problema, que no conozco y tampoco la puedo calcular,
                      entonces se lo tengo que pedir al usuario

                      -minutos totales

    DATOS DE SALIDA: el motivo de programa

                     - dias
                     -horas
                     -minutos

    OPERACIONES:

                -dias = horas_totales / 24   (2)

                -horas_totales = mintuos_totales /60 (1)

                -horas = horas_totales % 24     (3)

                -minutos = minutos_totales % 60 (4)

    ******************************************
    ETAPA3: ESTRATEGIA
    ******************************************
    - pedir los minutos totales

    -calcular dias, horas, minutos

    -calcular las horas totales
    -calcular las horas
    -calcular los dias
    calcular los minutos

    mostrar los dias,horas y minutos



*/

#include <iostream>

using namespace std;

int main(){

    // declaracion de variables (camelCase -- variables y funciones)
    int minutosTotales;
    int dias;
    int horas;
    int minutos;
    int horasTotales;

    // pedir los minutos totales
    cout << "Ingrese los minutos totales: ";
    cin >> minutosTotales;


    // calcular las horas totales
    horasTotales = minutosTotales /60;

    // calcular las horas
    horas = horasTotales / 24;

    // calcular los dias
    dias = horasTotales / 24;

    // calcular los minutos
    minutos = minutosTotales % 60;

    // mostrar los dias,horas y minutos
    cout << "dias: " << dias << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;


    system("pause");
    return 0;
}
