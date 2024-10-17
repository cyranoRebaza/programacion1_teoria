
/*
    EJERCICIO O4:
    Una empresa registró las ventas que efectuó durante un día y para cada venta registró los siguientes datos:

    - Número de Artículo Vendido (1 a 3)
    - Cantidad de Unidades Vendidas
    - Importe de la Venta

    El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0.

    Se pide determinar e informar:

    a) La recaudación total para cada uno de los 3 artículos. Se informan 3 resultados al final.
    b) El número de artículo con mayor cantidad TOTAL de unidades vendidas. Se informa 1 resultado al final.

    ******************************
    RECAUDACION TOTAL: es la suma de todos los importes para un articulo determinado




*/

#include <iostream>

using namespace std;

int main(){

    // declaracion variables general
    int numeroArticulo;
    int cantidadVendida;
    float importeVenta;

    // PUNTO A)
    float recaudacionArticulo1;
    float recaudacionArticulo2;
    float recaudacionArticulo3;

    //INICILIZACION
    recaudacionArticulo1 = 0;
    recaudacionArticulo2 = 0;
    recaudacionArticulo3 = 0;

    // PUNTO B)
    float cantidadTotal1;
    float cantidadTotal2;
    float cantidadTotal3;

    int articuloMayor;


    // INICIALIZACION
    cantidadTotal1 = 0;
    cantidadTotal2 = 0;
    cantidadTotal3 = 0;


    // pido el numero articulo
    cout << "Ingrese numero articulo: ";
    cin >> numeroArticulo;

    while(numeroArticulo != 0){

        // pido los otros datos
        cout << "Ingrese la cantidad unidades: ";
        cin >> cantidadVendida;

        cout << "Ingrese importe de la venta: ";
        cin >> importeVenta;

        // PUNTO A)
        if(numeroArticulo == 1){
            recaudacionArticulo1 += importeVenta;
        }
        else if(numeroArticulo == 2){
            recaudacionArticulo2 += importeVenta;
        }
        else{
            recaudacionArticulo3 += importeVenta;
        }


        /*

        switch(numeroArticulo){

        case 1:
            recaudacionArticulo1 += importeVenta;
            break;

        case 2:
            recaudacionArticulo2 += importeVenta;
            break;

        case 3:
            recaudacionArticulo3 += importeVenta;
            break;


        }

        */

        // PUNTO B)

        switch(numeroArticulo){

        case 1:
            cantidadTotal1 += cantidadVendida;
            break;

        case 2:
            cantidadTotal2 += cantidadVendida;
            break;

        case 3:
            cantidadTotal3 += cantidadVendida;
            break;


        }




        // pido el numero articulo
        cout << "Ingrese numero articulo: ";
        cin >> numeroArticulo;

    }// FIN WHILE

    // PUNTO A)
    cout << "Recaudacion Articulo 1: " << recaudacionArticulo1 << endl;
    cout << "Recaudacion Articulo 2: " << recaudacionArticulo2 << endl;
    cout << "Recaudacion Articulo 3: " << recaudacionArticulo3 << endl;


    // PUNTO B)
    if(cantidadTotal1 > cantidadTotal2 > cantidadTotal3){
        articuloMayor = 1;
    }
    else if(cantidadTotal2 > cantidadTotal3){
        articuloMayor = 2;
    }
    else{
        articuloMayor = 3;
    }

    cout << "El articulo con mayor cantidad de ventas es: " << articuloMayor << endl;


    system("pause");
    return 0;
}
