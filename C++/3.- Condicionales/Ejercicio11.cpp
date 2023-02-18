/*Hacer un cajero que simule un cajero automatico con saldo inicial de 1000 dolares*/

#include <iostream>

using namespace std;

int main(){
    int sinicial =1000, menu, ingreso, retiro;
    cout<<"\t Bienvendio al cajero automatico\n"<<"1.- Ingresar dinero en cuenta\n"<<"2.- Retirar dinero en cuenta \n"<<"3.- Salir\n"<<"Opcion: ";
    cin>>menu;
    cout<<endl;
    
    switch(menu){
        case 1:
            cout<<"Cantidad de dinero a ingresar: ";
            cin>>ingreso;
            sinicial=sinicial+ingreso;
            cout<<"\nSaldo en cuenta: "<<sinicial;
            break;
        case 2:
            cout<<"Cantidad de dinero a retirar: ";
            cin>>retiro;
            if (retiro<sinicial){
                sinicial=sinicial-retiro;
            }
            else {
                cout<<"\nNo hay saldo suficiente para retirar";
            }
            cout<<"\nSaldo en cuenta: "<<sinicial;
            break;
        case 3:
            cout<<"Saliendo";
            break;
        default:
            cout<<"Opcion Invalida";
            break;
    }
    return 0;
}