#include "print.h"

Print::Print(int weight, bool power) : BaseDevice(weight, power) {
	this->count = count;
}
void Print::inf() {
	std::cout << "Это картридж, он необходим для вывода информации на бумагу" << std::endl;
}

void Print::energy() {
	if (power)
		std::cout << "Картридж готов к использованию" << std::endl;
	else
		std::cout << "Картридж не работает, нужно заправить чернила" << std::endl;
}

void Print::print() {
	std::cout << "Введите сколько хотите распечатать листов: ";
	std::cin >> count;
	std::cout << "Распечатанно листов: " << count << std::endl;
}

Print::~Print() {
	std::cout << "Закончились чернила в картридже" << std::endl;
}

