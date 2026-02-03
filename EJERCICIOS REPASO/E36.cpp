//"	EJERCICIO 36: struct + archivo + búsqueda y cálculos
//Enunciado:
//Cree un programa en C++ que utilice una estructura Estudiante con los campos nombre, nota1, nota2 y nota3. 
//El programa debe guardar los datos en un archivo, leerlos, calcular el promedio de cada estudiante y 
//permitir buscar un estudiante por nombre para mostrar sus notas, su promedio y si aprueba o reprueba (promedio mayor o igual a 7).
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Estudiante {
    string nombre;
    double nota1, nota2, nota3;
};

int main() {
    vector<Estudiante> estudiantes;
    int n;
    cout << "Cuantos estudiantes desea ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Estudiante e;
        cout << "Nombre del estudiante " << i+1 << ": ";
        cin >> e.nombre;
        cout << "Nota 1: "; cin >> e.nota1;
        cout << "Nota 2: "; cin >> e.nota2;
        cout << "Nota 3: "; cin >> e.nota3;
        estudiantes.push_back(e);
    }

    // Guardar en archivo
    ofstream archivo("estudiantes.txt");
    for (int i = 0; i < estudiantes.size(); i++) {
        archivo << estudiantes[i].nombre << " " << estudiantes[i].nota1 << " " 
                << estudiantes[i].nota2 << " " << estudiantes[i].nota3 << endl;
    }
    archivo.close();

    // Leer desde archivo
    vector<Estudiante> lista;
    ifstream archivoLeer("estudiantes.txt");
    string nombre;
    double n1, n2, n3;
    while (archivoLeer >> nombre >> n1 >> n2 >> n3) {
        Estudiante e = {nombre, n1, n2, n3};
        lista.push_back(e);
    }
    archivoLeer.close();

    // Buscar estudiante
    string buscar;
    cout << "Ingrese el nombre del estudiante a buscar: ";
    cin >> buscar;

    bool encontrado = false;
    for (int i = 0; i < lista.size(); i++) {
        if (lista[i].nombre == buscar) {
            double promedio = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3) / 3.0;
            cout << "Notas: " << lista[i].nota1 << ", " << lista[i].nota2 << ", " << lista[i].nota3 << endl;
            cout << "Promedio: " << promedio << endl;
            if (promedio >= 7) cout << "Estado: Aprobado" << endl;
            else cout << "Estado: Reprobado" << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) cout << "Estudiante no encontrado." << endl;

    return 0;
}
