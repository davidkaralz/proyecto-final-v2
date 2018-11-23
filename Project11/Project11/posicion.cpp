#include"t_vuelo.h"
#include <cmath>



void posicion(float theta, float Vo, float tiempo, float *pos) //posiscion solicitada por el usuario
{
	float x, y,g=9.8;
	pos[0] = Vo*cos(theta)*tiempo;
	pos[1] = (Vo*sin(theta)*tiempo) - 0.5*(g*pow(tiempo, 2));
}