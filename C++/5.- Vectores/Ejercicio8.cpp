/*Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 
y muestre el segundo arreglo.*/

#include <iostream>

using namespace std;

int main(){
    int n[100],r[100];
    for(int i=0;i<5;i++){
        cout<<"\nIngresa un número: ";
        cin>>n[i];
        r[i]=n[i]*2;
    }
    for(int i=0;i<5;i++){
        cout<<"\n"<<r[i];
    }
    return 0;
}