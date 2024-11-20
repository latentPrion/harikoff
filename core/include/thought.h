#ifndef _THOUGHT_H
#define _THOUGHT_H

#include <iostream>
#include <scene.h>
#include <attentionGrabber.h>
#include <goal.h>

class Thought
{
public:
	Thought(void)
	{
		setGoal(thought::Goal::DRIFT);
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
	void setGoal(thought::Goal g)
		{ goal = g; }

public:
	Scene		scene;
	thought::Goal	goal;
};

class ActiveThought
: public Thought
{
public:
	ActiveThought(AttentionGrabber ag)
	: currFocus(ag)
	{
		setGoal(thought::Goal
			::ASSOCIATE_CAUSAL_QUALE_WITH_INTRINSIC_MOTIVATORS);
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
