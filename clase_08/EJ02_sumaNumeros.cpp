
/*
    EJERCICIO O1:
    crear una funcion que reciba tres numeros enteros, luego calcular la suma
    y devolver el resultado de la operacion


*/

#include <iostream>

using namespace std;

    // DECLARO LA FUNCION
    int Sumar(int n1, int n2, int n3);




int main(){

    // declaro variables
    int n1;
    int n2;
    int n3;

    // pido numero
    cout << "Ingrese numero: ";
    cin >> n1;

    cout << "Ingrese numero: ";
    cin >> n2;

     cout << "Ingrese numero: ";
    cin >> n3;

    // llamo a la funcion sumar(); y lo que retorna lo guardo en la variable suma
    int suma = Sumar(n1, n2, n3);

    // muestro
    cout << "La suma de los numeros es: " << suma << endl;






    system("pause");
    return 0;
}

    // DESARROLLO DE LAS FUNCIONES
    int Sumar(int n1, int n2, int n3){

        int resultado = n1 + n2 + n3;

        return resultado;

    }
