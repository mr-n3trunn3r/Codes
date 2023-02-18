/*Realizar un programa que lea de la entrada estándar números hasta que se introduzca un 0. 
En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores 
mayores que ceros leídos.*/

#include <iostream>

using namespace std;

int main(){
    int n,contador;
    do{
        cout<<"Ingresa un número: ";
        cin>>n;
        cout<<endl;
        if(n>0){
            contador ++;
        }
    }while(n!=0);
    cout<<"Se ingresaron "<<contador<<" mayores a 0";
    return 0;
}