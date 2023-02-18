/*Escribe un código que lea dos números y determine cual de ellos es mayor.*/
#include <iostream>

using namespace std;

int main(){
    float n1,n2;
    cout<<"Inserte el número 1: ";
    cin>>n1;
    cout>>"\nInserte el número 2: ";
    cin>>n2;
    cout<<endl;
    if (n1>n2){
        cout<<"El número 1 es mayor que el número 2";
    }
    else if (n2>n1){
        cout<<"El número 2 es mayor que el número 1";
    }
    else if (n2==n1){
        cout<<"Los números son iguales";
    }
    return 0;
}