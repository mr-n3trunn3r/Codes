/*Escribe un fragmento de código que intercambia los valores de 2 variables:*/

#include <iostream>

using namespace std;

int main(){
    float a,b,c,d;
    cout<<"Ingresa el valor de a: ";
    cin>>a;
    cout<<"\nIngresa el valor de b: ";
    cin>>b;
    cout<<"\nIntercambiando valores: ";
    c=a;
    d=b;
    a=d;
    b=c;
    cout<<"\nEl nuevo valor de a es:"<<a;
    cout<<"\nEl nuevo valor de b es:"<<b;
    return 0;
}
