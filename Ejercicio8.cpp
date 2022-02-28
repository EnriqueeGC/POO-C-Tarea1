#include<iostream>
using namespace std;
//Una tabla de multiplicar
void ejercicio8(){
	int tabla = 1, multiplicar=0;
	cout<<"Ingrese Tabla: ";
	cin>>tabla;
	
	for(int i=1;i<=10;i++){
		multiplicar= tabla * i;
		cout<<tabla<<" X "<<i<<" = "<<multiplicar<<endl;
	}
	
	system("pause");
	system("cls");
}