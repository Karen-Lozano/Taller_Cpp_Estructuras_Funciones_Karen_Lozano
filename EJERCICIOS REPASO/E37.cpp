//"	EJERCICIO 37: funciones + paso por referencia + vector
//Enunciado:
//Desarrolle un programa en C++ que utilice funciones con paso de parámetros por referencia y un vector de números enteros. 
//El programa debe incluir funciones para llenar el vector y para calcular la suma, el promedio, el valor mayor y el valor menor de los elementos almacenados.
#include <iostream>
#include <vector>
using namespace std;

// Funcion para llenar el vector
void llenarVector(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> v[i];
    }
}

// Funcion para calcular suma y promedio
void calcularSumaPromedio(const vector<int> &v, int &suma, double &promedio) {
    suma = 0;
    for (int i = 0; i < v.size(); i++) suma += v[i];
    promedio = suma / double(v.size());
}

// Funcion para calcular mayor y menor
void calcularMayorMenor(const vector<int> &v, int &mayor, int &menor) {
    mayor = menor = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > mayor) mayor = v[i];
        if (v[i] < menor) menor = v[i];
    }
}

int main() {
    vector<int> numeros(5); // Cambiar tamaño si se desea
    int suma, mayor, menor;
    double promedio;

    llenarVector(numeros);
    calcularSumaPromedio(numeros, suma, promedio);
    calcularMayorMenor(numeros, mayor, menor);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor: " << mayor << ", Menor: " << menor << endl;

    return 0;
}
