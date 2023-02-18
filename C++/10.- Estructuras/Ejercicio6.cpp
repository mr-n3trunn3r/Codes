/*Utilizar las 2 estructuras del problema 5, pero ahora calcular cual tiene el mejor promedio 
e imprimir sus datos*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct promedio{
    double n1;
    double n2;
    double n3;
};

struct alumno{
    char nombre[100];
    char sexo[20];
    int edad;
    struct promedio a_promedio;
}alumnos[1000];

int main(){
    int n,mayor=0;
    double promedio[1000];
    cout<<"Ingresa el numero de alumnos: ";
    cin>>n;
    system("cls");
    
    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"\n\n\t\t\tAlumno "<<i+1<<":";
        cout<<"\nNombre:";
        cin.getline(alumnos[i].nombre,100,'\n');
        cout<<"\nSexo:";
        cin.getline(alumnos[i].sexo,20,'\n');
        cout<<"\nEdad:";
        cin>>alumnos[i].edad;
        cout<<"\nNota 1:";
        cin>>alumnos[i].a_promedio.n1;
        cout<<"\nNota 2:";
        cin>>alumnos[i].a_promedio.n2;
        cout<<"\nNota 3:";
        cin>>alumnos[i].a_promedio.n3;
        promedio[i]=(alumnos[i].a_promedio.n1+alumnos[i].a_promedio.n2+alumnos[i].a_promedio.n3)/3;
        cout<<"\nPromedio: "<<promedio[i];
        if(promedio[i]>mayor){
            mayor=i;
        }
        system("pause");
        system("cls");
    }
    cout<<"\nEl alumno con mejor promedio es el alumno "<<mayor+1;
    cout<<"\nNombre: "<<alumnos[mayor].nombre;
    cout<<"\nSexo: "<<alumnos[mayor].sexo;
    cout<<"\nEdad: "<<alumnos[mayor].edad;
    cout<<"\nNota 1: "<<alumnos[mayor].a_promedio.n1;
    cout<<"\nNota 2: "<<alumnos[mayor].a_promedio.n2;       cout<<"\nNota 3: "<<alumnos[mayor].a_promedio.n3;
    cout<<"\nPromedio: "<<promedio[mayor];
    return 0;
}