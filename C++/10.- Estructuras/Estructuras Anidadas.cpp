/*Registrar datos de 2 empleados usando una estructura anidada*/


#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct info_direccion{
	char direccion[50];
	char ciudad[50];
	char provincia[50];
};

struct empleado{
	char nombre[20];
	strcut info_direccion dir_empleado;
	double salario;
}empleados[2] //Significa que hay 2 estructuras del tipo empleados
; 


int main(){
    for(int i=0;i<2;i++){
        cout<<"\nDigita el nombre del  empleado "<<i+1<<" :";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"\nIngresa la direccion del  empleado "<<i+1<<" :";
        cin.getline(empleados[i].dir_empleado.direccion,50,'\n');
        cout<<"\nIngresa la ciudad del  empleado "<<i+1<<" :";
        cin.getline(empleados[i].dir_empleado.ciudad,50,'\n');    
        cout<<"\nIngresa la provincia del  empleado "<<i+1<<" :";
        cin.getline(empleados[i].dir_empleado.provincia,50,'\n');
        cout<<"\nIngresa el salario del  empleado "<<i+1<<" :";
        cin>>empleados[i].salario;
        system("cls");
        }
    for(int i=0;i<2;i++){
        cout<<"\n\t\t\tEmpleado "<<i+1<<endl<<endl;        
        cout<<"\nNombre: "<<empleados[i].nombre;
        cout<<"\nDirección: "<<empleados[i].dir_empleado.direccion;
        cout<<"\nCiudad: "<<empleados[i].dir_empleado.ciudad;
        cout<<"\nProvincia: "<<empleados[i].dir_empleado.ciudad;
        cout<<"\nSalario: "<<empleados[i].salario;
        cout<<endl<<endl;
    }
    
    return 0;
}