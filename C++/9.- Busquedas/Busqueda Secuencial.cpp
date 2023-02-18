/*Buscar el número 4 en el arreglo {3,4,2,1,5}*/
#include <iostream>

using namespace std;

int main(){
	int a[]={3,4,2,1,5},dato=4,i=0,pos=0;
	char bandera='F'; // Para saber si el número existe o no
	
//Busqueda secuencial
	i=0;
	while(bandera=='F' && i<5){
		if(a[i]==dato){
			bandera='V';
			pos=i;
		}
		i++;
	}
	if(bandera=='F'){
	cout<<"El numero "<<dato<<" no existe en el arreglo";
	}
	else{
	cout<<"El número esta en la posición: "<<i;
	}
	return 0;
}