/*Escriba un programa que solicite la edad (un entero) e 
indique en la salida estándar si la edad introducida está en el rango de 18 a 25.*/

#include <iostream>

using namespace std;

int main(){
    int edad;
    cout<<"Inserta la edad: ";
    cin>>edad;
    if (edad <18 || edad >25){
        cout<<"La edad no está en el rango permitido";
    }
    else{
        cout<<"La edad está en el rango valido";
    }
    return 0;
}