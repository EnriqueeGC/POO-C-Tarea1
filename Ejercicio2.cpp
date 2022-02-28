#include<iostream>
using namespace std;
// Determinar si un numero es par o impar
void ejercicio2(){
	int a;
	cout<<"Ingrese un numero: ";
	cin>>a;
	if (a%2==0){
		cout<<a<<" Es Numero Par\n";
	}else{ 
		cout<<a<<"Es Numero Impar\n";
	}	
	system("pause");
	system("cls");
}