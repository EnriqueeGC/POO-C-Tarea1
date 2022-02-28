#include<iostream>
#include<cstring>
using namespace std;
//Determinar si una palabra o un número es palíndromo.
void ejercicio4(){
	char palabra[50], copia[50];
	cout<<"Ingrese palabra o numero: ";
	cin>>palabra;
	
	for(int i=(strlen(palabra)-1);i>=0;i--){
		copia[strlen(palabra)-1-i]=palabra[i];
	}
	copia[strlen(palabra)]='\0';
	if(strcmp(palabra,copia)==0){//Comparacion de cadenas
		cout<<"Es palindroma\n";
	}else{
		cout<<"La palabra no es palindroma\n";
	}
	system("pause");
	system("cls");
}