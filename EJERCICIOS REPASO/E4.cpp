//Ejercicio 4
//Realice un programa que muestre los números pares del 2 al 20 
//utilizando un ciclo for y muestre también la suma de dichos números.
#include <iostream>
using namespace std;

int main (){
  int suma=0;
  cout<<"NUMEROS PARES 2-20)"<<endl;
  for(int i=2; i<=20; i+=2){
  cout<<i<<endl;
  suma+=i;
  }
  cout<<"La suma de estos numeros es:"<<suma;
return 0;
}
