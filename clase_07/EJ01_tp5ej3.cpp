
/*
    EJERCICIO TP5-EJ03:
        Hacer un programa para ingresar una lista de números que finaliza cuando se
        ingresa un cero y luego informar el porcentaje de números primos y el porcentaje de números no primos.
        Se informan 2 resultados al final.

        ****************************************
        DATOS DE ENTRADA
            -lista de numeros --> termina ingreso con un cero

        ESTRUCTURA GENERAL PROGRAMA
            - Tengo una lista numeros, necesito un ciclo
            -como no se la cantidad --> uso un ciclo inexacto

        CALCULOS NUMERO PRIMO
            - calculo numero primo
            - contar cuantos primos hay en la lista --> cantidadPrimos
            - contar la cantidad de numeros en total de la lista --> cantidadTotal

            - calculo no primo
            - contar cuantos no primos

        CALCULOS PORCENTAJE
            -porcentaje = parcial / total * 100




*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    float porcentajePrimos;
    float porcentajeNoPrimos;

    int divisor;

    int cantidadPrimos = 0;
    int cantidadTotal = 0;

    int cantidadNoPrimos = 0;

    //pido numero
    cout << "Ingrese numero: ";
    cin >> numero;

    while(numero != 0){

        divisor = 0;

        //veo si el numero es primo
        for(int i = 1; i <= numero; i++){
            if(numero % i == 0)
                divisor++;
        }
        if(divisor == 2){
            cantidadPrimos++;
        }
        else{
            cantidadNoPrimos++;
        }

        //cuento numero ingresado
        cantidadTotal++;





         //pido numero
        cout << "Ingrese numero: ";
        cin >> numero;

    }

    // calculo porcentaje numeros primos
    porcentajePrimos = cantidadPrimos * 100.0f / cantidadTotal;

    // calculo porcentaje numeros no primos
    porcentajeNoPrimos = cantidadNoPrimos * 100.0f / cantidadTotal;

    // muestro porcentaje de numero primos y no primos
    cout << "El porcentaje de numero primos es: " << porcentajePrimos << " %" << endl;
    cout << "El porcentaje de numero no primos es: " << porcentajeNoPrimos << " %" << endl;


    system("pause");
    return 0;
}
