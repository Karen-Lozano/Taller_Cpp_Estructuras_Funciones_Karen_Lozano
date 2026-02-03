//Ejercicio 7 
//Elabore un programa que recorra los números del 1 al 50 y
// cuente cuántos son múltiplos de 3 y cuántos no lo son,
// mostrando ambos resultados.
#include <iostream>
using namespace std;
int main(){
    int contador=0;
    int contador1=0;
    for(int i=1; i<=50; i++){
    if(i%3==0){
    cout<<i<<endl;
    contador++;
    }
    else{
    contador1++;
    }
    }
    cout<<"Los numeros multiplos de 3 son:"<<contador<<endl;
    cout<<"Los numeros multiplos NO de 3 son:"<<contador1<<endl;
    

return 0;
}
