/*Encontrar el mayor de dos números utilizando una función*/
#include <iostream>

using namespace std;

//Prototipo de función
int encontrarMax(int x,int y);


int main(){
	int n1,n2,mayor;
	cout<<"\nDigita un número: ";
	cin>>n1;
	cout<<"\nDigita otro número: ";
	cin>>n2;
	cout<<endl;
	mayor=encontrarMax(n1,n2);
	cout<<"El mayor es el número: "<<mayor;
	return 0;
}

//Definición de función
int encontrarMax(int x,int y){
	int max;
	if(x>y){
	max=x;
	}
	else{
	max=y;
	}
	return max;
}
