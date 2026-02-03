//Ejercicio 1
//Elabore un programa en C++ que solicite un número entero e 
//indique si el número pertenece al rango de 10 a 50, 
//mostrando un mensaje cuando el valor sea válido y
//otro cuando no lo sea.
#include <iostream>
using namespace std;

int main(){
   int numero;
   cout<<"Ingrese un numero entero:";
   cin>>numero;
   if(numero>=10 && numero<=50){
   cout<<"El numero pertenece al rango de 10 a 50"<<endl;
   }
   else{
   cout<<"El numero no pertenece al rango"<<endl;
   }
   
   return 0;
}
