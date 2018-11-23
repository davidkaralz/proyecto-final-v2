#include "Proyectil.h"


float proyectil::Read_ang(){
	cout << "Ingrese el angulo de lanzamiento entre 0 y 90: \n";
	cin >> angulo;
	while ((angulo<0) || (angulo>90)){
		system("cls");
		cout << "ANGULO INVALIDO!\nIngrese el angulo de lanzamiento entre 0 y 90: \n";
		cin >> angulo;
	}
	angulo = (angulo*3.1416) / 180;
	return angulo;
}
float proyectil::Read_Vo(){
	cout << "Ingrese la velocidad inicial mayor a 0: \n";
	cin >> Vo;
	while (Vo<0){
		system("cls");
		cout << "VELOCIDAD INICIAL NO VALIDA!\nIngrese un valor mayor a 0: \n";
		cin >> Vo;
	}
	return Vo;
}

float proyectil::Read_p(){
	int op;
	cout << "Elija uno de los siguientes materiales\n1:Oro\n2:Hierro\n3:Cobre\n4:Aluminio\n5:Diamante\n";
	cin >> op;
	while ((op<1)||(op>5)){
		system("cls");
		cout << "OPCION NO VALIDA!\nElija uno de los siguientes materiales\n1:Oro\n2:Hierro\n3:Cobre\n4:Aluminio\n5:Diamante\n";
		cin >> op;
	}
	switch (op){
	case 1:
		densidad = 19300;
		break;
	case 2:
		densidad = 7900;
		break;
	case 3:
		densidad = 8900;
		break;
	case 4:
		densidad = 2700;
		break;
	case 5:
		densidad = 3500;
		break;
	default:
		break;
	}
	return densidad;
}
float proyectil::Read_h(){
	cout << "Ingrese la altura del lanzamiento: \n";
	cin >> altura;
	while (altura<0){
		system("cls");
		cout << "ALTURA INVALIDA!\nIngrese una altura mayor que 0: \n";
		cin >> altura;
	}
	return altura;
}
void proyectil::set_proyectil(float vel, float ang, float dens, float alto){
	Vo = vel;
	angulo = ang;
	densidad = dens;
	altura = alto;
}
