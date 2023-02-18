/*Escribir un programa que calcule x*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a,b,c,x1,x2;
    cout<<"Ingresar el valor de a: ";
    cin>>a;
    cout<<"\nIngresar el valor de b: ";
    cin>>b;
    cout<<"\nIngresar el valor de c: ";
    cin>>c;
    x1=(-b+sqrt((pow(b,2))-(4*a*c)))/(2*a);
    x2=(-b-sqrt((pow(b,2))-(4*a*c)))/(2*a);
    cout<<"\nx1: "<<x1;
    cout<<"\nx2: "<<x2;
    return 0;
}