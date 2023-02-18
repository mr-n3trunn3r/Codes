/*Pedir al usuario una cadena de caracteresm almacenarla en un arreglo y 
copiar todo su contenido hacia otro arreglo de caracteres.*/

#include <iostream>
#include <string.h>

using namespace std;

int man(){
    char cadena1[100],cadena2[]="";
    cout<<"Cadena 2:\n"<<cadena2;
    cout<<"\nIngresa la cadena1:\n";
    cin.getline(cadena1,100,'\n');
    strcpy(cadena2,cadena1);
    cout<<"\nCadena 2:\n"<<cadena2;
    return 0;
}