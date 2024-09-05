#ifndef _THOUGHT_H
#define _THOUGHT_H

#include <iostream>
#include <scene.h>
#include <thoughtContentSource.h>

class Thought
{
public:
	Thought(ThoughtContentSource csource)
	{}

	void walk(void)
	{
		for (;;)
		{
			step();
		}
	};

	void step(void) { std::cout <<"Step\n"; }

public:
	Scene	scene;
};

#endif
