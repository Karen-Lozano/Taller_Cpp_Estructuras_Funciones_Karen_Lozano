//Ejercicio 14
//Realice un programa que permita ingresar 10 calificaciones (0-10) en un arreglo y determine:
//"	El promedio general
//"	Cuántos estudiantes aprobaron (? 7)
//"	Cuántos reprobaron (< 7)


#include <iostream>
using namespace std;

int main() {
    double calificaciones[10];
    double suma = 0;
    int aprobados = 0, reprobados = 0;

    for (int i = 0; i < 10; i++) {
        do {
            cout << "Ingrese la calificaciOn " << i + 1 << " (0-10): ";
            cin >> calificaciones[i];
        } while (calificaciones[i] < 0 || calificaciones[i] > 10);

        suma += calificaciones[i];
        if (calificaciones[i] >= 7) aprobados++;
        else reprobados++;
    }

    cout << "Promedio general: " << suma / 10 << endl;
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: " << reprobados << endl;

    return 0;
}
