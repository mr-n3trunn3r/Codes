/*Escribir un código que lea de la entrada estándar un caracter e 
indique en la salida si el carácter es una vocal minúscula o no.*/

#include <iostream>

using namespace std;

int main()[
    char letra;
    cout<<"Inserta un caracter: ";
    cin>>letra;
    cout<<endl;
    switch (letra){
    	case 'a':
   		case 'e':
    	case 'i':
    	case 'o':
    	case 'u':
        cout<<"La letra "<<letra<<"minuscula";
        break;
    default:
        cout<<"La letra no es una vocal minuscula";
        break;
    }
    return 0;
]