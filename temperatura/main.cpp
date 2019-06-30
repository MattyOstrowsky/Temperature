#include "temp.h"
#include <iostream>

int main()
{
	int poziomo, pionowo;
	double a, b, c, d;
	std::vector < std::vector < double > > wektor;

	std::cout << "Podaj liczbe wezlow pionowo: ";
	std::cin >> pionowo;
	std::cout << "Podaj liczbe wezlow poziomo: ";
	std::cin >> poziomo;

	for (int i = 1; i <= pionowo; i++) {
		for (int j = 1; j <= poziomo; j++){
			std::cout << "Podaj wartosc temperatury a: ";
			std::cin >> a;
			std::cout << "Podaj wartosc temperatury b: ";
			std::cin >> b;
			std::cout << "Podaj wartosc temperatury c: ";
			std::cin >> c;
			std::cout << "Podaj wartosc temperatury d: ";
			std::cin >> d;
			Temperatura temp;
			temp.ustaw_temp(a, b, c, d, j, i);
			temp.srednia_temp();
			wektor.push_back(temp.get_vector());
		}

	}
	for (size_t i=0; i < wektor.size(); i++) {
		std::cout << "temperatura: ";
		std::cout.width(10);
		std::cout << std::left << wektor[i][0];
		std::cout << " x: ";
		std::cout.width(8);
		std::cout << std::left << wektor[i][1];
		std::cout << " y: ";
		std::cout.width(8);
		std::cout << std::left << wektor[i][2];
		std::cout << " a: ";
		std::cout.width(8);
		std::cout << std::left << wektor[i][3];
		std::cout << " b: ";
		std::cout.width(8);
		std::cout << std::left << wektor[i][4];
		std::cout << " c: ";
		std::cout.width(8);
		std::cout << std::left << wektor[i][5];
		std::cout << " d: ";
		std::cout.width(8);
		std::cout << std::left << wektor[i][6];
		std::cout << std::endl;
	}
	char k = 'n';
	std::cout << "wcisnij t aby zakonczyc: ";
	while (k != 't'){
		std::cin >> k;
	};
	
	return 0;
}