#include<iostream>
#include<conio.h>
using namespace std;
//Conversion de numeros enteros con decimal a letras
void ejercicio7(){
	double a;
	cout<<"Ingrese un numero entero de 1 a 9999.99: ";
	cin>>a;
	if((a<.01)||(a>9999.99)) cout<<"Numero invalido\n";
	else
	{
		if(a>=9000){cout<<"NUEVEMIL ";a=a-9000;}
		else if(a>=8000){cout<<"OCHOMIL ";a=a-8000;}
		else if(a>=7000){cout<<"SIETEMIL ";a=a-7000;}
		else if(a>=6000){cout<<"SEISMIL ";a=a-6000;}
		else if(a>=5000){cout<<"CINCOMIL ";a=a-5000;}
		else if(a>=4000){cout<<"CUATROMIL ";a=a-4000;}
		else if(a>=3000){cout<<"TRESMIL";a=a-3000;}
		else if(a>=2000){cout<<"DOSMIL ";a=a-2000;}
		else if(a==1000){cout<<"MIL ";a=a-1000;}
		if(a>=900){cout<<"NOVECIENTOS ";a=a-900;}
		else if(a>=800){cout<<"OCHOCIENTOS ";a=a-800;}
		else if(a>=700){cout<<"SETECIENTOS ";a=a-700;}
		else if(a>=600){cout<<"SEISCIENTOS ";a=a-600;}
		else if(a>=500){cout<<"QUINIENTOS ";a=a-500;}
		else if(a>=400){cout<<"CUATROCIENTOS ";a=a-400;}
		else if(a>=300){cout<<"TRESCIENTOS ";a=a-300;}
		else if(a>=200){cout<<"DOSCIENTOS ";a=a-200;}
		else if(a>=100){cout<<"CIENTO ";a=a-100;}
		else if(a==100){cout<<"CIEN";a=a-100;}
		if(a>90){cout<<"NOVENTA Y ";a=a-90;}
        if(a==90){cout<<"NOVENTA"  ;a=a-90;}  
        if(a>80){cout<<"OCHENTA Y " ;a=a-80;}
        if(a==80){cout<<"OCHENTA"  ;a=a-80;}
        if(a>70){cout<<"SETENTA Y " ;a=a-70;}
        if(a==70){cout<<"SETENTA"  ;a=a-70;}
        if(a>60){cout<<"SESENTA Y " ;a=a-60;}
        if(a==60){cout<<"SESENTA"  ;a=a-60;}
        if(a>50){cout<<"CINCUENTA Y " ;a=a-50;}
        if(a==50){cout<<"CINCUENTA"  ;a=a-50;}
        if(a>40){cout<<"CUARENTA Y ";a=a-40;}
        if(a==40){cout<<"CUARENTA" ;a=a-40;}
        if(a>30){cout<<"TREINTA Y ";a=a-30;}
        if(a==30){cout<<"TREINTA";a=a-30;}
        if(a>20){cout<<"VEINTI";a=a-20;}
        if(a==20){cout<<"VEINTE";a=a-20;}
        if(a>=16){cout<<"DIECI";a=a-10;}
        else if(a==15){cout<<"QUINCE";a=a-15;}
        else if(a==14){cout<<"CATORCE";a=a-14;}
        else if(a==13){cout<<"TRECE";a=a-13;} 
        else if(a==12){cout<<"DOCE";a=a-12;}
        else if(a==11){cout<<"ONCE";a=a-11;}
        else if(a==10){cout<<"DIEZ";a=a-10;}      
        if(a==9){cout<<"NUEVE";a=a-9;}
        if(a==8){cout<<"OCHO";a=a-8;}
        if(a==7){cout<<"SIETE";a=a-7;}
        if(a==6){cout<<"SEIS";a=a-6;}
        else if(a==5){cout<<"CINCO";a=a-5;}
        else if(a==4){cout<<"CUATRO";a=a-4;}
        else if(a==3){cout<<"TRES";a=a-3;}
        else if(a==2){cout<<"DOS";a=a-2;}
        else if(a==1){cout<<"UNO";a=a-1;}
        if(a==.90){cout<<" PUNTO NOVENTA";a=a-.90;}
        if(a>=.90){cout<<" PUNTO NOVENTA Y ";a=a-.90;}
        
	}
	
	cout<<endl;
	cin.ignore();
	system("pause");
	system("cls");
}