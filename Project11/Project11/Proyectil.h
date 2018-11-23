#ifndef Proyectil_HPP
#define Proyectil_HPP

#include <iostream>
using namespace std;

class proyectil{
private:
	float Vo, angulo, altura, densidad;
	float alcance, t_vuelo, altura_max;

public:

	float Read_ang();
	float Read_Vo();
	float Read_p();
	float Read_h();
	void set_proyectil(float, float, float, float);
};

#endif