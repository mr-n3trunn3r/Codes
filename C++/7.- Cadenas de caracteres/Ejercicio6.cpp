/*Convertir dos cadenas de minusculas a mayusculas. Compararlas y decir si son iguales o no.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char cadena1[50]="", cadena2[50]="";
	cout<<"Escribe algo: \n";
	cin.getline(cadena1,50,'\n');
	cout<<"\n\nEscribe otra cosa:\n";
	cin.getline(cadena2,50,'\n');
	strupr(cadena1);
	strupr(cadena2);
	if(strcmp(cadena1,cadena2)==0){
		cout<<"\nLas cadenas son iguales";
	}
	else
	{
		cout<<"Las cadenas no son iguales";
	}
	return 0;
}