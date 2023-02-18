/*Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial de un número)*/

#include <iostream>

using namespace std;

int main(){
    int n,r=0;
    cout<<"Ingresa un número: ";
    cin>>n;
    cout<<endl;
    for (int i=1;i<=n;i++){
        r=r*i;
        if(i!=n){
            cout<<i<<"*";
        }
        else{
            cout<<i<<" = ";
        }
    }
    cout<<r;
    return 0;
}