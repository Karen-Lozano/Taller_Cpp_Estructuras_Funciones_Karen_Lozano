//"	EJERCICIO 33: struct + array
//Enunciado:
//Cree un programa en C++ que utilice una estructura Cliente con los campos nombre y edad. 
//Almacene los datos de tres clientes en un arreglo y muestre únicamente los clientes que sean mayores de edad (edad mayor o igual a 18).
#include <iostream>
using namespace std;

struct Cliente {
    string nombre;
    int edad;
};

int main() {
    Cliente clientes[3];

    for (int i = 0; i < 3; i++) {
        cout << "Nombre del cliente " << i+1 << ": ";
        cin >> clientes[i].nombre;
        cout << "Edad del cliente " << i+1 << ": ";
        cin >> clientes[i].edad;
    }

    cout << "\n--- Clientes Mayores de Edad ---\n";
    for (int i = 0; i < 3; i++) {
        if (clientes[i].edad >= 18)
            cout << "Nombre: " << clientes[i].nombre << ", Edad: " << clientes[i].edad << endl;
    }

    return 0;
}
