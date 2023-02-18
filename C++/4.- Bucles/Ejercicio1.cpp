/*Realizar un programa que solicite de la entrada estándar un entero del 1 al 10 y 
muestre en la salida estándar su tabla de multiplicar*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Ingresa un número del 1 al 10: ";
    cin>>n;
    cout<<endl;
    if (n>=1 && n<=10){
        for(int i=1;i<=10;i++){
            cout<<n<<" x "<<i<<"="<<n*i<<endl;
        }
    }
    else{
        cout<<"El valor no es valido";
    }
    return 0;
}