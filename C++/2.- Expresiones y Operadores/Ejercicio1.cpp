/*EL usuario ingresa 2 números y el resultado de la operacion (a/b +1) se almacena en otra variable */
#include <iostream>

using namespace std;

int main(){
    float a,b,c;
    cout<<"La expresión es (a/b) +1\n";
    cout<<"\nIngresa a: ";
    cin>>a;
    cout<<"\nIngresa b: ";
    cin>>b;
    c=(a/b)+1;
    cout.precision(2); //Toma solo n números decimales y lo redondea
    cout<<"El resultado es: "<<c;
    retur