/*Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o
el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.*/

#include <iostream>

using namespace std;

int main(){
    float n=1,sum;
    while((n<20 || n>30 ) && n!=0){
    cout<<"Ingresa un valor: ";
    cin>>n;
    cout<<endl;
        if(n>0){
            sum=sum+n;
        }
        else if (n==0){
            break;
        }
    }
    cout<<"La suma de los valores es: "<<sum;
    return 0;
}