#pragma once
#include <iostream>

class Attributes {
private:
	double real;
	double imagine;
public:
	Attributes();
	Attributes(double real, double imagine);
	
	friend std::ostream& operator<<(std::ostream& out, const Attributes& attributes);
	friend std::istream& operator>>(std::istream& in, Attributes& attributes);

	double GetReal() const;
	double GetImagine() const;
};