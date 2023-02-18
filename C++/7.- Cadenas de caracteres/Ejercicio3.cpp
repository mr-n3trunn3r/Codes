/*Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, 
en caso de no serlo, indicar cual es mayor alfabeticamente.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[50]="",cadena2[50]="";
    cout<<"\nIngresa la cadena 1:\n";
    cin.getline(cadena1,50,'\n');
    cout<<"\nIngresa la cadena 2:\n";
    cin.getline(cadena2,50,'\n');
    if(strcmp(cadena1,cadena2) == 0 ){
        cout<<"\nLas cadenas son iguales";
    }
    else
    {
        if(strcmp(cadena1,cadena2)>0){
            cout<<endl<<cadena1<<" es mayor alfabeticamente que" <<cadena2;
        }
        else{
            cout<<endl<<cadena2<<" es mayor alfabeticamente que "<<cadena1;
        }
    }
    return 0;
}