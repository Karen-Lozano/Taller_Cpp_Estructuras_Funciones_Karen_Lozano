//"	EJERCICIO 38: funciones + paso por referencia + array
//Enunciado:
//Cree un programa en C++ que utilice un arreglo de números reales y funciones con paso por referencia. 
//El programa debe llenar el arreglo mediante una función y calcular el total de ventas, el promedio de ventas y cuántas ventas son mayores al promedio.
#include <iostream>
using namespace std;

void llenarArreglo(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la venta " << i+1 << ": ";
        cin >> arr[i];
    }
}

void calcularTotalPromedio(const double arr[], int n, double &total, double &promedio) {
    total = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    promedio = total / n;
}

int contarMayorPromedio(const double arr[], int n, double promedio) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > promedio) count++;
    }
    return count;
}

int main() {
    const int N = 5; // Cambiar tamaño si se desea
    double ventas[N];
    double total, promedio;

    llenarArreglo(ventas, N);
    calcularTotalPromedio(ventas, N, total, promedio);
    int mayores = contarMayorPromedio(ventas, N, promedio);

    cout << "Total de ventas: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Ventas mayores al promedio: " << mayores << endl;

    return 0;
}
