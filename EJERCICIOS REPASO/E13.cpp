//Ejercicio 13
//Desarrolle un programa que permita ingresar 12 números en un arreglo y calcule:
//"	La suma de los números pares
//"	La suma de los números impares
//"	Cuál suma es mayor (pares o impares)


#include <iostream>
using namespace std;

int main() {
    int numeros[12];
    int sumaPares = 0, sumaImpares = 0;

    for (int i = 0; i < 12; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] % 2 == 0)
            sumaPares += numeros[i];
        else
            sumaImpares += numeros[i];
    }

    cout << "Suma de numeros pares: " << sumaPares << endl;
    cout << "Suma de numeros impares: " << sumaImpares << endl;

    if (sumaPares > sumaImpares)
        cout << "La suma de pares es mayor." << endl;
    else if (sumaImpares > sumaPares)
        cout << "La suma de impares es mayor." << endl;
    else
        cout << "Las sumas son iguales." << endl;

    return 0;
}
