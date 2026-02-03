//Ejercicio 26
//Desarrolle un programa que muestre un menú con las siguientes opciones:
//1.	Ingresar dos números
//2.	Mostrar la suma y la resta
//3.	Mostrar el mayor de los dos números
//4.	Salir
#include <iostream>
using namespace std;

int main() {
    int opcion;
    double num1 = 0, num2 = 0;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Ingresar dos numeros\n";
        cout << "2. Mostrar suma y resta\n";
        cout << "3. Mostrar el mayor de los dos numeros\n";
        cout << "4. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                break;
            case 2:
                cout << "Suma: " << num1 + num2 << endl;
                cout << "Resta: " << num1 - num2 << endl;
                break;
            case 3:
                if (num1 > num2) cout << "El mayor es: " << num1 << endl;
                else if (num2 > num1) cout << "El mayor es: " << num2 << endl;
                else cout << "Ambos numeros son iguales." << endl;
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
