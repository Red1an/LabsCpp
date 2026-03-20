#include "Attributes.h"

Attributes::Attributes() {
	this->real = 0;
	this->imagine = 0;
}

Attributes::Attributes(double real, double imagine) {
	this->real = real;
	this->imagine = imagine;
}

std::ostream& operator<<(std::ostream& out, const Attributes& attributes)
{
	out << attributes.GetReal() << " + " << attributes.GetImagine() << "i";
	return out;
}

std::istream& operator>>(std::istream& in, Attributes& attributes)
{
	in >> attributes.real;
	in >> attributes.imagine;
	return in;
}

double Attributes::GetReal() const{ return real; }
double Attributes::GetImagine() const { return imagine; }

