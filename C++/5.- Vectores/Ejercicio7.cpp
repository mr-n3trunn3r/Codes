/*Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de 
ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido 
por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.*/

#include <iostream>

using namespace std;

int main(){
    int t1,t2,t3;
    char v1[100],v2[100],v3[200];
    cout<<"\nIngrese el tamaño del vector 1: ";
    cin>>t1;
    for(int i=0;i<t1;i++){
        cout<<"\nIngresa un caracter: ";
        cin>>v1[i];
        v3[i]=v1[i];
    }
    cout<<"\nIngrese el tamaño del vector 2: ";
    cin>>t2;
    t3=t1+t2;
    for(int i=0;i<t2;i++){
        cout<<"\nIngresa un caracter: ";
        cin>>v2[i];
        v3[t1+i]=v2[i];
    }
    for(int i=0;i<t3;i++){
        cout<<"\n"<<v3[i];
    }
    return 0;
}