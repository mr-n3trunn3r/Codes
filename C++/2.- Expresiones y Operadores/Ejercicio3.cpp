/*Escribir la expresión en C++*/

#include <iostream>

using namespace std;

int main(){
    float a,b,c,d,e,f,r;
    cout<<"Ingresa la variable a: ";
    cin>>a;
    cout<<"\nIngresa la variable b: ";
    cin>>b;
    cout<<"\nIngresa la variable c: ";
    cin>>c;
    cout<<"\nIngresa la variable d: ";
    cin>>d;
    cout<<"\nIngresa la variable e: ";
    cin>>e;
    cout<<"\nIngresa la variable f: ";
    cin>>f;
    r=(a+(b/c))/(d+(e/f));
    cout-precision(4);
    cout<<"\n El resultado es: "<<r;
    return 0;
}