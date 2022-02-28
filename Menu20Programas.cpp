#include<iostream>
#include"Ejercicio1.cpp" //Suma, Resta, Multiplicacion y Division de dos numeros
#include"Ejercicio2.cpp" //Determinar si un numero es par o impar
#include"Ejercicio3.cpp" //Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa
#include"Ejercicio4.cpp" //Determinar si una palabra o un numero es palindromo.
#include"Ejercicio5.cpp" //Conversión de numeros arábigos a romanos
#include"Ejercicio6.cpp" //Convertir numeros enteros a letras
#include"Ejercicio7.cpp" //Conversion de numeros enteros con decimal a letras
#include"Ejercicio8.cpp" //Una tabla de multiplicar
#include"Ejercicio9.cpp" //Todas las tablas de multiplicar del 1 al 10
#include"Ejercicio11.cpp" //Conversion de numeros decimales a binario
#include"Ejercicio14.cpp" //Mover un punto por toda la consola
#include"Ejercicio15.cpp" //Simulación de un Cajero (Autómata)
#include"Ejercicio16.cpp" //Calcular la hipotenusa
#include"Ejercicio17.cpp" //Grabar registros en archivos
#include"Ejercicio18.cpp" //Calcular calorias y macronutrientes de manteninmiento de una persona
#include"Ejercicio19.cpp" //Calcular los años de un perro en edad humana
#include"Ejercicio20.cpp" //litros de agua al dia segun el peso
using namespace std;
main(){
	int opc;
	do{
	cout<<"________________________________EJERCICIO 20 PROGRAMAS______________________________\n\n";
	cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros\n";
	cout<<"2. Determinar si un numero es par o impar\n";
	cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa\n";
	cout<<"4. Determinar si una palabra o un numero es palindromo\n";
	cout<<"5. Conversion de numeros arabigos a romanos\n";
	cout<<"6. Convertir numeros enteros a letras\n";
	cout<<"7. Conversion de numeros enteros con decimal a letras\n";
	cout<<"8. Una tabla de multiplicar\n";
	cout<<"9. Todas las tablas de multiplicar del 1 al 10\n";
	cout<<"11. Conversion de números decimales a binario\n";
	cout<<"14. Mover un punto en toda la pantalla\n";
	cout<<"15. Simulación de un Cajero (Automata)\n";
	cout<<"16. Calcular la hipotenusa\n";
	cout<<"17. Grabar registros en archivos\n";
	cout<<"18. Calcular calorias y macronutrientes de manteninmiento de una persona\n";
	cout<<"19. Cuantos anos tiene un perro en edad humana\n";
	cout<<"20. Cuantos litros de agua al dia segun el peso\n";
	cout<<"\n\t\tSelecciona la Opcion que Deseas: ";
	cin>>opc;
	system("cls");
	switch(opc){
		case 1: ejercicio1();
			break;
		case 2: ejercicio2();
			break;
		case 3: ejercicio3();
			break;
		case 4: ejercicio4();
			break;
		case 5: ejercicio5();
			break;
		case 6: ejercicio6();
			break;
		case 7: ejercicio7();
			break;
		case 8: ejercicio8();
			break;
		case 9: ejercicio9();
			break;
		case 11: ejercicio11();
			break;
		case 14: ejercicio14();
			break;
		case 15: ejercicio15();
			break;
		case 16: ejercicio16();
			break;
		case 17: ejercicio17();
			break;
		case 18: ejercicio18();
			break;
		case 19: ejercicio19();
			break;
		case 20: ejercicio20();
			break;
		default:
        cout<<"Opcion Incorrecta";
		}
	}while (opc!=21);
	return 0;
	}	
