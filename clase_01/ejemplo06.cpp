/*
    EJEMPLO 06:
        Dados dos numeros enteros que se ingresan por teclado, decir si son iguales o no

*/

#include<iostream>

using namespace std;

int main(){

    // Declaro las variables
    int n1;
    int n2;


    // Ingreso los datos
    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << endl;

    if( n1 == n2 ){
        cout << "son iguales";
    }
    else{
        cout << "son distintos";
    }


    cout << endl;
    system("pause");
    return 0;
}
