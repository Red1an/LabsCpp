#include "speaker.h"
Speaker::Speaker(int weight, bool power) : BaseDevice(weight, power) {
	this->volume = volume;
}

void Speaker::inf() {
	std::cout << "Это динамик, он выводит звук" << std::endl;
}

void Speaker::vol() {
	std::cout << "Введите с какой громкостью должен звучать динамик: ";
	std::cin >> this->volume;
	if (volume > 100) std::cout << "Звук настолько громкий, что он выбил окна во всем квартале" << std::endl;
	else if (volume > 0) std::cout << "Вполне комфортная громкость" << std::endl;
	else std::cout << "Соседи будут рады такому звучанию, ведь ничего не слышно" << std::endl;
}

void Speaker::energy(){
	if (power) std::cout << "Динамик работает" << std::endl;
	else std::cout << "Динамик выключен" << std::endl;
}

Speaker::~Speaker() {
	std::cout << "Динамик залился водой, не стоило его ронять в раковину" << std::endl;
}

