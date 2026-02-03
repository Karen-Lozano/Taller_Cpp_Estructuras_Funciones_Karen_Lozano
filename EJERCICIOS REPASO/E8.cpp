//Ejercicio 8 
//Realice un programa que permita ingresar 10 números y determine cuántos son positivos, 
//cuántos son negativos y cuántos son iguales a cero.

#include <iostream>
using namespace std;

int main(){
	
	int numeros[10];
	int positivo=0, negativos=0, ceros=0;
	
	for(int i=0;i<10;i++){
		cout<<"Ingrese el numero "<<i+1<<":";
		cin>>numeros[i];
		
		if(numeros[i]>0){
			positivo++;
		}
		else if(numeros[i]<0){
			negativos++;
		}
		else if(numeros[i]==0){
			ceros++;
		}
	}
	cout<<"Hay "<<positivo<<" numeros positivos."<<endl;
	cout<<"Hay "<<negativos<<" numeros negativos."<<endl;
	cout<<"Hay "<<ceros<<" numeros iguales a cero."<<endl;
	
	return 0;
}
