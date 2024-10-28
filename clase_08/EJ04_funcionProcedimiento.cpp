/*
    EJERCICIO O1:

    EXPRESIONES --> devuelven informacion
        - 2+5 --> expresion numerica entera
        - a>b --> expresion logica
        - "HOLA" --> expresion texto

    SENTENCIA --> no devuelven nada
        - for, if , etc.

    nota: la funcion puede ser o no una expresion --> depende si devuelve un valor o no

    ****************************************
    CONCEPTO DE PARAMETRO Y ARGUMENTO

    DECLARO UNA FUNCION
        int nombre_funcion(tipo param1, tipo param2, tipo3 param3){

            cuerpo

            return 0;  --> return significa volver al lugar de donde fue llamado

        }

        LLAMA A LA FUNCION
        nombre_funcion(argumento)


*/

#include <iostream>

using namespace std;



// DECLARACIONES O PROTOTIPOS (funciones o procedimientos)

// procedimientos
void mostrar();
void saludar(string nombre, int tipo);

// funciones
int pedirNumeroPositivo();
int pedirNumeroRango(int minimo, int maximo);


int main()
{

    // llamo a procedimientos
    cout << "******PROCEDIMIENTO - NO VUELVE NADA Y NO TIENE ARGUMENTOS *******" << endl;
    mostrar();
    cout << "******PROCEDIMIENTO - NO VUELVE NADA, TIENE ARGUMENTOS *******" << endl;
    saludar("Pepe", 1);
    saludar("Juan", 2);
    saludar("Eli", 3);

    // llamo a las funciones (al llamar una funcion el valor que vuelve debemos guardarlo en una variable)
    cout << "******FUNCION - VUELVE VALOR, NO TIENE ARGUMENTOS *******" << endl;
    int valor = pedirNumeroPositivo();
    cout << " el valor devuelto es: " << valor << endl;

    cout << "******FUNCION - VUELVE VALOR, TIENE ARGUMENTOS *******" << endl;
    int rango = pedirNumeroRango(10, 30);
    cout << " el rango devuelto es: " << rango << endl;


    system("pause");
    return 0;
}

// DEFINICIONES O IMPLEMENTACIONES  DE PROCEDIMIENTOS
void mostrar()
{
    cout << "Hola mundo" << endl;
    return;
}

void saludar(string nombre, int tipo)
{
    switch(tipo)
    {
    case 1:
        cout << "hola " << nombre << endl;
        break;

    case 2:
        cout << "hello " << nombre << endl;
        break;

    default:
        cout << "que hace " << nombre << endl;
        break;

    }
    return;

}


// DEFINICIONES O IMPLEMENTACIONES DE FUNCIONES
int pedirNumeroPositivo()
{
    int numero;

    do
    {
        cout << "Ingrese numero: ";
        cin >> numero;

        if(numero < 0)
        {
            cout << "el numero debe ser positivo " << endl;
        }
    }
    while(numero <= 0);


    return numero;

}


int pedirNumeroRango(int minimo, int maximo)
{
    int numero;

    do
    {
        cout << "Ingrese numero: ";
        cin >> numero;

        if(numero < minimo || numero > maximo)
        {
            cout << "El numero debe estar entre el " << minimo << "y el " << maximo << endl;
        }
    }
    while(numero < minimo || numero > maximo);


    return numero;

}
