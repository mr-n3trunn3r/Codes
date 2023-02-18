/*Realice un programa que calcule la descomposición en factores primos de un número entero.
 Por ejemplo: 20=2*2*5*/

 /*
 20|2
 10|2
 5|5
 1
 */

 #include <iostream>

 using namespace std;

 int main(){
    int n;
    cout<<"Ingresa un número: ";
    cin>n;
    for (int i=2; i>1;i++){
        while(n%i=0){
            cout<<i<<" ";
            numero/=i;
        }
        if(n==1){
            break;
        }
    }
    return 0;
 }