//Ejercicio 3 
//Desarrolle un programa que muestre en pantalla los números
// del 1 al 10, pero indicando al final cuántos números fueron 
//mostrados, utilizando únicamente la estructura for.
#include <iostream> 

using namespace std;

int main (){
    int contador=0;
    cout<<"NUMEROS DEL 1 AL 10"<<endl;
    for(int i=1; i<=10; i++){
    cout<<i<<endl;
    contador++;
    }
    
    cout<<"LA CANTIDAD DE NUMEROS INGRESADOS SON:"<<contador<<endl;

return 0;
}
