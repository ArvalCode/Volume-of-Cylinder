#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

int main() {
	float pie = 3.14;
	float r;
	float h;

	std::cout << "Radius : ";
	std::cin >> r;

	std::cout << "\nHeight : ";
	std::cin >> h;

	float r2 = pow(r, 2);

	std::cout << "\nVolume of Cylinder = ";
	std::cout << pie * r2 * h;
}
