
/*
    EJERCICIO 00:
    Ingresar un codigo de las tres primeras categorias de monotributo y muestre el valor mensual a
    abonar en el año 2024

    DATOS ENTRADA
        -categoria ==> las tres primeras ==> A, B, C

    DATOS SALIDA
        -importe


*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    char categoria;

    float importe;

    // ingrese la categoria
    cout << "categoria disponible:" << endl;

    cout << "A" << endl;
    cout << "B" << endl;
    cout << "C" << endl;

    cout << "Ingrese la categoria elegida: ";
    cin >> categoria;

    categoria = toupper(categoria); // convierte a mayuscula el caracter

    switch(categoria){
        case 'A':
            importe = 1223.39;
            break;

        case 'B':
            importe = 13569.75;
            break;

        case 'C':
            importe = 15831.51;
            break;


    }

    // muestro el importe
    cout << "El importe a abonar es: " << importe << endl;


    system("pause");
    return 0;
}
