#include "printer.h"

PrinterScanner::PrinterScanner(int weight, bool power) : Display(weight, power), Print(weight, power){
	std::cout << "Принтер установлен в офис, чтобы помогать с рутинными делами" << std::endl;
	this->weight = weight;
	this->power = power;
}

void PrinterScanner::inf() {
	std::cout << "Это принтер со сканером, очень полезная вещь для всех компаний" << std::endl;
}

void PrinterScanner::energy() {
	if (power) std::cout << "Принтер готов к работе" << std::endl;
	else std::cout << "Принтер выключен, стоит подать на него энергию" << std::endl;
}

void PrinterScanner::scan() {
	std::cout << "Сканирование произведенно" << std::endl;
}

PrinterScanner::~PrinterScanner(){
	std::cout << "Компания обанкротилась, принтер теперь не нужен" << std::endl;
}

