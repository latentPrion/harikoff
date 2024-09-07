#ifndef _THOUGHT_H
#define _THOUGHT_H

#include <iostream>
#include <scene.h>
#include <attentionGrabber.h>


class Thought
{
public:
	enum class Goal
	{
		DRIFT,
		ASSOCIATE_CAUSAL_QUALE_WITH_INTRINSIC_MOTIVATORS,
		RESPOND_TO_CAUSAL_QUALE
	};

	Thought(void)
	{
		setGoal(Goal::DRIFT);
	}

public:
	void walk(void)
	{
		for (;;)
		{
			step();
		}
	};

	void step(void) { std::cout <<"Step\n"; }
	void setGoal(Goal g)
		{ goal = g; }

public:
	Scene		scene;
	Goal		goal;
};

class ActiveThought
: public Thought
{
public:
	ActiveThought(AttentionGrabber ag)
	: currFocus(ag)
	{
		setGoal(Goal::ASSOCIATE_CAUSAL_QUALE_WITH_INTRINSIC_MOTIVATORS);
	}

public:
	AttentionGrabber	currFocus;
};

class IdleThought
: public Thought
{
public:
	IdleThought(void)
	{}
};

#endif
