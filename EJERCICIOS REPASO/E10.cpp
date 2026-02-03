//Ejercicio 9 
//Desarrolle un programa que permita ingresar 15 números y determine cuántos valores 
//se encuentran dentro del rango de 20 a 80 y cuántos están fuera de ese rango.

#include <iostream>
using namespace std;

int main(){
	
	int numeros[15];
	int rango=0, noRango=0;
	cout<<"Ingrese 15 numeros: "<<endl;
	for(int i=0;i<15;i++){
		cout<<i+1<<":";
		cin>>numeros[i];
		
		if(numeros[i]>=20 && numeros[i]<=80){
			rango++;
		}
		else if(numeros[i]<20 || numeros[i]>80){
			noRango++;
		}
		
	}
	cout<<"Los numeros que pertenecen al rango son: "<<rango<<endl;
	cout<<"Los numeros que no pertenecen al rango son: "<<noRango<<endl;
	
	return 0;
}
