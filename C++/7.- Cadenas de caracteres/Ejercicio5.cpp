/*Hacer un programa que determine si una palabra es políndroma.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[50]="",palindromo[50]="";
    cout<<"Escribe una palabra:\n";
    cin>>palabra; //Almacenamos una palabra, no una frase.
    strcpy(palindromo,palabra);
    strrev(palindromo);
    if(strcmp(palabra,palindromo)==0){
        cout<<"\n Es palindromo";
    }
    else{
        cout<<"\n No es palindromo";
    }
    return 0;
}