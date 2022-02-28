#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
//Simulación de un Cajero (Autamata)
void ejercicio15(){
	string contrasena;
	int estado=0, intentos=0, opc, a=2500, b, r;
	do{
		cout<<"\tCAJERO AUTOMATICO\n";
		cout<<"Ingresa la contrasena de tu tarjeta: ";
		cin>>contrasena;
		if(contrasena!="1234"){
			intentos++;
			cout<<"Contrasena invalida\n";
		}
		else
		estado=1;
	}while(intentos<2&&estado==0);
	
	if(estado==1){
		cout<<"1. Consultar Saldo\n";
		cout<<"2. Retirar Efectivo\n";
		cin>>opc;
		if(opc==1){
			cout<<"Su saldo actual es Q."<<a<<endl;
		}
		if(opc==2){
			cout<<"Ingrese la cantidad a retirar: ";
			cin>>b;
			if(b>a){
				cout<<"No hay saldo suficiente\n";
			}
			r=a-b;
			cout<<"El retiro ha sido exitoso, su saldo es: Q. "<<r<<endl;
		}
	}
	else{
		cout<<"Numero de intentos perimitidos, TARJETA BLOQUEADA\n";
	}
	system("pause");
	system("cls");
}