
/*
    EJEMPLO 05:
    Dados dos numeros enteros distintos que se ingresan por teclado, mostrar por pantalla el mayor

*/

#include<iostream>

using namespace std;

int main(){

    // Declaro las variables
    int n1;
    int n2;
    int mayor;

    // Ingreso los datos
    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    if( n1 > n2 ){
        mayor = n1;
    }
    else{
        mayor = n2;
    }

    // muestro en pantalla el numero mayor
    cout << endl << "El numero mayor es: " << mayor << endl;

    system("pause");
    return 0;
}
