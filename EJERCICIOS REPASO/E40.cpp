//"	EJERCICIO 40: funciones + paso por valor + array
//Enunciado:
//Cree un programa en C++ que utilice un arreglo de números enteros y funciones con paso por valor. 
//El programa debe enviar el arreglo a las funciones para calcular el valor mayor, el valor menor y la cantidad de números positivos, negativos y ceros, 
//sin alterar los datos originales.
#include <iostream>
using namespace std;

int calcularMayor(int arr[], int n) {
    int mayor = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mayor) mayor = arr[i];
    return mayor;
}

int calcularMenor(int arr[], int n) {
    int menor = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < menor) menor = arr[i];
    return menor;
}

void contarPosNegCeros(int arr[], int n, int &pos, int &neg, int &ceros) {
    pos = neg = ceros = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else ceros++;
    }
}

int main() {
    int arr[5] = {2,-3,0,5,-1};
    int pos, neg, ceros;

    int mayor = calcularMayor(arr,5);
    int menor = calcularMenor(arr,5);
    contarPosNegCeros(arr,5,pos,neg,ceros);

    cout << "Mayor: " << mayor << ", Menor: " << menor << endl;
    cout << "Positivos: " << pos << ", Negativos: " << neg << ", Ceros: " << ceros << endl;

    return 0;
}
