#pragma once
#include "base.h"
class Display : virtual public BaseDevice {

protected:
	int bright;

public:
	Display(int weight, bool power);
	void bri();
	void inf() override;
	void energy() override;

	~Display();
};

