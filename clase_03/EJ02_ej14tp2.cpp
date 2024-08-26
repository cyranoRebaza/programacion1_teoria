
/*
    EJERCICIO 14-guia2:
    Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
    ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual
    ingresando día, mes y año como 3 datos individuales.
    Calcular luego la edad en años de esa persona y listar por pantalla.


    Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019
    la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.

    Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019
    la edad de esa persona es 19.

    Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019
    la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.

    *******************
    DATOS DE ENTRADA:
        -fecha de nacimiento (3 variables)
            diNacimiento, mesNacimiento, anioNacimiento

        -fecha actual
            diaActual, mesActual, anioActual

    DATOS SALIDA
        -la edad de la persona en años (entero)

    PROCESO
        -edad = anioActual - anioNacimiento


*/

#include <iostream>

using namespace std;

int main(){

    // declaracion de varibles
    int anioNacimiento;
    int mesNacimiento;
    int diaNacimiento;

    int anioActual;
    int mesActual;
    int diaActual;

    int edad;


    // pido los datos
    cout << "Ingrese la fecha nacimiento: " << endl << endl;

    cout << "dia nacimiento: ";
    cin >>diaNacimiento;

    cout << "mes nacimiento: ";
    cin >> mesNacimiento;

    cout << "anio nacimiento: ";
    cin >> anioNacimiento;

    cout << endl;
    cout << "Ingrese la fecha actual: " << endl << endl;

    cout << "dia actual: ";
    cin >>diaActual;

    cout << "mes actual: ";
    cin >> mesActual;

    cout << "anio actual: ";
    cin >> anioActual;


    // calculamos la edad
     edad = anioActual - anioNacimiento;

     if(mesActual < mesNacimiento){
        edad = edad -1;
     }
     else {
        if(mesActual == mesNacimiento){
            if(diaActual < diaNacimiento)
                edad = edad - 1;
        }
     }

     // calculamos la edad - usando concatenadores
     if((mesActual < mesNacimiento) || (mesActual == mesNacimiento && diaActual < diaNacimiento)){
        edad = edad - 1; // edad -= 1  edad --
     }



     // mostramos edad
     cout << endl;
     cout << "la edad es: " << edad <<endl << endl;

     if(mesActual == mesNacimiento && diaActual == diaNacimiento){
        cout << "FELICIDADES....ESTAS CUMPLIENDO ANIOS..!" << endl;
     }


    system("pause");
    return 0;
}
