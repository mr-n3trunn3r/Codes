/* Pedirel nombre del usuario en mayúscula, si su nombre comienza por la letra A, 
convertir su nombre a minusculas, caso contrario no convertirlo*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre[50]="";
    cout<<"Ingresa tu nombre: ";
    cin.getline(nombre,50,'\n');
    if(nombre[0]=='A'){
        cout<<"Nombre en minusculas:\n"<<strlwr(nombre);
    }
    return 0;
}
