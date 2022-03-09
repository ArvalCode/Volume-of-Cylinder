#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <Windows.h>

int main() {
	std::string input;
	float volume, height, radius;
	float pie = 3.14;

	std::cout << "Cylinder (Press Radius/Voume/Height)\n";
	std::cin >> input;
	
	if (input == "Radius") {
		system("cls");
		std::cout << "Volume: ";
		std::cin >> volume;

		std::cout << "\nHeight: ";
		std::cin >> height;

		std::cout << "\n\n\n Radius = " << sqrt(volume / (height * pie));
	}

	else if (input == "Volume") {
		system("cls");
		std::cout << "Radius: ";
		std::cin >> radius;

		std::cout << "\Height: ";
		std::cin >> height;

		std::cout << "Volume: " << pie * pow(radius, 2) * height;
	}
	else if (input == "Height") {
		system("cls");
		std::cout << "Radius: ";
		std::cin >> radius;

		std::cout << "\nVolume: ";
		std::cin >> volume;

		std::cout << "Height: " << volume / (pie * pow(radius, 2));
	}
	return 0;
}
