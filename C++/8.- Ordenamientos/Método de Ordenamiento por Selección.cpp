/*Ordenar el numero 43152 por seleccion*/

#include <iostream>

using namespace std;

int main(){
    int n[]={4,3,1,5,2};
    int i,j,aux=0,min=0;

    for(i=0;i<5;i++){
        min=i;
        for(j=i;j<5;j++){
            if(n[j]<n[min])
            {
                min=j;
            }
        }
        aux=n[i];
        n[i]=n[min];
        n[min]=aux;
    }
    cout<<"\nOrden ascendente\n";
    for(i=0;i<5;i++){
        cout<<n[i]<<" ";
    }
    cout<<"\nOrden Descendente\n";
    for(i=4;i>=0;i--){
        cout<<n[i]<<" ";
    }
    return 0;
}