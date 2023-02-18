/*
Escribir un código que lea de la entrada estándar un 
caracter e indique en la salida si el carácter es una vocal minúscula o no.*/

#include <iostream>

using namespace std;

int main(){
    char letra;
    cout<<"Inserta una letra: ";
    cin>>letra;
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"La letra es minuscula";
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<"La letra es mayuscula";
            break;
        default: 
            cout<<"El caracter ingresado no es una vocal mayuscula ni minuscula";
    }
    return 0;
    }