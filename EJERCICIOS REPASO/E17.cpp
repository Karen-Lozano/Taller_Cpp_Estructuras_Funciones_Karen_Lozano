//Ejercicio 17
//Elabore un programa con vectores que permita ingresar 8 valores y calcule:
//"	El valor máximo
//"	El valor mínimo
//"	El rango (máximo ? mínimo)
#include <iostream>
using namespace std;

int main() {
    int valores[8];
    int maximo, minimo;

    for (int i = 0; i < 8; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valores[i];
    }

    maximo = minimo = valores[0];

    for (int i = 1; i < 8; i++) {
        if (valores[i] > maximo) maximo = valores[i];
        if (valores[i] < minimo) minimo = valores[i];
    }

    cout << "Valor maximo: " << maximo << endl;
    cout << "Valor minimo: " << minimo << endl;
    cout << "Rango: " << maximo - minimo << endl;

    return 0;
}
