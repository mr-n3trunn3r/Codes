/*Escribe un programa que lea tres números y determine cual de ellos es el mayor*/
#include <iostream>

using namespace std;

int main(){
    float n1,n2,n3;
    cout<<"Inserte el número 1: ";
    cin>>n1;
    cout<<"\nInserte el número 2: ";
    cin>>n2;
    cout<<"\nInserte el número 3: ";
    cin>>n3;
    cout<<endl;
    if (n1>n2 && n1>n3){
        cout<<"El número 1 es mayor";
    }
    else if (n2>n1 && n2>n3){
        cout<<"El número 2 es mayor";
    }
    else if (n3>n1 && n3>n2){
        cout<<"El número 3 es mayor";
    }
    else if (n2==n1 && n2==n3){
        cout<<"Los números son iguales";
    }
    return 0;
}