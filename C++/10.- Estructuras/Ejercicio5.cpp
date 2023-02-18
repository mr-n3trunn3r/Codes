/*Hacer 2 estructuras, una llamada promedio que tendrá los siguientes campos:
• Nota 1
• Nota 2
• Nota 3
Y otra llamada alumno que tendrá los siguientes campos:
• Nombre
• Sexo
• Edad
Hacer que la estructura promedio este anidadada en la estructura alumno, 
luego pedir todos los datos para varios alumnos, posteriormente calcular su promedio y 
por último imprimir todos sus datos incluidos el promedio*/

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
    int n;
    double promedio;
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
        promedio=(alumnos[i].a_promedio.n1+alumnos[i].a_promedio.n2+alumnos[i].a_promedio.n3)/3;
        cout<<"Promedio: "<<promedio;
        system("pause");
        system("cls");
    }
    return 0;
}