/*Escribe un programa que lea de la entrada estándar el precio de un producto y 
muestre en la salida estándar el precio del producto al aplicarle el IVA.*/

#include <iostream>

using namespace std;

int main(){
    float precio;
    cout<<"Ingresa el precio sin IVA: ";
    cin>>precio;
    cout<<"\nEl IVA es del 16%\n";
    cout<<"El precio con IVA es: "<<precio*1.16;
    return 0;
}