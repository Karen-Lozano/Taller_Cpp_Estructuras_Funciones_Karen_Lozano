//Ejercicio 18
//Desarrolle un programa que permita ingresar 12 valores en un vector y determine:
//"	La suma de los valores positivos
//"	La suma de los valores negativos
//"	El valor absoluto total acumulado
#include <iostream>
#include <cmath> // Para abs()
using namespace std;

int main() {
    int valores[12];
    int sumaPos = 0, sumaNeg = 0, sumaAbs = 0;

    for (int i = 0; i < 12; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valores[i];

        if (valores[i] > 0) sumaPos += valores[i];
        else if (valores[i] < 0) sumaNeg += valores[i];

        sumaAbs += abs(valores[i]);
    }

    cout << "Suma de positivos: " << sumaPos << endl;
    cout << "Suma de negativos: " << sumaNeg << endl;
    cout << "Suma del valor absoluto total: " << sumaAbs << endl;

    return 0;
}
