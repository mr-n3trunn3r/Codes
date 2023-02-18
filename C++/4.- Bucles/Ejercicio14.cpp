/*Realice un porgrama que solicite al usuario que piense un número entero entre el 1 y el 100. 
l programa debe generar un número aleatorio en ese mismo rango [1-100], e indicarle al usuario 
si el número que digito es menor o mayor hasta que lo adivine, y por ultimo mostrarle el número 
de intentos que le llevo.*/

#include <iostream>
#include <time.h> //Usada para funciones de tiempo

using namespace std;

int main(){
    int n=0,random=0,contador=0;
    srand(time(NULL)); //Función para crear un número aleatorio
    random=1+rand()%(101-1); //Establece el limite inferior y superior
    do{
        contador++;
        cout<<"\nIngresa un número";
    	cin>>n;

        if(n==random){
            cout<<"\nAdivinaste el número";
        }
        else{
            cout<<"\nVuelve a intentar";
            if(n>random){
                cout<<"\nDigita un número menor";
            }
            else if(n<random){
                cout<<"<\nDigita un número mayor";
            }
        }
    }while(n!=random);
    cout<<"\nNúmero de intentos: "<<contador;
    return 0;
}