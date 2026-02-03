//EJERCICIO 32: struct + vector
//Enunciado:
//Desarrolle un programa en C++ que defina una estructura Cliente con los campos nombre y edad. 
//El programa debe permitir ingresar varios clientes usando un vector y luego mostrar en pantalla la información de todos los clientes registrados.
#include <iostream>
#include <vector>
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

    cout << "\n--- Clientes Registrados ---\n";
    for (int i = 0; i < clientes.size(); i++) {
        cout << "Nombre: " << clientes[i].nombre << ", Edad: " << clientes[i].edad << endl;
    }

    return 0;
}
