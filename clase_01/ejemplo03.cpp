#include<iostream>

using namespace std;

int main(){

    // declaro las variables
    int n1, n2, multiplicacion;

    // ingreso de datos
    cout << "PROGRAMA PARA CALCULAR LA MULTIPLICACION:" << endl << endl;

    cout << "Ingrese el primer numero : ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    // calculo la multiplicacion
    multiplicacion = n1 * n2;

    //impresion en pantalla del resultado
    cout << endl << "La multiplicacion es: " << multiplicacion << endl << endl;


    system("pause");
    return 0;
}
