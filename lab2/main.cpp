#include <iostream>
int main() {
	double x1 = (7.2 - 2.55) * (1.0 + 15.0 / 17.0);
	double x2 = 5.0/9.0 * (2.0 + 14.0 / 85.0 + 12.0 + 4.0 / 17.0);
	double x3 = 15.75 + 34.0 + 1.0 / 4.0;
	double x4 = 5.75 + 17.0 + 1.0 / 4.0 + 0.5 * 4.0;
	double var1 = x1 / x2;
	double var2 = (x3 / x4 + 8.0) * 0.5;
	std::cout << var1 + var2 << std::endl;
	return 0;
}
