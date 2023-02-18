/*Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n*/

#include <iostream>

using namespace std;

int main(){
    int n,r=0;
    cout<<"Ingresa un valor ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i;
        if (i!=n) {
            if(i%2 == 0){
            cout<<" + ";
            r=r+i;
            }
            else{
            cout<<" - ";
            r=r-i;
        	}
        }
        else{
            cout<<" = ";
        }            
    }
    cout<<r;
    return 0;
}