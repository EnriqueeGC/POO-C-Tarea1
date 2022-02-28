#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//Grabar registros en archivos
void ejercicio17(){
	FILE *archivo;
	archivo=fopen("archive.dat", "wt");//abrirlo con at que significa agregar registros
	
	struct tipo_registro
	{
		int no_prod;
		char descrip[30];
		int cantidad;
		float precio;
	};
	struct tipo_registro Registro;
	cout<<"Ingrese el numero del producto: ";
	cin>>Registro.no_prod;
	cout<<"Ingrese el nombre del producto: ";
	cin>>Registro.descrip;
	cout<<"Ingrese la cantidad del producto: ";
	cin>>Registro.cantidad;
	cout<<"Ingrese el precio del producto: ";
	cin>>Registro.precio;
	fwrite(&Registro,sizeof(Registro),1,archivo);
	fclose(archivo);
	
	system("pause");
	system("cls");
}