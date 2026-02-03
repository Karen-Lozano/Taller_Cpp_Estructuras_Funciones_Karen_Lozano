//"	EJERCICIO 35: struct + vector + archivo + cálculos
//Enunciado:
//Desarrolle un programa en C++ que defina una estructura Cliente con los campos nombre, edad y consumoMensual. 
//El programa debe almacenar los datos en un vector, guardarlos en un archivo, leerlos posteriormente y calcular el consumo total, 
//el consumo promedio y el cliente con mayor consumo.

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Cliente {
    string nombre;
    int edad;
    double consumoMensual;
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
        cout << "Consumo mensual: ";
        cin >> c.consumoMensual;
        clientes.push_back(c);
    }

    // Guardar en archivo
    ofstream archivo("clientes.txt");
    for (int i = 0; i < clientes.size(); i++) {
        archivo << clientes[i].nombre << " " << clientes[i].edad << " " << clientes[i].consumoMensual << endl;
    }
    archivo.close();

    // Leer desde archivo
    vector<Cliente> clientesArchivo;
    ifstream archivoLeer("clientes.txt");
    string nombre;
    int edad;
    double consumo;
    while (archivoLeer >> nombre >> edad >> consumo) {
        Cliente c = {nombre, edad, consumo};
        clientesArchivo.push_back(c);
    }
    archivoLeer.close();

    // Calculos
    double totalConsumo = 0;
    double mayorConsumo = clientesArchivo[0].consumoMensual;
    string nombreMayor = clientesArchivo[0].nombre;

    for (int i = 0; i < clientesArchivo.size(); i++) {
        totalConsumo += clientesArchivo[i].consumoMensual;
        if (clientesArchivo[i].consumoMensual > mayorConsumo) {
            mayorConsumo = clientesArchivo[i].consumoMensual;
            nombreMayor = clientesArchivo[i].nombre;
        }
    }

    double promedioConsumo = totalConsumo / clientesArchivo.size();

    cout << "\nTotal de consumo: " << totalConsumo << endl;
    cout << "Promedio de consumo: " << promedioConsumo << endl;
    cout << "Cliente con mayor consumo: " << nombreMayor << " (" << mayorConsumo << ")" << endl;

    return 0;
}
