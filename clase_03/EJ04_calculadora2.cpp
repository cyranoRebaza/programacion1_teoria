
/*
    EJERCICIO 00:
    Dados dos números que se ingresan en variables separadas,

    Calcular:
        - si se ingresa una '1' la suma
        - si se ingresa una '2' la resta
        - si se ingresa una '3' el producto

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero1;
    int numero2;
    int resultado;

    int opcion;

    // pido los numeros
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;


    cout << endl << "Ingrese la operacion que desea realizar:" << endl;

    cout << "1 - suma" << endl;
    cout << "2 - resta" << endl;
    cout << "3 - producto" << endl;

    cout << endl;
    cin >> opcion;

    // proceso
    switch(opcion){
        case 1:
            resultado = numero1 + numero2;
            break;

        case 2:
            if(numero1 > numero2){
                resultado = numero1 - numero2;
            }
            else{
                resultado = numero2 - numero1;
            }

            break;

        case 3:
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
