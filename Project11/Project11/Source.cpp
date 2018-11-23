#include <iostream>
#include <string>
#include <cmath>
#include "Proyectil.h"
#include "t_vuelo.h"
#include "h_max.h"
#include "R_max.h"
#include "posicion.h"
using namespace std;

float angulo, Velocidad, h, R, p, pos[2]; //variables a utilizar
float tiempo;
float g = 9.8;



//funcion de impresion de datos calculados a consola
void Resultados(float t, float h, float R, float x, float y){
	cout << "El alcance del proyectil es: " << R << " \n";
	cout << "La altura maxima del proyectil es: " << h << " \n";
	cout << "El tiempo de vuelo del proyectil es: " << t << " \n";
	cout << "la posicion del proyectil en el tiempo previamente definido es:" << x << " , " << y << "\n";

}

int main() { //funcion principal con solicitud
	
	cout << "Empecemos a jugar: \n";
	proyectil objeto;
	angulo=objeto.Read_ang();
	system("cls");
	Velocidad=objeto.Read_Vo();
	system("cls");
	p=objeto.Read_p();
	system("cls");
	h=objeto.Read_h();
	system("cls");
	objeto.set_proyectil(Velocidad, angulo, p, h);
	float Vx, Vy,t1,angulo1;

	while (1){
		
		tiempo = t_vuelo(angulo, Velocidad);
		h = h+h_max(angulo, Velocidad);
		R = R_max(angulo, Velocidad);
		posicion(angulo, Velocidad, tiempo, pos);
		Resultados(tiempo, h, R, pos[0], pos[1]);
		Vx = Velocidad*cos(angulo)*tiempo;
		Vy = Velocidad*sin(angulo)*tiempo+g*tiempo;
		angulo1 = atan(Vy / Vx);
		Velocidad = sqrt(pow(Vx, 2) + pow(Vy, 2));
		if (pos[1] != 0){
			angulo = angulo1;
			tiempo = tiempo+t_vuelo(angulo, Velocidad);
			R =R+ R_max(angulo, Velocidad);
			posicion(angulo, Velocidad, tiempo, pos);
			Vx = Velocidad*cos(angulo)*tiempo;
			Vy = Velocidad*sin(angulo)*tiempo + g*tiempo;
			angulo1 = atan(Vy / Vx);
			Velocidad = sqrt(pow(Vx, 2) + pow(Vy, 2));
		}
		else
		{
			break;
		}

	}
	
	system("pause");
	return 0;
}