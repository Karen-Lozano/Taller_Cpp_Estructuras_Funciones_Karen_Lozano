//Ejercicio 19
//Utilizando vectores, elabore un programa que permita ingresar 10 edades y calcule:
//"	El promedio de edades
//"	Cuántas edades son mayores al promedio
//"	Cuántas edades son menores o iguales al promedio
#include <iostream>
using namespace std;

int main() {
    int edades[10];
    double suma = 0;
    int mayores = 0, menoresIgual = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la edad " << i + 1 << ": ";
        cin >> edades[i];
        suma += edades[i];
    }

    double promedio = suma / 10;

    for (int i = 0; i < 10; i++) {
        if (edades[i] > promedio) mayores++;
        else menoresIgual++;
    }

    cout << "Promedio de edades: " << promedio << endl;
    cout << "Cantidad de edades mayores al promedio: " << mayores << endl;
    cout << "Cantidad de edades menores o iguales al promedio: " << menoresIgual << endl;

    return 0;
}
