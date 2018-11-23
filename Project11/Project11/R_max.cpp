#include"t_vuelo.h"
#include <cmath>



float R_max(float theta, float Vo){      // distancia maxima del proyectil en el eje x
	float R, g = 9.8;
	R = (pow(Vo, 2)*sin(2 * theta)) / (g);
	return R;
}