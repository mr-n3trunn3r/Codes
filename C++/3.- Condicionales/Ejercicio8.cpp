/*
Escribe un programa que lea la entrada estándar de 3 números.  Despues debe leer un 
4to número e indicar si el número coincide con alguno de los anteriormente introducidos.*/
#include <iostream>

using namespace std;

int main(){
    float n1,n2,n3,n4;
    cout<<"Inserta 3 números: ";
    cin>>n1>>n2>>n3;
    cout<<"\n Inserta un 4to número: ";
    cin>>n4;
    if(n4==n1||n4==n2||n4==n3){
        cout<<"\nEl 4to número coincide con uno de los primeros 3";
    }
    else{
        cout<<"\nEl 4to número no coincide con uno de los primeros 3 ";
    }
    return 0;
}