#include "base.h"

BaseDevice::BaseDevice() : weight(30), power(0) {}
BaseDevice::BaseDevice(int weight, bool power) {
	this->weight = weight;
	this->power = power;
}
void BaseDevice::inf() {
	std::cout << "Это базовое устройство, на его основе работают, остальные устройства" << std::endl;
}

void BaseDevice::energy(){
	if (power) std::cout << "Устройство включено, можно использовать" << std::endl;
	else std::cout << "Устройство выключено, возможно стоит втавить вилку в розетку, либо зарядить аккумулятор" << std::endl;
}

void BaseDevice::mass() {
	if (weight > 3000) 
		std::cout << "Устройсво слишком тяжелое, чтобы носить его в кармане или в руке" << std::endl;
	else if (weight > 50) 
		std::cout << "Устройство можно спокойно взять с собой" << std::endl;
	else 
		std::cout << "Устройство весит как пушинка, его очень легко потерять в стоге сена" << std::endl;
}

BaseDevice::~BaseDevice(){
	std::cout << "Устройсво разобрали на запчасти" << std::endl;
}

