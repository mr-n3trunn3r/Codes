/*Escribe un programa que lea de la entrada estándar un vector de números y muestre 
en la salida estándar los níumeros del vector con sus índices asociados.*/

#include <iostream>

using namespace std;

int main(){
    int t,n[100],i=0;
    cout<<"\nIngresa el tamaño del vector: ";
    cin>>t;
    for (i=0;i<t;i++){
        cout<<"\nIngresa un número: ";
        cin>> n[i];
    }
    for(i=0;i<t;i++){
        cout<<"\nEl número en la posición "<<i<<" = "<<n[i];
    }
    return 0;
}
