/*Creando una estructura basica*/

#include <iostream>

using namespace std;

struct persona{
    char nombre[20];
    int edad;
}
persona1={"Christian",23},
persona2={"Ivan",24},
persona3
;

//Imprimiendo la estructura
//Se hace referencia a un campo usando la sintaxis: Nombreestructura.NombreCampo
int main(){
    cout<<"\nIngresa el nombre de la persona 3: ";
    cin.getline(persona3.nombre,20,'\n');
    cout<<"\nIngresa la edad de la persona 3: ";
    cin>>persona3.edad;
    cout<<"\nNombre 1: "<<persona1.nombre;
    cout<<"\nPersona 1: "<<persona1.edad;
    cout<<"\nNombre 2: "<<persona2.nombre;
    cout<<"\nPersona 2: "<<persona2.edad;
    cout<<"\n---------------------------------\n";
    cout<<"\nNombre 3: "<<persona3.nombre;
    cout<<"\nPersona 3: "<<persona3.edad;
    return 0;
}
