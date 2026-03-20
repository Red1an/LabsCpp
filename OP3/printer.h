#pragma once
#include "print.h"
#include "display.h"
#include "speaker.h"


class PrinterScanner : public Display, public Print {
protected:
public:
	PrinterScanner(int weight, bool power);
	void inf() override;
	void energy() override;
	void scan();
	
	~PrinterScanner();
};

