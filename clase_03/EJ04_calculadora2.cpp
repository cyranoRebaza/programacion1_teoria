
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
    float resultado;

    int opcion;

    // pido los numeros
    cout << "*** Ingrese los numeros para la operacion ***\n" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << "\nElija la opcion que desea realizar:\n" << endl;

    cout << "1 - suma" << endl;
    cout << "2 - resta" << endl;
    cout << "3 - producto" << endl;
    cout << "4 - division" << endl;

    cout << endl << "Ingrese la operacion que desea realizar: ";
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

        case 4:
            if(numero2 > 0){
                resultado = (float)numero1 / numero2;
            }
            else{
                cout << "No se puede dividir por cero " << endl;
            }
            break;

        default:
            cout << "El valor ingresado no es correcto " << endl;
            break;


    }

    cout << "\nEl resultado de la operacion es: " << resultado << endl;

    system("pause");
    return 0;
}
