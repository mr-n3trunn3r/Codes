/*Hacer un programa que pida al usuario que digite una cadena de caracteres, 
luego verifica la longitud de la cadena, y si esta supera 10 caracteres mostrarla en pantalla, 
caso contrario no mostrarla*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    char p[100];
    cout<<"Escirbe algo: \n";
    cin.getline(p,100,'\n');
    if(strlen(p)<10)
    {
        cout<<"\nCadena muy pequeña";
    }
    else
    {
        cout<<p;
    }
    return 0;
}
