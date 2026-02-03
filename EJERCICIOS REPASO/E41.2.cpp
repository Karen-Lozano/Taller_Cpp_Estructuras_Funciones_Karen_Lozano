//El programa 41.2:  VENTAS
//El programa debe desarrollarse en C++ y compilar correctamente.
//Se debe utilizar un vector<double> para ingresar y almacenar inicialmente los valores de las ventas.
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void ingresarVentas(vector<double> &ventas) {
    for (int i = 0; i < ventas.size(); i++) {
        cout << "Ingrese venta " << i+1 << ": ";
        cin >> ventas[i];
    }
}

void guardarArchivo(const vector<double> &ventas, string nombreArchivo) {
    ofstream archivo(nombreArchivo);
    for (double v : ventas) archivo << v << endl;
    archivo.close();
}

vector<double> leerArchivo(string nombreArchivo) {
    vector<double> ventas;
    ifstream archivo(nombreArchivo);
    double v;
    while (archivo >> v) ventas.push_back(v);
    archivo.close();
    return ventas;
}

void calcularTotalPromedio(const vector<double> &ventas, double &total, double &promedio) {
    total = 0;
    for (double v : ventas) total += v;
    promedio = total / ventas.size();
}

int contarArribaDebajo(const vector<double> &ventas, double promedio, bool arriba) {
    int count = 0;
    for (double v : ventas) {
        if (arriba && v > promedio) count++;
        else if (!arriba && v < promedio) count++;
    }
    return count;
}

int main() {
    const int N = 5;
    vector<double> ventas(N);
    ingresarVentas(ventas);
    guardarArchivo(ventas,"ventas.txt");
    vector<double> ventasArchivo = leerArchivo("ventas.txt");

    double total, promedio;
    calcularTotalPromedio(ventasArchivo,total,promedio);
    int arriba = contarArribaDebajo(ventasArchivo,promedio,true);
    int debajo = contarArribaDebajo(ventasArchivo,promedio,false);

    cout << "Total de ventas: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Cantidad de ventas mayores al promedio: " << arriba << endl;
    cout << "Cantidad de ventas menores al promedio: " << debajo << endl;

    return 0;
}
