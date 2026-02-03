//Ejercicio 25
//Desarrolle un programa que permita ingresar 10 notas finales y calcule:
//"	El promedio general
//"	La nota más alta y la más baja
//"	El porcentaje de aprobados y reprobados
//"	Muestre un resumen final de resultados
#include <iostream>
using namespace std;

int main() {
    double notas[10];
    double suma = 0;
    double mayor, menor;
    int aprobados = 0, reprobados = 0;

    for (int i = 0; i < 10; i++) {
        do {
            cout << "Ingrese la nota " << i + 1 << " (0-10): ";
            cin >> notas[i];
        } while (notas[i] < 0 || notas[i] > 10);

        suma += notas[i];
    }

    mayor = menor = notas[0];

    for (int i = 0; i < 10; i++) {
        if (notas[i] >= 7) aprobados++;
        else reprobados++;

        if (notas[i] > mayor) mayor = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }

    double promedio = suma / 10;
    double porcAprob = aprobados * 10.0; // 10% por cada estudiante
    double porcReprob = reprobados * 10.0;

    cout << "\n--- RESUMEN FINAL ---" << endl;
    cout << "Promedio general: " << promedio << endl;
    cout << "Nota mayor: " << mayor << endl;
    cout << "Nota menor: " << menor << endl;
    cout << "Porcentaje de aprobados: " << porcAprob << "%" << endl;
    cout << "Porcentaje de reprobados: " << porcReprob << "%" << endl;

    return 0;
}

