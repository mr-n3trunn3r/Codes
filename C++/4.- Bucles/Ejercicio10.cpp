/*Escribe un programa  que calcule el valor de 2¹+2²+2³+...+2^n*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,r=0;
    cout<<"Ingresa un valor: ";
    cin>>n;
    cout<<endl;
    for(int i=1; i<=n;i++){
        cout<<"2"<<"^"<<i;
        if(i!=n){
            cout<<" + ";
        }
        else{
            cout<<" = ";
        }
        r=r+pow(2,i);
    }
    cout<<r;
    return 0;
}