/* Operar con la expresion a+b/c+d */
#include <iostream>

using namespace std;

int main(){
    float a,b,c,d,r;
    cout<<"Ingresa el valor de a: ";
    cin>>a;
    cout<<"\nIngresa el valor de b: ";
    cin>>b;
    cout<<"\nIngresa el valor de c: ";
    cin>>c;
    cout<<"\nIngresa el valor de d: ";
    cin>>d;
    r=(a+b)/(c+d);
    cout.precision(3);
    cout<<"\nEl resultado es : "<<r;
    return 0;
}