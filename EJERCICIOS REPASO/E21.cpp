//Ejercicio 21
//Elabore un programa que permita ingresar 10 números en un arreglo y determine:
//"	Cuántos están en el rango de 20 a 80
//"	Cuántos están fuera de ese rango
//"	El porcentaje de cada grupo

#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int dentro = 0, fuera = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] >= 20 && numeros[i] <= 80) dentro++;
        else fuera++;
    }

    cout << "Cantidad dentro del rango 20-80: " << dentro << endl;
    cout << "Cantidad fuera del rango: " << fuera << endl;
    cout << "Porcentaje dentro del rango: " << (dentro * 100.0 / 10) << "%" << endl;
    cout << "Porcentaje fuera del rango: " << (fuera * 100.0 / 10) << "%" << endl;

    return 0;
}
