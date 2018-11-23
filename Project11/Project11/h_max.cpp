#include"h_max.h"
#include <cmath>



float h_max(float theta, float Vo){      //altura maxima del proyectil
	float h, g=9.8;
	h = (pow((Vo*sin(theta)), 2)) / (2 * g);
	return h;
}