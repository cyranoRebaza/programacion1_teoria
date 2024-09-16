/*
    EJERCICIO 00:
    dado una lista de numero(5) mostrar el primer y segundo maximo

    *************************
    -  pido numeros
    - busco el primero maximo en la primera vuelta
    - busco el segundo maximo en la segunda vuelta y actualizo el primer maximo


*/

#include <iostream>

using namespace std;

int main()
{

    // declaro las variables
    int numero;
    int primerMaximo;
    int segundoMaximo;

    // pido los numero usando un for
    for(int i = 1; i <= 5; i++)
    {

        // pido el numero
        cout << "Ingrese numero: ";
        cin >> numero;

        //tomo como maximo el primer numero ingresado
        if(i == 1) // primera vuelta --> guarda el primer  maximo
        {
            primerMaximo = numero;
        }
        else
        {

            if(i== 2) // segunda vuelta --> buscamos el actualizar el primer maximo y buscar el segundo maximo
            {

                //verifico si el nuevo numero es mayor que el primer maximo
                if(numero > primerMaximo)
                {
                    segundoMaximo = primerMaximo; //guardo el maximo anterior como segundo maximo
                    primerMaximo = numero; // actualizo el primer maximo

                }
                else
                {
                    segundoMaximo = numero;
                }


            }
            else
            {
                //verifico si el nuevo numero es mayor que el primer maximo
                if(numero > primerMaximo)
                {

                    segundoMaximo = primerMaximo; //guardo el maximo anterior como segundo maximo
                    primerMaximo = numero; // actualizo el primer maximo
                }
                else
                {
                    if(numero > segundoMaximo)
                    {
                        segundoMaximo = numero;
                    }

                }
            }

        }


    }

    // muestro el primer y segundo maximo
    cout << "Primer maximo: " << primerMaximo << endl;
    cout << "Segundo maximo: " << segundoMaximo << endl;

    system("pause");
    return 0;
}
