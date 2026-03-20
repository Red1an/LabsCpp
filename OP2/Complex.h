#pragma once
#include "Attributes.h"

class Complex {
private:
	Attributes attr;
public:
	Complex();
	Complex(double real, double imaginary);;
	
	Complex operator-(const Complex& other) const;
	Complex operator/(Complex& other) const; 

	void init(double a, double b);
	void input();
	void print(std::string) const;
};