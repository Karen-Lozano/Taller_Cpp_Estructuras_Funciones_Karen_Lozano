//Ejercicio 15
//Elabore un programa que permita ingresar 15 números en un arreglo y calcule:
//"	El promedio de los números positivos
//"	El promedio de los números negativos
#include <iostream>
using namespace std;

int main() {
    double numeros[15];
    double sumaPos = 0, sumaNeg = 0;
    int countPos = 0, countNeg = 0;

    for (int i = 0; i < 15; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] > 0) {
            sumaPos += numeros[i];
            countPos++;
        } else if (numeros[i] < 0) {
            sumaNeg += numeros[i];
            countNeg++;
        }
    }

    if (countPos > 0)
        cout << "Promedio de positivos: " << sumaPos / countPos << endl;
    else
        cout << "No hay numeros positivos." << endl;

    if (countNeg > 0)
        cout << "Promedio de negativos: " << sumaNeg / countNeg << endl;
    else
        cout << "No hay numeros negativos." << endl;

    return 0;
}
