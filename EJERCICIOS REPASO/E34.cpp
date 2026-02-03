//"	EJERCICIO 34: struct + vector + archivo
//Enunciado:
//Realice un programa en C++ que use una estructura Cliente con los campos nombre y edad. 
//El programa debe almacenar los datos en un vector, guardarlos en un archivo de texto y permitir buscar un cliente por su nombre,
// mostrando su edad si se encuentra registrado.
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Cliente {
    string nombre;
    int edad;
};

int main() {
    vector<Cliente> clientes;
    int n;
    cout << "Cuantos clientes desea ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Cliente c;
        cout << "Nombre del cliente " << i+1 << ": ";
        cin >> c.nombre;
        cout << "Edad del cliente " << i+1 << ": ";
        cin >> c.edad;
        clientes.push_back(c);
    }

    // Guardar en archivo
    ofstream archivo("clientes.txt");
    for (int i = 0; i < clientes.size(); i++) {
        archivo << clientes[i].nombre << " " << clientes[i].edad << endl;
    }
    archivo.close();

    // Buscar cliente
    string buscar;
    cout << "Ingrese el nombre del cliente a buscar: ";
    cin >> buscar;

    ifstream archivoLeer("clientes.txt");
    string nombre;
    int edad;
    bool encontrado = false;

    while (archivoLeer >> nombre >> edad) {
        if (nombre == buscar) {
            cout << "Edad del cliente: " << edad << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) cout << "Cliente no encontrado." << endl;

    archivoLeer.close();
    return 0;
}
