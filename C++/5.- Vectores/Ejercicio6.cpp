/*Escribe un programa que defina un vector de números y calcule si existe algún número en el 
vector cuyo valor equivale a la suma del resto de números del vector.*/

#include <iostream>

using namespace std;

int main(){
    int n[100],t,suma=0,mayor=0;
    cout<<"Ingresa el tamaño del vector: ";
    cin>>t;
   for(int i=0;i<=t;i++){
        if(i!=t){
            cout<<"\nIngresa un número: ";
            cin>>n[i];
            suma+=n[i];
        }
        else{
            n[t]=0;
        }
    }
    for(int i=0;i<t;i++){
        if(n[i]>mayor){
            mayor=n[i];
        }
    }
    if(mayor== suma-mayor){
        cout<<"\nEl número mayor es "<<mayor<<" y equivale a la suma de todos los demas números";
    }
    else{
        cout<<"\nEl número mayor es "<<mayor<<" y no equivale a la suma de todos los demas números";
    }
    return 0;
}
