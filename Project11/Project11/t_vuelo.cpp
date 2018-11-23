#include"t_vuelo.h"
#include <cmath>



float t_vuelo(float theta, float Vo){    //tiempo de vuelo del proyectil
	float g = 9.8,t;
	t = (2 * Vo*sin(theta)) / g;
	return t;
}