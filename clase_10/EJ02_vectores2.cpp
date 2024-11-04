
/*
    EJERCICIO O1:


*/

#include <iostream>

using namespace std;

int main(){

    // declaracion de un vector con valores iniciales
    int vNum[5] = {1, 2, 3, 4, 5};

    // sumo los elementos del vector
    int suma = vNum[0] + vNum[1] + vNum[2] + vNum[3] + vNum[4];



    // muestro elementos
    cout << vNum[0] << "\t";
    cout << vNum[1] << "\t";
    cout << vNum[2] << "\t";
    cout << vNum[3] << "\t";
    cout << vNum[4] << "\t" << endl << endl;




    cout << endl << endl << "la suma de los elementos de vector vNum es: " << suma << endl << endl;

    cout << endl << "*************************" << endl;

    // declaracion de un vector sin valores iniciales
    int vNum2[5] = {};

    int suma2 = 0;
    // pido elementos del vector
    for(int i = 0; i < 5; i++){
        cout << "valor: ";
        cin >> vNum2[i];
    }

    // sumo los elementos del vector
    for(int i = 0; i < 5; i++){
         suma2 += vNum2[i];
    }

    // muestro la suma
    for(int i = 0; i < 5; i++){
        cout << vNum2[i] << "\t";
    }

    cout << endl << endl << "la suma de los elementos de vector vNum2 es: " << suma2 << endl << endl;


    system("pause");
    return 0;
}
