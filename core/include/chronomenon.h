#ifndef _CHRONOMENON_H
#define _CHRONOMENON_H

#include <vector>
#include <qualeBundle.h>
#include <mentalEntity.h>

class Chronomenon
: public MentalEntity
{
public:
	class Timestamp
	{
		uintptr_t value;
	};

	class Duration
	{
		uintptr_t value;
	};

public:
	Chronomenon extract(Timestamp start, Duration len);

public:
	std::vector<QualeBundle> qualia;
};

#endif

