/*Comprobar si un número digitado por el usuario es positivo o negativo*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Ingresa el número: ";
    cin>>n;
    cout<<endl;
    if(n==0){
        cout<<"El número es 0";
    }
    else{
        if(n<0){
            cout<<"El númeo es negativo";
        }
        else{
            cout<<"El número es positivo";
        }
    }
    return 0;
}