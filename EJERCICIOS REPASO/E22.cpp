//Ejercicio 22
//Desarrolle un programa que permita ingresar 15 valores en un vector y calcule:
//"	Cuántos valores son múltiplos de 3
//"	Cuántos valores son múltiplos de 5
//"	Cuántos valores son múltiplos de ambos
#include <iostream>
using namespace std;

int main() {
    int numeros[15];
    int mult3 = 0, mult5 = 0, multAmbos = 0;

    for (int i = 0; i < 15; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] % 3 == 0) mult3++;
        if (numeros[i] % 5 == 0) mult5++;
        if (numeros[i] % 3 == 0 && numeros[i] % 5 == 0) multAmbos++;
    }

    cout << "Multiplos de 3: " << mult3 << endl;
    cout << "Multiplos de 5: " << mult5 << endl;
    cout << "Multiplos de ambos: " << multAmbos << endl;

    return 0;
}
