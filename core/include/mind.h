#ifndef _MIND_H
#define _MIND_H

#include <cstdlib>
#include <memory>

#include <thought.h>
#include <concept.h>
#include <attentionGrabber.h>

class Mind
{
public:
	AttentionGrabber poll(void);
	void focusOn(std::shared_ptr<Thought> thought)
	{
		currentThought = thought;
	}

	void execute(void)
		{};

	bool recognizes(AttentionTrigger intrin)
		{ return !!(std::rand() / 2); };

public:
	std::shared_ptr<Thought>	currentThought;
	Concept				Desirables,
					Undesirables;
};

#endif
