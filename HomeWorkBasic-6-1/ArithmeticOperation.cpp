#include <cmath>
#include <iostream>

double Sum(double first, double second) {
	return first + second;
}

double Subtraction(double first, double second) {
	return first - second;
}

double Multiplication(double first, double second) {
	return first * second;
}

double Division(double first, double second) {
	return first / second;
}

double Exponentiation(double first, double second) {
	return pow(first, second);
}

void Print(double first, double second, int operation) {
	std::cout << first;
	switch (operation)
	{
	case 1: std::cout << " + "; break;
	case 2: std::cout << " - "; break;
	case 3: std::cout << " * "; break;
	case 4: std::cout << " / "; break;
	case 5: std::cout << " в степени "; break;
	}
	std::cout << second;
	std::cout << " = ";
}