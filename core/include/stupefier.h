#ifndef STUPEFIER_H
#define STUPEFIER_H

#include <cstdint>

class Stupefier {
public:
	Stupefier();
	~Stupefier();

	void up(uint32_t);
	void down(uint32_t);

public:
	uint32_t focus;
};

class SoftStupefier : public Stupefier {
public:
	SoftStupefier();
	~SoftStupefier();
};

class HardStupefier : public Stupefier {
public:
	HardStupefier();
	~HardStupefier();
};

#endif // STUPEFIER_H
