/*Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos:
• Nombre
• Pais
• Numero de Medallas
Y devuelva los datos (nombre, pais) del atleta que ha ganado el mayor número de medallas*/

#include <iostream>
#include <string.h>

using namespace std;

struct atleta{
    char nombre[100];
    char pais[100];
    int nmedallas;
}atleta[1000];

int main()[
    int n,mayor=0;
    cout<<"Número de atletas a registrar: ";
    cin>>n;
    system("cls");
    for(int i=0;i<n;i++){
        cout<<"\n\n\t\tAtleta "<<i+1<<":";
        cout<<"\n\nNombre: ";
        cin.getline(atleta.nombre[i],100,'\n');
        cout<<"\n\nPais: ";
        cin.getline(atleta.pais[i],100,'\n');
        cout<<"\n\nNúmero de medellas: ";
        cin>>atleta.nmedallas[i];
        if(atleta.nmedallas[i]>mayor){
            mayor=i;
        }
        system("cls");
    }
    cout<<"\nEL atleta con mayor medallas es:";
    cout<<"Nombre: "<<atleta.nombre[mayor];
    cout<<"Pais: "<<atleta.pais[mayor];
    return 0;
]