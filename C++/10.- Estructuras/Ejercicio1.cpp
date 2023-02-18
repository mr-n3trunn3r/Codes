/*Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos:
• Nombre
• Edad
• Sexo
• Club
Pedir datos al usuario para un corredor, y asignarle una categoria de competicion:
• 	Juvenil <=18 años
• Señor<=40 añps
• Veterano >40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competición*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct corredor{
    char nombre[50];
    int edad;
    char sexo[1];
    char club[50];
    char categoria[50];
}corredor1;

int main(){
    int i=1;
    char cat[50]="";
    cout<<"\n\t\t\t\tCorredor "<<i<<":";
    cout<<"\nNombre: ";
    cin.getline(corredor1.nombre,50,'\n');
    cout<<"\nEdad: ";
    cin>>corredor1.edad;
    cout<<"\nSexo (M: Masculino, F: Femenino, O: Otro): ";
    cin>>corredor1.sexo;
    fflush(stdin); //Vacia el buffer
    cout<<"\nClub: ";
    cin.getline(corredor1.club,50,'\n');
    if(corredor1.edad<=18){
        strcpy(corredor1.categoria,"Juvenil");
    }
    else if(corredor1.edad>18 && corredor1.edad<=40)
    {
        strcpy(corredor1.categoria,"Señor");
    }
    else if(corredor1.edad>48){
        strcpy(corredor1.categoria,"Veterano");
    }
    cout<<"\nCategoria: "<<corredor1.categoria;
    return 0;
}