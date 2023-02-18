/*Ordenar del 1 al 5 el numero 45213*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
    int n[]={4,1,2,3,5};
    int i,j,comodin;
    for(j=0; j<5;j++){
        for(i=0;i<5;i++){
            if(n[i]>n[i+1]){
                comodin=n[i];
                n[i]=n[i+1];
                n[i+1]=comodin;
            }
        }
    }
    cout<<"Número ordenado Ascendentemente:\n";
    for(i=0;i<5;i++){
    	cout<<n[i]<<" ";
    }
    cout<<"\nNúmero ordenado Descendentemente:\n";
    for(i=4;i>=0;i--){
    	cout<<n[i]<<" ";
    }
    return 0;
}

