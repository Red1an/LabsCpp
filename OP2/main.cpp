#include "Complex.h"


int main() {
	Complex num1;
	Complex num2(2, 1);

	num1.print("Firs Complex num");
	num2.print("Second Complex num");

	Complex num3;
	num3.input();
	num3.print("Third complex num");

	(num3 - num2).print("Subtraction");	
	(num3 / num2).print("Division");
	return 0;
}