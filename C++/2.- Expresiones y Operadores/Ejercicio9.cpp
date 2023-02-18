/*Escribir un programa que calcule la siguiente función: */
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float x,y,r;
    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<"\nIngrese el valor de y: ";
    cin>>y;
    r=(sqrt(x))/((pow(y,2))-1);
    cout.precision(2);
    cout<<"El resultado es: "<<r;
    return 0;
}