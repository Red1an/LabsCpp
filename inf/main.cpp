#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double fun1(double x) {
	return 4 - (x * x);
}

double fun2(double x) {
	return (x * x) - 2 * x;
}

double intgrl(double fun(double x), double a, double b) {
	double n = 10000;
	double sum = (fun(a) + fun(b)) / 2;
	double h = (b - a) / n;
	for (int i = 1; i < n; i++) {
		sum += fun(a + h * i);
	}
	sum *= h;
	return sum;
}

vector<double> points(double fun1(double x), double fun2(double x)) {
	vector<double> point;
	double left = -10000;
	double right = 10000;
	double step = 0.01;
	while (right > left){
		if (round(fun1(left)* 100) / 100 == round(fun2(left) * 100) / 100) point.push_back(left);
		left += step;
	}
	return point;
}

vector<double> points(double fun(double x)) {
	vector<double> point;
	for (double i = -1000; i <= 1000; i += 0.5) {
		if (fun(i) == 0) point.push_back(i);
	}
	return point;
}


int main() {
	setlocale(LC_ALL, "Russian");
	vector<double> point = points(fun1, fun2);
	cout << "Площадь между двумя линиями: " << abs(intgrl(fun1, point[0], point[point.size() - 1]) - 
		intgrl(fun2, point[0], point[point.size() - 1])) << endl;
	cout << "Точки пересечения двух линий: " << point[0] << ' ' << point[point.size() - 1] << endl;
	vector<double> tochki = points(fun1);
	cout << "Точки пересечение первой линии с Ox: ";
	for (int i = 0; i < tochki.size(); i++) cout << tochki[i] << ' ';
	tochki = points(fun2);
	cout << endl  << "Точки пересечение второй линии с Ox: ";
	for (int i = 0; i < tochki.size(); i++) cout << tochki[i] << ' ';
}	