#ifndef _MIND_H
#define _MIND_H

#include <thought.h>
#include <subconscious.h>

class Mind
{
public:
	void wander(void)
	{
		Thought		idleThought(subconscious);

		idleThought.walk();
	}

public:
	Subconscious	subconscious;
};

#endif
