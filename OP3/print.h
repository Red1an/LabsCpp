#pragma once
#include "base.h"

class Print : virtual public BaseDevice {
protected:
	int count;
public:
	Print(int weight, bool power);
	void inf() override;
	void energy() override;
	void print();

	~Print();
};

