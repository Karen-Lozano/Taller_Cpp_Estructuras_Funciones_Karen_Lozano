//Ejercicio 31
//Realice un programa que permita ingresar una matriz 4x4 y cuente cuántos valores son:
//"	Positivos
//"	Negativos
//"	Iguales a cero
#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int positivos = 0, negativos = 0, ceros = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese el valor de fila " << i+1 << " columna " << j+1 << ": ";
            cin >> matriz[i][j];

            if (matriz[i][j] > 0) positivos++;
            else if (matriz[i][j] < 0) negativos++;
            else ceros++;
        }
    }

    cout << "Cantidad de positivos: " << positivos << endl;
    cout << "Cantidad de negativos: " << negativos << endl;
    cout << "Cantidad de ceros: " << ceros << endl;

    return 0;
}
