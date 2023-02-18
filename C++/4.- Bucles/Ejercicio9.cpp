/*Escriba un porgrama que calcule el valor de: 1!+2!+3!+...+n!*/

#include <iostream>

using namespace std;

int main(){
    int n,rf=1,rs=0,rt=0;
    cout<<"Ingresa el valor: ";
    cin>>n;
        for (int i=1;i<=n;i++){
        	rf=rf*i;
            rs=rs+rf;
            if(i!=n){
            cout<<i<<"! +";
            }
            else{
            cout<<i<<"! = ";
        }
        }   
    cout<<rs;
    return 0;
}