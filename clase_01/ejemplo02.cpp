#include<iostream>

using namespace std;

int main(){

    // declaro las variables
    int n1, n2, resta;

    // ingreso de datos
    cout << "PROGRAMA PARA CALCULAR LA SUMA:" << endl << endl;

    cout << "Ingrese el primer numero : ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    // calculo la resta
    resta = n1 - n2;

    //impresion en pantalla del resultado
    cout << endl << "La resta es: " << resta << endl;


    system("pause");
    return 0;
}
