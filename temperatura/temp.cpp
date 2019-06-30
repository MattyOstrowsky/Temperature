#include "temp.h"
#include <vector>

Temperatura::Temperatura(double _a,double _b, double _c, double _d)
{
	a = _a;
	b = _b;
	c = _c;
	d = _d;
	
}
Temperatura::~Temperatura() 
{
}
void Temperatura::ustaw_temp(double _a, double _b,double _c, double _d, int xx, int yy)
{
	a = _a;
	b = _b;
	c = _c;
	d = _d;
	x = xx;
	y = yy;
}
void Temperatura::srednia_temp()
{
	temperatura = (a + b + c + d) / 4;
}
std::vector<double> Temperatura::get_vector()
{
	std::vector < double > dane;
	dane.push_back(temperatura);
	dane.push_back(x);
	dane.push_back(y);
	dane.push_back(a);
	dane.push_back(b);
	dane.push_back(c);
	dane.push_back(d);
	return dane;
}
