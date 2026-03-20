#pragma once
#include "base.h"

class Speaker : virtual public BaseDevice {
protected:
	int volume;

public:
	Speaker(int weight, bool power);
	void vol();
	void inf() override;
	void energy() override;

	~Speaker();
};

