/*Hacer un programa para rellinar una matriz pidiendo al usuario el número de filas 
y columnas para posteriormente mostrarla en pantalla.*/

#include <iostream>

using namespace std;

int main(){
    int matriz[100][100],nfilas,ncolumnas;
    cout<<"\nIngresa el número de filas (hacia abajo): ";
    cin>>nfilas;
    cout<<"\nIngresa el número de columnas (hacia la derecha): ";
    cin>>ncolumnas;
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            cout<<"\nIngresa un valor: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"\nLa matriz resultante es:\n";
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}