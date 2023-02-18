/*Realiza un programa que lea de la entrada estándar los siguientes datos de una persona
• 	Edad: tipo entero
• Sexo: tipo caracter
• Altura en metros: tipo flotante
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include <iostream>
#include <stdlib.h> //Se utiliza para limpiar la pantalla

using namespace std;

int main(){
    int edad;
	char sexo[20]; //Se debe especificar el tamaño de la cadena de caracteres
    float altura;
    cout<<"\nIngresa tu edad: ";
    cin>>edad;
    cout<<"\nIngresa tu sexo (Un caracter): ";
    cin>>sexo;
    cout<<"\nIngresa tu altura en metros: ";
    cin>>altura;
    system("CLS"); //Limpia la pantalla
    cout<<"\nTu edad es: "<<edad;
    cout<<"\nTu sexo es: "<<sexo;
    cout<<"\nTu altura es: "<<altura;
    return 0
}