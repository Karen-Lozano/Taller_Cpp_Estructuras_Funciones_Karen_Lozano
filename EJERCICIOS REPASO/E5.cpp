//Ejercicio 5
//Elabore un programa que solicite un número entero positivo y
// muestre su tabla de multiplicar del 1 al 10,
// además de calcular la suma de los resultados obtenidos.

#include <iostream>
using namespace std;
int main(){  
     int num;
     int suma=0;
     cout<<"Ingrese un numero entero positivo:";
     cin>>num;
     if(num>0){
     cout<<"TABLA DE MULTIPLICAR"<<endl;
     for(int i=1; i<=10; i++){
     cout<<num<<"x"<<i<<"="<<num*i<<endl;
     suma+=num*i;
     }
     cout<<"La suma de sus resultados son:"<<suma<<endl;
     }
     else{
     cout<<"El numero ingresado no es valido.Intentelo de nuevo"<<endl;
     }
     
     return 0;
 }
