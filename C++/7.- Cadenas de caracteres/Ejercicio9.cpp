/*Realice un programa que lea una cadena de caracteres de la entrada estandar y 
muestre en la salida estándar cuantas ocurrencias de cada vocal existen en la cadena*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
    char cadena[50]="";
    int a=0,e=0,i=0,o=0,u=0;
    cout<<"Escribe algo:\n";
    cin.getline(cadena,50,'\n');
    for(int j=0;j<50;j++){
        if(cadena[j]=='a' || cadena[j]=='A'){
           a++; 
        }
        else if(cadena[j]=='e' || cadena[j]=='E'){
            e++;
        }
        else if(cadena[j]=='i' || cadena[j]=='I'){
            i++;
        }
        else if(cadena[j]=='o' || cadena[j]=='O'){
            o++;
        }
        else if(cadena[j]=='u' || cadena[j]=='U'){
            u++;
        }
    }
    cout<<"\nA aparece "<<a<<" veces";
    cout<<"\nE aparece "<<e<<" veces";
    cout<<"\nI aparece "<<i<<" veces";
    cout<<"\nO aparece "<<o<<" veces";
    cout<<"\nU aparece "<<u<<" veces";
    return 0;
}