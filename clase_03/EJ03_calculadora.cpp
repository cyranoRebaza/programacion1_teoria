
/*
    EJERCICIO 00:
    Dados dos números que se ingresan en variables separadas,

    Calcular:
        - si se ingresa una 'S' la suma
        - si se ingresa una 'R' la resta
        - so se ingresa una 'P' el producto

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero1;
    int numero2;
    int resultado;

    char opcion;

    // pido los numeros
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;


    cout << endl << "Ingrese la operacion que desea realizar:" << endl;

    cout << "S - suma" << endl;
    cout << "R - resta" << endl;
    cout << "P - producto" << endl;

    cout << endl;
    cin >> opcion;

    // proceso
    switch(opcion){
        case 'S':
        case 's':
            resultado = numero1 + numero2;
            break;

        case 'R':
        case 'r':
            if(numero1 > numero2){
                resultado = numero1 - numero2;
            }
            else{
                resultado = numero2 - numero1;
            }

            break;

        case 'P':
        case 'p':
            resultado = numero1 * numero2;
            break;

        default:
            cout << "El valor ingresado no es correcto " << endl;
            break;


    }

    cout << "El resultado de la operacion es: " << resultado << endl;

    system("pause");
    return 0;
}
