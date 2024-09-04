#ifndef _MIND_H
#define _MIND_H

#include <thought.h>

class Mind
{
public:
	void Mind::wander(void)
	{
		for (;;)
		{
			Thought		idleThought(subconscious);

			idleThought.walk(mind);
		}
	}

public:
	Subconscious	subconscious;
};

#endif
