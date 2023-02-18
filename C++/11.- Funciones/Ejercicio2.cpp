/*Calcular el valor absoluto de un número utilizando una función*/

#include <iostream>

using namespace std;

//Prototipo de funciones
	//Creando la plantilla: template <class NombrePlantilla>
	//		tipo NombreFunción(NombrePlantilla Variable)
template <class TIPOD>
void mostrarAbs(TIPOD numero);

//Función principal
int main(){
	int n1;
	double n2;
	float n3;
	cout<<"\nIngresa un número entero: ";
	cin>>n1;
	cout<<"\nIngresa un número doble: ";
	cin>>n2;
	cout<<"\nIngresa un número flotante: ";
	mostrarAbs(n1);
	mostrarAbs(n2);
	mostrarAbs(n3);
	return 0;
}

//Definición de funciones con plantilla
template <class TIPOD numero>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero= numero*-1;
	}
	cout<<"El valor absoluto es: "<<numero<<"\n";
}

