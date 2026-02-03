//Ejercicio 20
//Desarrolle un programa con vectores que permita ingresar 10 números y calcule:
//"	El cuadrado de cada número
//"	La suma de los cuadrados
//"	El promedio de los cuadrados
#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int sumaCuadrados = 0;

    cout << "Ingrese 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        sumaCuadrados += numeros[i] * numeros[i];
    }

    cout << "Cuadrados de cada numero:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << "^2 = " << numeros[i] * numeros[i] << endl;
    }

    cout << "Suma de los cuadrados: " << sumaCuadrados << endl;
    cout << "Promedio de los cuadrados: " << sumaCuadrados / 10.0 << endl;

    return 0;
}
