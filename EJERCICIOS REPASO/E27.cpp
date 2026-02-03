//Ejercicio 27
//Elabore un programa que muestre un menú con las siguientes opciones:
//1.	Ingresar un número
//2.	Verificar si el número está en el rango de 1 a 100
//3.	Verificar si el número es par o impar
//4.	Salir
#include <iostream>
using namespace std;

int main() {
    int opcion;
    int numero = 0;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Ingresar un numero\n";
        cout << "2. Verificar si el numero esta en el rango 1-100\n";
        cout << "3. Verificar si el numero es par o impar\n";
        cout << "4. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese el numero: ";
                cin >> numero;
                break;
            case 2:
                if (numero >= 1 && numero <= 100)
                    cout << "El numero esta en el rango 1-100." << endl;
                else
                    cout << "El numero esta fuera del rango." << endl;
                break;
            case 3:
                if (numero % 2 == 0) cout << "El numero es par." << endl;
                else cout << "El numero es impar." << endl;
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while(opcion != 4);

    return 0;
}
