/*Buscar un numero dentro de un arreglo con el algoritmo de busqueda binaria*/

#include <iostream>

using namespace std;

int main(){
	int n[]={1,2,3,4,5};
	int inf,sup,mitad,dato;
	char bandera='F';
	
	dato=4;
	
	//Busqueda Binaria
	inf=0; //siempre se empieza en 0
	sup=5; //el número de elementos del arreglo
	while(inf<=sup){
		mitad=(inf+sup)/2;
		if(n[mitad]==dato){
			bandera='V';
			break;
		}
		if(n[mitad] > dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if(n[mitad] < dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}
	}
	if(bandera=='V')
	cout<<"El dato se encuentra en la posición[0 a 4]: "<<mitad;
	else
	cout<<"El dato no se encontro";
	return 0;
}