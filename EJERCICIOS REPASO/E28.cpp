//Ejercicio 28
//Desarrolle un programa que muestre un menú con las siguientes opciones:
//1.	Ingresar 10 números en un arreglo
//2.	Mostrar el promedio
//3.	Mostrar el mayor y el menor
//4.	Contar números positivos y negativos
//5.	Salir

#include <iostream>
using namespace std;

int main() {
    int opcion;
    int numeros[10];
    bool ingresado = false;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Ingresar 10 numeros en un arreglo\n";
        cout << "2. Mostrar el promedio\n";
        cout << "3. Mostrar el mayor y el menor\n";
        cout << "4. Contar numeros positivos y negativos\n";
        cout << "5. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                for (int i = 0; i < 10; i++) {
                    cout << "Ingrese el numero " << i + 1 << ": ";
                    cin >> numeros[i];
                }
                ingresado = true;
                break;
            case 2:
                if (!ingresado) cout << "Primero ingrese los numeros." << endl;
                else {
                    double suma = 0;
                    for (int i = 0; i < 10; i++) suma += numeros[i];
                    cout << "Promedio: " << suma / 10 << endl;
                }
                break;
            case 3:
                if (!ingresado) cout << "Primero ingrese los numeros." << endl;
                else {
                    int maximo = numeros[0], minimo = numeros[0];
                    for (int i = 1; i < 10; i++) {
                        if (numeros[i] > maximo) maximo = numeros[i];
                        if (numeros[i] < minimo) minimo = numeros[i];
                    }
                    cout << "Mayor: " << maximo << ", Menor: " << minimo << endl;
                }
                break;
            case 4:
                if (!ingresado) cout << "Primero ingrese los numeros." << endl;
                else {
                    int positivos = 0, negativos = 0;
                    for (int i = 0; i < 10; i++) {
                        if (numeros[i] > 0) positivos++;
                        else if (numeros[i] < 0) negativos++;
                    }
                    cout << "Positivos: " << positivos << ", Negativos: " << negativos << endl;
                }
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while(opcion != 5);

    return 0;
}
