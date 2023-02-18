/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un 
periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, 
la temperatura más baja y la más alta.*/

#include <iostream>

using namespace std;

int main(){
    float nmuestra=1,temperatura=0,mayor=0,menor=999999,suma=0;
    int reloj;
    for(reloj=0;reloj<=24;reloj=reloj+=4){
    if(reloj%4==0){
        cout<<"\n Son las "<<reloj<<". Muestra "<<nmuestra<<": ";
        cin>>temperatura;
        suma=suma+temperatura;
        if(temperatura>mayor){
            mayor=temperatura;
        }
        else if(temperatura<menor){
            menor=temperatura;
        }
    }
    cout<<endl;
    }
    cout<<"\nLa temperatura mayor es: "<<mayor<<endl;
    cout<<"\nLa temperatura menorr es: "<<menor<<endl;
    cout<<"La media de temperatura es: "<<suma/6;
    return 0;
}