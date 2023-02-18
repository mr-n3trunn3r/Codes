/*Escribe un programa que lea la nota de 4 alumnos y calcule la media de esos 4:*/

#include <iostream>

using namespace std;

int main(){
    float a1,a2,a3,a4,r;
    cout<<"Ingresa la nota final del alumno 1: ";
    cin>>a1;
    cout<<"\nIngresa la nota final del alumno 2: ";
    cin>>a2;
    cout<<"\nIngresa la nota final del alumno 3: ";
    cin>>a3;
    cout<<"\nIngresa la nota final del alumno 4: ";
    cin>>a4;
    r=(a1+a2+a3+a4)/4;
    cout.precision(2);
    cout<<"\nLa media es: "<<r;
    return 0;
}