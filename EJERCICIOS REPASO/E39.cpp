//"	EJERCICIO 39: funciones + paso por valor + vector
//Enunciado:
//Desarrolle un programa en C++ que utilice funciones con paso de parámetros por valor y un vector de números enteros. 
//El programa debe pasar el vector a las funciones para calcular la suma de los elementos, el promedio y determinar cuántos valores son pares e impares, 
//sin modificar el contenido original del vector.
#include <iostream>
#include <vector>
using namespace std;

int calcularSuma(vector<int> v) {
    int suma = 0;
    for (int i = 0; i < v.size(); i++) suma += v[i];
    return suma;
}

double calcularPromedio(vector<int> v) {
    return calcularSuma(v) / double(v.size());
}

void contarParesImpares(vector<int> v, int &pares, int &impares) {
    pares = impares = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) pares++;
        else impares++;
    }
}

int main() {
    vector<int> numeros = {2,5,6,7,8};
    int pares, impares;

    int suma = calcularSuma(numeros);
    double promedio = calcularPromedio(numeros);
    contarParesImpares(numeros, pares, impares);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Pares: " << pares << ", Impares: " << impares << endl;

    return 0;
}
