/*Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
• Nombre
• Edad
• Promedio
Pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio 
y posteriormente imprimir los datos del alumno.*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct alumno{
    char nombre[50];
    int edad;
    float promedio;
}alumno[3];

int main(){
    int mayor,i;
    for( i=0;i<3;i++){
    	fflush(stdin); //Vacia el buffer
    	cout<<"\nAlumno: ";
    	cin.getline(alumno[i].nombre,50,'\n');
        cout<<"\nEdad: ";
        cin>>alumno[i].edad;
        cout<<"\nPromedio: ";
        cin>>alumno[i].promedio;
        if(alumno[i].promedio>alumno[i-1].promedio){
            mayor=i;
        }
        system("cls");
    }
    cout<<"\nEl alumno "<<mayor+1<<" es el que tiene el mayor promedio.";
    cout<<"\nNombre: "<<alumno[mayor].nombre;
    cout<<"\nEdad: "<<alumno[mayor].edad;
    cout<<"\nPromedio: "<<alumno[mayor].promedio;
    return 0;
}