/*Realizar un programa que lea en un arreglo de estructuras los datos de N empleados de la empresa 
y que imprima los datos del empleado con mayor y menor salario*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Empleado{
	char nombre[20];
	float salario;
}emp[100];

int main(){
	int n,i,posM,posm;
	float mayor=0,menor=999999999999999999;
	cout<<"Numero de empleados: ";
	cin>>n;
	for(i=0;i<n;i++){
	fflush(stdin);
		system("cls");
		cout<<"\n\t\t\t\tEmpleado "<<i+1;
		cout<<"\nNombre del empleado: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<"\nSalario: ";
		cin>>emp[i].salario;
		if(emp[i].salario>mayor){
			mayor=emp[i].salario;
			posM=i;
		}
		if(emp[i].salario<mayor){
			menor=emp[i].salario;
			posm=i;
		}
	}
	cout<<"\n\n\t\t\t\tEmpleado con mayor salario: ";
	cout<<"\nNombre: "<<emp[posM].nombre;
	cout<<"\nSalario: "<<emp[posM].salario;
	cout<<"\n\n\t\t\t\tEmpleado con menor salario: ";
	cout<<"\nNombre: "<<emp[posm].nombre;
	cout<<"\nSalario: "<<emp[posm].salario;
	return 0;
}