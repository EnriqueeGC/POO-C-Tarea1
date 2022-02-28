#include<iostream>
using namespace std;
//Calcular cuantos litros de agua tomar al dia segun el peso
void ejercicio20(){
	float a, b, c;
	char s;
	cout<<"Ingresa tu peso en Kg: ";
	cin>>a;
	cout<<"Realizas actividad fisica (s/n):";
	cin>>s;
	if(s=='s'){
		b=a*40;
		c=b/1000;
		cout<<"Debes tomar "<<c<<" Litros de agua al dia\n";	
	}else{
		b=a*35;
		c=b/1000;
		cout<<"Debes tomar "<<c<<" Litros de agua al dia\n";
	}
	
	system("pause");
	system("cls");
}