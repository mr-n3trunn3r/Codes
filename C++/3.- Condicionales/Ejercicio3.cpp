/*Realice un programa que lea un valor entero y determine si se trata de un número par o impar*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Inserta un número";
    cin>>n;
    cout<<endl;

    if (n==0){
        cout<<"El número es 0";
    }
    else{
        if (n%2==0) {
        cout<<"El número es par";
    }
    else {
        cout<<"El número es impar";
        }
    }
    return 0;
}
