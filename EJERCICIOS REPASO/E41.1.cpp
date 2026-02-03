//El programa 41.1   CALIFICACIONES DE UN ESTUDIANTE
//Enunciado:
//Desarrolle un programa en C++ que permita gestionar las calificaciones de un estudiante.

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void ingresarCalificaciones(vector<double> &calificaciones) {
    for (int i = 0; i < calificaciones.size(); i++) {
        cout << "Ingrese calificacion " << i+1 << ": ";
        cin >> calificaciones[i];
    }
}

void guardarArchivo(const vector<double> &calificaciones, string nombreArchivo) {
    ofstream archivo(nombreArchivo);
    for (int i = 0; i < calificaciones.size(); i++)
        archivo << calificaciones[i] << endl;
    archivo.close();
}

vector<double> leerArchivo(string nombreArchivo) {
    vector<double> calificaciones;
    ifstream archivo(nombreArchivo);
    double nota;
    while (archivo >> nota) calificaciones.push_back(nota);
    archivo.close();
    return calificaciones;
}

void calcularTotalPromedio(const vector<double> &calificaciones, double &total, double &promedio) {
    total = 0;
    for (double nota : calificaciones) total += nota;
    promedio = total / calificaciones.size();
}

int contarArribaDebajo(const vector<double> &calificaciones, double promedio, bool arriba) {
    int count = 0;
    for (double nota : calificaciones) {
        if (arriba && nota > promedio) count++;
        else if (!arriba && nota < promedio) count++;
    }
    return count;
}

int main() {
    const int N = 5;
    vector<double> calificaciones(N);
    ingresarCalificaciones(calificaciones);
    guardarArchivo(calificaciones,"calificaciones.txt");
    vector<double> calArchivo = leerArchivo("calificaciones.txt");

    double total, promedio;
    calcularTotalPromedio(calArchivo,total,promedio);
    int arriba = contarArribaDebajo(calArchivo,promedio,true);
    int debajo = contarArribaDebajo(calArchivo,promedio,false);

    cout << "Total de calificaciones: " << total << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Cantidad arriba del promedio: " << arriba << endl;
    cout << "Cantidad debajo del promedio: " << debajo << endl;

    return 0;
}
