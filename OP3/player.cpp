#include "player.h"

Player::Player(int weight, bool power) : Display(weight, power), Speaker(weight, power) {
	std::cout << "Был преобретен плеер, теперь можно слушать музыку везде" << std::endl;
	this->weight = weight;
	this->power = power;
}
void Player::inf(){
	std::cout << "Плеер нужен для прослушивания музыки и хранения любимых треков" << std::endl;
}
void Player::pause() {
	std::cout << "Воспроизведение приостановленно" << std::endl;
}

void Player::next() {
	std::cout << "Переключить на следующую песню" << std::endl;
}

void Player::energy() {
	if (power) 
		std::cout << "Плеер готов к использованию" << std::endl;
	else 
		std::cout << "Плеер выключен, может рязрядился аккумулятор" << std::endl;
}

Player:: ~Player() {
	std::cout << "На замену плееру пришел многофункциональный смартфон" << std::endl;
}

