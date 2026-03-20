#include "display.h"
Display::Display(int weight, bool power) : BaseDevice(weight, power) {
	this->bright = bright;
}

void Display::bri() {
	std::cout << "¬ведите комфортную дл€ вас €ркость диспле€: ";
	std::cin >> this->bright;
	if (bright > 100) std::cout << "— такой €ркостью экран выжжет вам глаза" << std::endl;
	else if (bright > 10) std::cout << "Ќормальна€ €ркость экрана, самое то, чтобы в него позалипать" << std::endl;
	else std::cout << "Ёкран настолько темный, что ничего не видно даже в самой темной комнате" << std::endl;
}

void Display::inf() {
	std::cout << "Ёто дисплей, он нужен, чтобы выводить изображение" << std::endl;
}

void Display::energy() {
	if (power) std::cout << "ƒисплей включЄн" << std::endl;
	else std::cout << "ƒисплей выключен, сегодн€ просмотра не будет" << std::endl;
}

Display::~Display() {
	std::cout << "ѕрошло несколько лет, светодиоды на матрице перегорели" << std::endl;
}

