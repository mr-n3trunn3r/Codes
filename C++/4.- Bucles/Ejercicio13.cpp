/*En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:

   ◇ Alumnos que aprobaron todos los exámenes.
   ◇ Alumnos que aprobaron al menos un examen.
   ◇ Alumnos que aprobaron únicamente el último examen.
Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    float c1,c2,c3,at=0,a1=0,au=0;
    for(int i=1;i<=5;i++){
        cout<<"\t\t\tAlumno "<<i;
        cout<<"\nExamen 1: ";
        cin>>c1;
        cout<<"\nExamen 2: ";
        cin>>c2;
        cout<<"\nExamen 3: ";
        cin>>c3;
        system("cls");
        if(c1>=6 && c2>=6 && c3>=6){
            at++;
        }
        if(c1>=6 || c2>=6 || c3>=6){
            a1++;
        }
        if(c1<6 && c2<6 && c3>=6){
            au++;
        }   
    }
    cout<<"\nAlumnos que aprobaron todos los exámenes: "<<at;
    cout<<"\nAlumnos que aprobaron al menos un examen: "<<a1;
    cout<<"\nAlumnos que aprobaron únicamente el último examen: "<<au;
    return 0;
}