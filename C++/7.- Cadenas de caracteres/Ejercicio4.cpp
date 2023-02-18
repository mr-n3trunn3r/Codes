/*Crear una cadena que contenga la frase “Hola, ¿Que tal?”, luego crear otra cadena para preguntar 
al usuario su nombre, por último añadir el nombre al final de la primer cadena y mostrr el mensaje 
completo ”Hola, ¿Que tal? (NombreUsuario)"*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[]="Hola, ¿Que tal? ",cadena2[50]="",cadena3[100]="";
    cout<<"Ingresa tu nombre: \n";
    cin.getline(cadena2,50,'\n');
    strcpy(cadena3,cadena1);
    strcat(cadena3,cadena2);
    cout<<endl<<cadena3;
    return 0;
}