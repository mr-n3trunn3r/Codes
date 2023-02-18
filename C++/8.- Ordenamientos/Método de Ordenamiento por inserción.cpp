/*Ordenamiento por inserción del número 42135*/
#include <iostream>

using namespace std;

int main(){
    int i, posicion, aux, n[]={4,2,3,1,5};
    for(i=0;i<5;i++){
        posicion=i;
        aux=n[i];
        while((posicion>0) && (n[posicion-1]>aux)){
            n[posicion]=n[posicion-1];
            posicion--;
        }
        n[posicion]=aux;
    }
    cout<<"\nOrden Ascendente:\n";
    for(i=0;i<5;i++){
    	cout<<n[i]<<" ";
    }
    cout<<"\nOrden Descendente:\n";
    for(i=4;i>=0;i--){
    	cout<<n[i]<<" ";
    }
    return 0;
}
