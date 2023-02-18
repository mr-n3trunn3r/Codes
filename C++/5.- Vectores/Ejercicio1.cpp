/*Escriba un programa que defina un vector de números y calcule la suma de sus elementos*/

#include <iostream>

using namespace std;

int main(){
    int suma,n[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(i<4){
            cout<<n[i]<<"+";
        }
        else{
            cout<<n[i]<<"=";
        }
        suma+=n[i];
    }
    cout<<suma;
    return 0;
}