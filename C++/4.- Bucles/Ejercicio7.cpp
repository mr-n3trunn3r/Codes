/*Escriba un programa que calcule el valor de: 1+2+3+...+n*/


#include <iostream>

using namespace std;

int main(){
    int n,r=0;
    cout<<"Ingresa un número: ";
    cin>>n;
    cout<<endl;
    for (int i=0;i<=n;i++){
        r=r+i;
        if(i!=n){
            cout<<i<<"+";
        }
        else{
            cout<<i<<" = ";
        }
    }
    cout<<r;
    return 0;
}