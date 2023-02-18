/*Defina una estructura que sirva para repreentar a una persona. La estructura debe contener dos 
campos: el nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún 
tipo de discapacidad. Realice un programa que dado un vector de personas rellene dos nuevos vectores:
uno que contenga las personas que no tienen ninguna discapacidad y otro que contenfa las personas con 
discapacidad*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct personas{
    char nombre[50];
    bool discapacidad;
}persona[1000];


int main(){
    int opcion,n,posd[1000],posnd[1000],ts=0,tn=0;
    char dis;
    cout<<"\nNúmero de personas: ";
    cin>>n;
    system("cls");
    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"\nNombre: ";
        cin.getline(persona[i].nombre,50,'\n');
        cout<<"\n¿Discapacidad? No(N) Sí(S)";
        cin>>dis;
        if(dis=='S'|| dis=='s'){
            persona[i].discapacidad=true;
            posd[i]=i;
            ts++;
        }
        else if(dis=='N'|| dis=='n'){
            persona[i].discapacidad=false;
            posnd[i]=i;
            tn++;
        }
        system("cls");
    }
    cout<<"\nMostrar: \n1.-Personas con discapacidad1\n2.- Personas sin discapacidad\nOpcion:";
    cin>>opcion;
    if(opcion==1){
        cout<<"\nPersonas con discapacidad:\n";
        for(int i=0;i<ts;i++){
            cout<<"\nNombre"<<persona[posd[i]].nombre;
        }
    }
    else if(opcion==2){
        cout<<"\nPersonas sin discapacidad:\n";
        for(int i=0;i<tn;i++){
            cout<<"\nNombre"<<persona[posnd[i]].nombre;
        }
    }
    else{
        cout<<"\n\nOpcion incorrecta";
    }
    return 0;
}