/*Hacer un matriz de tipo entera de 2*2, llenarla de números y luego copiar todo su 
contenido hacia otra matriz.*/

#include <iostream>

using namespace std;

int main(){
    int n[100][100],nfilas=2, ncolumnas=2,n2[100][100];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"\nIngresa un valor: ";
            cin>>n[100][100];
            n2[i][j]=n[i][j];
        }
    }
    cout<<"\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<[i][j];
        }
        cout<<"\n";
    }
    return 0;
}