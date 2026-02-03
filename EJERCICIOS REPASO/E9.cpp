//Ejercicio 10 
//Elabore un programa que muestre los números del 1 al 100 y calcule la suma de los números pares 
//y la suma de los números impares, indicando al final cuál suma es mayor.


#include <iostream>
using namespace std;

int main(){
	int pares=0, impares=0;
	for(int i=1;i<=100;i++){
		if(i%2==0){
			pares+=i;
		}
		else{
			impares+=i;
		}
	}
	
	if(pares>impares){
		cout<<"La suma mayor es de los numeros pares con: "<<pares<<endl;
	}
	else if(pares<impares){
		cout<<"La suma mayor es de los numeros impares con: "<<impares<<endl;
	}
	else{
		cout<<"Ambas sumas son iguales."<<endl;
	}
	
	
	return 0;
}
