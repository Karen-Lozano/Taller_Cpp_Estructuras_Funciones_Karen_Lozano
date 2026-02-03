//Ejercicio 6 
//Desarrolle un programa que muestre los números del 1 al 20 
// indique para cada número si es par o impar, 
//utilizando estructuras for e if.
#include <iostream>
using namespace std;

int main(){
   for(int i=1; i<=20; i++){
   
   if(i%2==0){
   cout<<i<<" es par"<<endl;
   }
   else{
   cout<<i<<" es impar"<<endl;
   }
   }
   

return 0;
}
