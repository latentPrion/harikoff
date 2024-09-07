#ifndef _ATTENTION_GRABBER_H
#define _ATTENTION_GRABBER_H

#include <cstdbool>
#include <attentionTrigger.h>
#include <chronomenon.h>

class AttentionGrabber
{
public:
	AttentionGrabber(AttentionTrigger cause, Chronomenon chron)
	: isNull(false)
	{}

	void setNull(void) { isNull = true; }
	int operator!(void) { return isNull; }

public:
	AttentionTrigger	cause;
	Chronomenon		chron;
	bool			isNull;
};

#endif
