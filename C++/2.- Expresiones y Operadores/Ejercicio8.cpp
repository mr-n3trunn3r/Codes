/*Escribir un programa que lea la entrada estándar de los dos catetos de un triángulo rectángulo y escriba en la salida estándar la hipotenusa:*/

#include <iostream>
#include <math.h> //Incluye algunas funciones matematicas

using namespace std;

int main(){
    float co,ca,h;
    cout<<"Cateto opuesto: ";
    cin>>co;
    cout<<"\nCateto adyacente: ";
    cin>>ca;
    h=sqrt(pow(co,2)+pow(ca,2)); //Calcula la raiz cuadrada
    //pow(valor,potencia)
    cout.precision(2);
    cout<<"\nHipotenusa: "<<h;
    return 0;
}