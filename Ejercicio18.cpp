#include<iostream>
using namespace std;
//CALCULAR LAS CALORIAS DE MANTENIMIENTO Y MACRONUTRIENTES DE UNA PERSONA POR SU PESO, EDAD, GENERO, ACTIVIDAD FISICA, ESTATURA
void ejercicio18(){
	float peso, altura, proteina, carbohidratos, carbos, grasas, calorias, kcal, dat;
	int edad, opc;
	char m, s;
	cout<<"Para generar tus calorias de mantenimiento y tus macronutrientes\n";
	cout<<"ingresa los siguientes datos\n";
	cout<<"Ingresa tu peso en kg: ";
	cin>>peso;
	cout<<"Ingresa tu altura en cm: ";
	cin>>altura;
	cout<<"Ingresa tu edad: ";
	cin>>edad;
	cout<<"Genero m/f: ";
	cin>>m;
	if (m=='m')
	{
		calorias=10*peso+(6.25*altura)-(5*edad)+5;
		cout<<"Realizas actividad fisica (s/n): ";
		cin>>s;
		if (s=='s'){
			cout<<"\nTu actividad fisica es: \n";
			cout<<"1. Ligera (entrenamiento de 1-2 dias)\n";
			cout<<"2. Moderada (entrenamiento de 3-5 dias)\n";
			cout<<"3. Intensa (entrenamiento de 6 o mas dias)\n";
			cout<<"Selecciona una opcion: ";
			cin>>opc;
			if(opc==1){
				kcal=calorias*1.375;
				cout<<"Tus calorias de mantenimiento son: "<<kcal<<" kcal\n";
				proteina=peso*2.2;
				cout<<"Tus requerimientos de proteina son "<<proteina<<" grs\n";
				dat=kcal*0.25;
				grasas=dat/9;
				cout<<"Tus requeriemtos de grasas son "<<grasas<<" grs\n";
				carbos=kcal-proteina*4+grasas;
				carbohidratos=carbos/4;
				cout<<"Tus requerimientos de carbohidratos son: "<<carbohidratos<<" grs\n";
			}if(opc==2){
				kcal=calorias*1.55;
				cout<<"Tus calorias de mantenimiento son: "<<kcal<<" kcal\n";
				proteina=peso*2.2;
				cout<<"Tus requerimientos de proteina son "<<proteina<<" grs\n";
				dat=kcal*0.25;
				grasas=dat/9;
				cout<<"Tus requeriemtos de grasas son "<<grasas<<" grs\n";
				carbos=kcal-proteina*4+grasas;
				carbohidratos=carbos/4;
				cout<<"Tus requerimientos de carbohidratos son: "<<carbohidratos<<" grs\n";
			}if(opc==3){
				kcal=calorias*1.725;
				cout<<"Tus calorias de mantenimiento son: "<<kcal<<" kcal\n";
				proteina=peso*2.2;
				cout<<"Tus requerimientos de proteina son "<<proteina<<" grs\n";
				dat=kcal*0.25;
				grasas=dat/9;
				cout<<"Tus requeriemtos de grasas son "<<grasas<<" grs\n";
				carbos=kcal-proteina*4+grasas;
				carbohidratos=carbos/4;
				cout<<"Tus requerimientos de carbohidratos son: "<<carbohidratos<<" grs\n";
			}
		}else{
			cout<<"Tus calorias de mantenimiento son: "<<calorias<<" kcal\n";
		}
	}if(m=='f'){
		calorias=10*peso+(6.25*altura)-(5*edad)-161;
		cout<<"Realizas actividad fisica (s/n): ";
		cin>>s;
		if (s=='s'){
			cout<<"\nTu actividad fisica es: \n";
			cout<<"1. Ligera (entrenamiento de 1-2 dias)\n";
			cout<<"2. Moderada (entrenamiento de 3-5 dias)\n";
			cout<<"3. Intensa (entrenamiento de 6 o mas dias)\n";
			cout<<"Selecciona una opcion: ";
			cin>>opc;
			if(opc==1){
				kcal=calorias*1.375;
				cout<<"Tus calorias de mantenimiento son: "<<kcal<<" kcal\n";
				proteina=peso*2.2;
				cout<<"Tus requerimientos de proteina son "<<proteina<<" grs\n";
				dat=kcal*0.25;
				grasas=dat/9;
				cout<<"Tus requeriemtos de grasas son "<<grasas<<" grs\n";
				carbos=kcal-proteina*4+grasas;
				carbohidratos=carbos/4;
				cout<<"Tus requerimientos de carbohidratos son: "<<carbohidratos<<" grs\n";
			}if(opc==2){
				kcal=calorias*1.55;
				cout<<"Tus calorias de mantenimiento son: "<<kcal<<" kcal\n";
				proteina=peso*2.2;
				cout<<"Tus requerimientos de proteina son "<<proteina<<" grs\n";
				dat=kcal*0.25;
				grasas=dat/9;
				cout<<"Tus requeriemtos de grasas son "<<grasas<<" grs\n";
				carbos=kcal-proteina*4+grasas;
				carbohidratos=carbos/4;
				cout<<"Tus requerimientos de carbohidratos son: "<<carbohidratos<<" grs\n";
			}if(opc==3){
				kcal=calorias*1.725;
				cout<<"Tus calorias de mantenimiento son: "<<kcal<<" kcal\n";
				proteina=peso*2.2;
				cout<<"Tus requerimientos de proteina son "<<proteina<<" grs\n";
				dat=kcal*0.25;
				grasas=dat/9;
				cout<<"Tus requeriemtos de grasas son "<<grasas<<" grs\n";
				carbos=kcal-proteina*4+grasas;
				carbohidratos=carbos/4;
				cout<<"Tus requerimientos de carbohidratos son: "<<carbohidratos<<" grs\n";
			}
		}else{
			cout<<"Tus calorias de mantenimiento son: "<<calorias<<" kcal\n";
		}
	}
	
	system("pause");
	system("cls");
}
