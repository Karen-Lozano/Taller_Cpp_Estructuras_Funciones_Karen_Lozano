//Ejercicio 11
//Desarrolle un programa que permita ingresar 10 números en un arreglo y calcule:
//"	La suma total de los valores
//"	El promedio
//"	El porcentaje de números positivos
//"	El porcentaje de números negativos
#include <iostream>
using namespace std;
int main(){
	
	float numeros[10];
	float suma=0;
	float positivos=0, negativos=0;
	
	cout<<"Ingrese 10 numeros: "<<endl;
	for(int i=0;i<10;i++){
		cout<<i+1<<":";
		cin>>numeros[i];
		suma+=numeros[i];
	
	  if(numeros[i]>0){
		positivos++;
	  }
	  else if(numeros[i]<0){
	  	negativos++;
	  }
	}
	cout<<"La suma total de los valores es: "<<suma<<endl;
	cout<<"El promedio es: "<<suma/10<<endl;
	cout<<"Porcentaje positivos: "<<(positivos/10)*100<<endl;
	cout<<"Porcentaje negativos: "<<(negativos/10)*100<<endl;
	
	return 0;
}
