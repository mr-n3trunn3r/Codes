/*Hacer una matriz preguntando al usuario el número de filas y columnas, llenara de números aleatorios, 
copiar el contenido a otra matriz y por último mostrarla en pantalla.*/

#include <iostream>

using namespace std;

int main(){
   int matriz[100][100],nfilas,ncolumnas;
    cout<<"\nIngresa el número de filas (hacia abajo): ";
    cin>>nfilas;
    cout<<"\nIngresa el número de columnas (hacia la derecha): ";
    cin>>ncolumnas;
    srand(time(null));
    for(int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            matriz[i][j]=1+rand()%(100);
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