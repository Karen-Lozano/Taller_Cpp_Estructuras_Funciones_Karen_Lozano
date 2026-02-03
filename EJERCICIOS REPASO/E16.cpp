//Ejercicio 16
//Utilizando vectores, desarrolle un programa que permita ingresar 10 números y determine:
//"	La suma total
//"	El promedio
//"	Cuántos números están por encima del promedio
#include <iostream>
using namespace std;

int main() {
    double numeros[10];
    double suma = 0, promedio;
    int countArriba = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    promedio = suma / 10;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] > promedio) countArriba++;
    }

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Cantidad de numeros por encima del promedio: " << countArriba << endl;

    return 0;
}
