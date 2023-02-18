/*Escribe un programa que defina un vector de números y calcule la multiplicación 
acumulada de sus elementos.*/

#include <iostream>

using namespace std;

int main(){
    int r,n[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(i<4){
            cout<<n[i]<<"*";
        }
        else{
            cout<<n[i]<<"=";
        }
        r*=n[i];
    }
    cout<<r;
    return 0;
}