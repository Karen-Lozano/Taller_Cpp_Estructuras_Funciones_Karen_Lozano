//Ejercicio 29
//Elabore un programa que permita ingresar una matriz 3x3 y determine:
//"	La suma de cada fila
//"	La suma total de la matriz
#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int sumaTotal = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese el valor de fila " << i+1 << " columna " << j+1 << ": ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        int sumaFila = 0;
        for (int j = 0; j < 3; j++) sumaFila += matriz[i][j];
        cout << "Suma de fila " << i+1 << ": " << sumaFila << endl;
        sumaTotal += sumaFila;
    }

    cout << "Suma total de la matriz: " << sumaTotal << endl;

    return 0;
}
