/*Escribe un programa que defina un vector de números y muestre en la salida estándar el 
vector en orden inverso (del último al primer elemento)*/

#include <iostream>

using namespace std;

int main(){
    int n[100],t;
    cout<<"\n Ingresa el tamaño del vector: ";
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"\n Ingresa un número: ";
        cin>>n[i];
    }
        for(i=t;i>=0;i--){
        cout<<"\nEl número en la posición "<<i<<" = "<<n[i];
    }
    return 0;
}