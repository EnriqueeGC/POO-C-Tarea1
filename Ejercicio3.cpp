#include<iostream>
using namespace std;
//Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa
void ejercicio3(){
	double a, r, opc;
	cout<<"********CONVERTIDOR*********\n";
	cout<<"1. Kilometros a millas\n";
	cout<<"2. Millas a kilometros\n";
	cout<<"3. Metros a pulgadas\n";
	cout<<"4. Pulgadas a metros\n";
	cout<<"5. Libras a kilos\n";
	cout<<"6. Kilos a libras\n";
	cout<<"Selecciona una opcion: ";
	cin>>opc;
	if (opc==1){
		system("cls");
		cout<<"Ingresa Kilometros: ";
		cin>>a;
		r=a*0.621371;
		cout<<"Equivale a "<<r<<" Millas\n";	
	}
	else if(opc==2){
		system("cls");
		cout<<"Ingrese Millas: ";
		cin>>a;
		r=a*1.60934;
		cout<<"Equivale a "<<r<<" Kilometros\n";
	}
	else if(opc==3){
		system("cls");
		cout<<"Ingrese Metros: ";
		cin>>a;
		r=a*39.37;
		cout<<"Equivale a "<<r<<" Pulgadas\n";
	}
	else if(opc==4){
		system("cls");
		cout<<"Ingrese Pulgadas: ";
		cin>>a;
		r=a*0.0254;
		cout<<"Equivale a "<<r<<" Metros\n";
	}
	else if(opc==5){
		system("cls");
		cout<<"Ingrese libras: ";
		cin>>a;
		r=a*0.454;
		cout<<"Equivale a "<<r<<" Kilogramos\n";
	}
	else if(opc==6){
		system("cls");
		cout<<"Ingrese Kilos: ";
		cin>>a;
		r=a*2.205;
		cout<<"Equivale a "<<r<<" Libras\n";
	}
	system("pause");
	system("cls");
}