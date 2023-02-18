/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. 
La estructura debe tener 3 campos: horas, minutos y segunfos. 
Escriba un programa que dada n etapas calcule el tiempo total empleado en correr todas las etapas.*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct tiempos{
    int horas;
    int minutos;
    int segundos;
}tiempo[1000];

int main(){
    int tseg=0,tmin=0,thor=0,n;

    cout<<"\nCantidad de etapas: ";
    cin>>n;
    system("cls");
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\tEtapa "<<i+1;
        cout<<"\nHoras: ";
        cin>>tiempo[i].horas;
        thor+=tiempo[i].horas;
        cout<<"\nMinutos: ";
        cin>>tiempo[i].minutos;
        tmin+=tiempo[i].minutos;
        if(tiempo[i].minutos>=60){
            tmin-=60;
            thor++;
        }
        cout<<"\nSegundos:";
        cin>>tiempo[i].segundos;
        tseg+=tiempo[i].segundos;
        if(tiempo[i].segundos>=60){
            tseg-=60;
            tmin++;
        }
        system("cls");
    }
    cout<<"\n\nTiempo total empleado: ";
    cout<<"\n"<<thor<<":"<<tmin<<":"<<tseg;
    return 0;
}