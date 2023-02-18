/* Pedir al usuario 2 cadenas de caracteres de números, uno entero y el otro real, 
convertirlos a sus respectivos valores y por ultimo sumarlos.*/

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
	char enteroc[50]="",flotantec[50]="";
	int entero;
	float suma, flotante;
	cout<<"Ingresa un número entero: ";
	cin.getline(enteroc,50,'\n');
	entero=atoi(enteroc);
	cout<<"\nIngresa un número con decimales: ";
	cin.getline(flotantec,50,'\n');
	flotante=atof(flotantec);
	suma=entero+flotante;
	system("cls");
	cout<<"\n La suma es: "<<suma;
	return 0;
	}

