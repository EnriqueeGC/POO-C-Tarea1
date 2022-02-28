#include<iostream>
using namespace std;
//Todas las tablas de multiplicar del 1 al 10
void ejercicio9(){
	int inicio=1,fin = 10,multiplicar = 0;

for (int i=inicio;i<=fin;i++){
	
	for(int ii=1;ii<=10;ii++){
			multiplicar = i * ii;
			cout<<i<< " X "<<ii<<" = "<<multiplicar<<endl;

	}
	cout<<endl;
}
	system("pause");
	system("cls");
}