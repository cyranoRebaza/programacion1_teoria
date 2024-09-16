/*
    EJERCICIO 00:


*/

#include <iostream>

using namespace std;

int main()
{

    int opcion;

    do
    {
        system("cls"); // limpia la consola

        cout << "MENU PRINCIPAL" << endl;
        cout << "-------------------" << endl;
        cout << "1- Opcion 1"<<endl;
        cout << "2- Opcion 2"<<endl;
        cout << "3- Opcion 3"<<endl;
        cout << "-------------------" << endl;
        cout << "0- Salir"<<endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
         case 1:
            cout << "Seleccionaste la opcion 1"<<endl;
            break;
         case 2:
            cout << "Seleccionaste la opcion 2"<<endl;
            break;
         case 3:
            cout << "Seleccionaste la opcion 3"<<endl;
            break;
         case 0:
            cout << "Gracias por utilzar mi aplicacion :)"<<endl;
            break;
         default:
            cout << "Opcion no valida..." << endl;
      }
      system("pause");
   }while(opcion != 0);



    return 0;
}
