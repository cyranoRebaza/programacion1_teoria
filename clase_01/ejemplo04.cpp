#include<iostream>

using namespace std;

int main(){

    // declaro las variables
    int n1, n2;
    float division;

    // ingreso de datos
    cout << "PROGRAMA PARA CALCULAR LA DIVISION:" << endl << endl;

    cout << "Ingrese el primer numero : ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    // calculo la division
    division = (float)n1 / n2; // casteo

    //impresion en pantalla del resultado
    cout << endl << "La division es: " << division << endl << endl;


    system("pause");
    return 0;
}
