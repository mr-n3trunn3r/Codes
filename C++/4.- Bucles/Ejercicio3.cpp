/*Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados 
de los 10 primeros números enteros mayores que 0*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int contador=0, suma=0,n;
    do {
        cout<<"Ingresa un número: ";
        cin>>n;
        if(n>0){
            suma=suma+(pow(n,2));
            contador++;
        }
    }while(contador<10):
    cout<<"La suma es: "<<suma;
    return 0;
}