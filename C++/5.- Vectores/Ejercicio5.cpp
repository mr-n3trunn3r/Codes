/*Desarolle un programa que lea de la entrada estándar un vector de enteros y 
determine el mayor elemento del vector*/

#include <iostream>

using namespace std;

int main(){
    int t,n[100],mayor=0,posicion=0;
    cout<<"\nIngresa el tamaño del vector: ";
    cin>>t;
    for(int i=0;i<=t;i++){
        if(i!=t){
            cout<<"\nIngresa un número: ";
            cin>>n[i];
        }
        else{
            n[t]=0;
        }
    }
    for(int i=0;i<t;i++){
        if(n[i]>mayor){
            mayor=n[i];
            posicion=i;
        }
    }
    cout<<"El número mayor es "<<mayor<<" y está en la posición "<<posicion;
    return 0;
}