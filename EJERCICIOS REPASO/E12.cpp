//Ejercicio 12
//Elabore un programa que permita ingresar 8 números en un arreglo y determine:
//"	El número mayor
//"	El número menor
//"	La diferencia entre el mayor y el menor

#include <iostream>
using namespace std;

int main() {
    int numeros[8];
    int mayor, menor;

    // Ingreso de números
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    mayor = menor = numeros[0]; // Inicializar con el primer número

    // Buscar mayor y menor
    for (int i = 1; i < 8; i++) {
        if (numeros[i] > mayor) mayor = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }

    cout << "Numero mayor: " << mayor << endl;
    cout << "Numero menor: " << menor << endl;
    cout << "Diferencia entre mayor y menor: " << mayor - menor << endl;

    return 0;
}
