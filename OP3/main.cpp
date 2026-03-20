#include "base.h"
#include "display.h"
#include "speaker.h"
#include "print.h"
#include "player.h"
#include "printer.h"
#include <iostream>


int main() {
	setlocale(LC_ALL, "ru");
	BaseDevice base(20, 0);
	base.inf();
	base.mass();
	base.energy();
	std::cout << std::endl;

	Display dis(6000, 0);
	dis.inf();
	dis.energy();
	std::cout << std::endl;

	Speaker sam(4000, false);
	sam.inf();
	sam.energy();
	sam.mass();
	std::cout << std::endl;

	Print crt(200, 0);
	crt.inf();
	crt.energy();
	std::cout << std::endl;

	Player apple(200, 1);
	apple.inf();
	apple.energy();
	apple.mass();
	apple.bri();
	apple.vol();
	apple.pause();
	apple.next();
	std::cout << std::endl;

	PrinterScanner HP(4000, 1);
	HP.inf();
	HP.mass();
	HP.energy();
	HP.bri();
	HP.print();
	HP.scan();
	std::cout << std::endl;

}