//Ejercicio 24
//Desarrolle un programa que permita ingresar 10 sueldos y calcule:
//"	El sueldo promedio
//"	Cuántos sueldos están por encima del promedio
//"	Cuántos están por debajo del promedio
#include <iostream>
using namespace std;

int main() {
    double sueldos[10];
    double suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el sueldo " << i + 1 << ": ";
        cin >> sueldos[i];
        suma += sueldos[i];
    }

    double promedio = suma / 10;
    int arriba = 0, debajo = 0;

    for (int i = 0; i < 10; i++) {
        if (sueldos[i] > promedio) arriba++;
        else if (sueldos[i] < promedio) debajo++;
    }

    cout << "Sueldo promedio: " << promedio << endl;
    cout << "Cantidad de sueldos arriba del promedio: " << arriba << endl;
    cout << "Cantidad de sueldos debajo del promedio: " << debajo << endl;

    return 0;
}
