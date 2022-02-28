#include<iostream>
using namespace std;
//Conversión de números decimales a binario
void ejercicio11(){
	int a;
	short binario[8];
	cout<<"Ingresa el numero a convertir: ";
	cin>>a;
	for(int i=0; i < 8; i++){
		binario[i]=a%2;
		a /=2;
	}
	for (int i=8; i>= 0; i--){
		cout<<binario[i];
	}
	cout<<endl;
	system("pause");
	system("cls");
}