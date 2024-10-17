/*
    EJERCICIO 00: adivinar un numero

     MENU

      1- Jugar (Adivina un numero)
      2- Puntaje mas Alto ( El que menos intentos tuvo )
      3- Creditos
      0- Salir


      *********************
      repito (game loop)

      - borro pantalla
      - muestro menu
      - ejecuto accion
      - pausa



      **********************
      NOTA: Al declarar variables dentro de un case en un switch debemos generar un ambito local usando llaves {}


*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    // declaro las variables
    int opcion;
    int intentosMinimo = 0;




    // CREAR EL MENU
    do
    {


        // muestro el menu
        system("cls"); // borra la consola --> cada vez que elija una opcion refresca la pantalla
        cout << "\n**********************" << endl;
        cout << "**** MENU PRINCIPAL ****" << endl;
        cout << "************************" << endl;

        cout << "1- Jugar" << endl;
        cout << "2- Estadistica" << endl;
        cout << "3- Creditos" << endl;
        cout << "0- Salit" << endl;
        cout << "\n***********************\n" << endl;

        cout << "opcion: ";
        cin >> opcion;

        // EJECUTAR LAS OPCIONES
        switch(opcion)
        {
        case 1:
        {
            /// TODO: Pedir el nombre
            system("cls"); // entra al case y borra la pantalla

            //la pc piensa un numero
            int numeroPensadoPC =10; //1 + rand()% 100; //usar la libreria <ctime>
            int numeroPensadoUsuario;

            int intentos = 0;

            //pedir un numero al usuario hasta que lo adivine (do while)

            do
            {
                intentos++; // por cada numero cuento los intentos

                cout << "****************" << endl;
                cout << "Intento # " << intentos << endl;
                cout << "piense eh ingrese un numero: ";
                cin >> numeroPensadoUsuario;

                // pistas al usuario a partir del intento 3
                if(intentos >= 3)
                {

                    if(numeroPensadoUsuario > numeroPensadoPC)
                    {
                        cout << "El numero pensado es mas chico " << endl;
                    }
                    else if(numeroPensadoUsuario < numeroPensadoPC)
                    {
                        cout << "El numero pensado es mas Grande " << endl;
                    }

                }




            }
            while(numeroPensadoUsuario != numeroPensadoPC);


            cout << endl << "FELICIDADES!!!..Adivinaste el numero en el intento # "<< intentos << endl;

            //algoritmo de busqueda del minimo;
            if(intentosMinimo == 0 || intentos < intentosMinimo)
            {
                intentosMinimo = intentos;
            }





            break;
        }
        case 2:
            /// TODO: Muestre el numero que adivino
            system("cls");
            if(intentosMinimo > 0)
            {
                cout << "El menor intento hasta ahora es: # "<< intentosMinimo << endl;
            }
            else
            {
                cout << "Aun no se ha jugado..." << endl;
            }
            break;
        case 3:

            system("cls");
            cout << "NUMBER BLACK" << endl;
            cout << "Es un juego donde debes ser mas listo que la pc" << endl;
            cout << "\n**********************" << endl;
            cout << "**  TEAM DARK  **" << endl;
            cout << "************************" << endl << endl;
            break;

        case 0:
            cout <<  "Gracias por jugar!!! " << endl;
            break;




        }

        // para mostrar un mensaje antes de salir del while
        cout << "Presione cualquier tecla para continuar...";

        system("pause>nul"); // espera una pausa pero no informara por pantalla
    }
    while(opcion != 0);




    return 0;
}
