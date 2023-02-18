/*Realice un programa que calcule la suma de dos matrices cuadradas de 3x3*/

#include <iostream>

using namespace std;

int main(){
    int m1[3][3],m2[3][3],r[3][3],nfilas=3,ncolumnas=3;
    cout<<"Matriz 1";
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            cout<<"\nIngresa un valor: ";
            cin>>m1[i][j];
        }
    }
    cout<<"\nMatriz 2";
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            cout<<"\nIngresa un valor: ";
            cin>>m2[i][j];
        }
    }
    cout<<"\nLa suma es:\n";
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            r[i][j]=m1[i][j]+m2[i][j];
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}