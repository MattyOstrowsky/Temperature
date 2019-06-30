#pragma once
#include <vector>

class Temperatura {

	double temperatura;
	double a;
	double b;
	double c;
	double d;
	int x, y;
	
public:
	void ustaw_temp(double , double , double ,double,int,int);
	void srednia_temp();
	Temperatura(double=300,double=300,double=300,double=300);
	std::vector<double> get_vector();
	~Temperatura();
};