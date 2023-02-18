/*Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original*/

#include <iostream>

using namespace std;

int main(){
    int matriz[100][100],nfilas,ncolumnas,matrizt;
    cout<<"\nIngresa el número de filas (hacia abajo): ";
    cin>>nfilas;
    cout<<"\nIngresa el número de columnas (hacia la derecha): ";
    cin>>ncolumnas;
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            cout<<"\nIngresa un valor: ";
            cin>>matriz[i][j];
            matrizt=matriz[j][i];
        }
    }
    cout<<"\nLa matriz traspuesta es:\n";
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            cout<<matrizt[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}