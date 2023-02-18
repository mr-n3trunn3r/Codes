/*La calificación final de un estudiante es el promedio de 3 notas
• 30% de prácticas
• 60% Teoría
• 10% Participación
Escriba un programa que calcule la nota final:*/

#include <iostream>

using namespace std;

int main(){
    float practica,teoria,participacion,total;
    cout<<"Calificación de prácticas (30%): ";
    cin>>practica;
    practica=practica*0.30;
    cout<<"Calificación de teoría (60%): ";
    cin>>teoria;
    teoria=teoria*0.60;
    cout<<"Calificación de participación (10%): ";
    cin>>participacion;
    participacion=participacion*0.10;
    total=participacion+teoria+practica;
    cout.precision(2);
    cout<<"La calificación final es: "<<total;
    return 0;
}