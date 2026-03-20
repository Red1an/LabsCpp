#include "display.h"
#include "speaker.h"

class Player : public Display, public Speaker {
protected:

public:
	Player(int weight, bool power);
	void inf() override;
	void pause();
	void next();
	void energy() override;

	~Player();
};

