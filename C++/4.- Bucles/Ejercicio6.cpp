/*Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos. 
Sin utilizar la función pow*/

#include <iostream>

using namespace std;

int main(){
    int x,xtotal=1,y,r;
    cout<<"Ingresa x: ";
    cin>>x;
    cout<<"\nIngresa y: ";
    cin>>y;
    if(x<0 && y<0){
        cout<<"\nValores erroneos";
    }
    else{
        for (int i=1;i<=y;i++){
            xtotal=xtotal*x;
        }
    }
    cout<<"\n"<<x<<" elevado a "<<y<<" = "<<xtotal;
    return 0;
}
