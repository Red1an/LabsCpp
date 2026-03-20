#include "Complex.h"

Complex::Complex() : attr() {}

Complex::Complex(double real, double imagine) : attr(real, imagine) {}

Complex Complex::operator-(const Complex& other) const {
	double newReal = attr.GetReal() - other.attr.GetReal();
	double newImagine = attr.GetImagine() - other.attr.GetImagine();
	return Complex(newReal, newImagine);
}

Complex Complex::operator/(Complex& other) const {
	double a = attr.GetReal();
	double b = attr.GetImagine();
	double c = other.attr.GetReal();
	double d = other.attr.GetImagine();
	double newReal = (a * c + b * d) / (c * c + d * d);
	double newImagine = (b * c - a * d) / (c * c + d * d);
	return Complex(newReal, newImagine);
}

void Complex::init(double a, double b) {
	attr = Attributes(a, b);
}

void Complex::input() {
	std::cout << "Enter real and imaginary part: ";
	std::cin >> attr;
}
void Complex::print(std::string a) const {
	std::cout << a << ": " << attr << std::endl;
}