//Ejercicio 2 
//Desarrolle un programa que solicite un número entero
// y determine si el número NO se encuentra en el rango
// de 10 a 50, mostrando un mensaje de advertencia cuando 
//esté fuera del rango permitido.

#include <iostream>

using namespace std; 
int main(){

   int numero;
   cout<<"Ingrese un numero entero:";
   cin>>numero;
   
   if(numero<10 || numero>50){
   cout<<"El numero no se encuentra en el rango de 10 a 50."<<endl;
   }
   else{
   cout<<"El numero pertenece al rango de 10 a 50."<<endl;
   }
   
   return 0; 
}
