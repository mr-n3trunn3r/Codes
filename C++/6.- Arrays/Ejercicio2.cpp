/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre 
la diagonal principal de la matriz:*/

#include <iostream>

using namespace std;

int main(){
    int matriz[100][100],nfilas=3,ncolumnas=3;
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            cout<<"\nIngresa un valor: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"\nLa diagonal de la matriz es:\n";
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            if(i==j)
            {
                cout<<matriz[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}