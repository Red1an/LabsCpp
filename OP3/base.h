#pragma once
#include <iostream>

class BaseDevice {
protected:
	int weight;
	bool power;
public:
	BaseDevice();
	BaseDevice(int weight, bool power);
	virtual void inf();
	virtual void energy();
	void mass();
	~BaseDevice();
};

