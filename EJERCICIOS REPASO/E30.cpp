//Ejercicio 30
//Desarrolle un programa que permita ingresar una matriz 2x4 y determine:
//"	El número mayor
//"	La posición (fila y columna) del número mayor
#include <iostream>
using namespace std;

int main() {
    int matriz[2][4];
    int mayor, filaMayor, colMayor;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese el valor de fila " << i+1 << " columna " << j+1 << ": ";
            cin >> matriz[i][j];
        }
    }

    mayor = matriz[0][0];
    filaMayor = 0;
    colMayor = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                filaMayor = i;
                colMayor = j;
            }
        }
    }

    cout << "Numero mayor: " << mayor << " en fila " << filaMayor+1 << " columna " << colMayor+1 << endl;

    return 0;
}
