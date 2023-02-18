/*Hacer un menu que considere las siguientes opciones:
	Caso 1:  Cubo de un número par
	Caso 2: Número par o impar
	Caso 3: salir.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int menu,cubo,par;
    cout<<"1.- Cubo de un número par\n2.- Número par o impar\n3.- Salir\n"<<"Opcion: ";
    cin>>menu;
    cout<<endl;
    switch(menu){
        case 1:
            cout<<"Ingresa el numero:";
            cin>>cubo;
            cubo=pow(cubo,3);
            cout<<"El cubo del numero es:"<<cubo;
            break;
        case 2:
            cout<<"Ingresa el numero:";
            cin>>par;
            if (par%2 == 0){
                cout<<"El numero es par";
            }
            else{
                cout<<"El numero es impar";
            }
            break;
        case 3:
            cout<<"\n\nSaliendo";
            break;
    }
    return 0;
}