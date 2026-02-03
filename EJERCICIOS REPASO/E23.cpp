//Ejercicio 23
//Elabore un programa que permita ingresar 10 precios y calcule:
//"	El subtotal
//"	El IVA (12 %)
//"	El total a pagar
#include <iostream>
using namespace std;

int main() {
    double precios[10];
    double subtotal = 0, iva, total;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el precio " << i + 1 << ": ";
        cin >> precios[i];
        subtotal += precios[i];
    }

    iva = subtotal * 0.12;
    total = subtotal + iva;

    cout << "Subtotal: " << subtotal << endl;
    cout << "IVA (12%): " << iva << endl;
    cout << "Total a pagar: " << total << endl;

    return 0;
}
