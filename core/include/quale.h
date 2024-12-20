#ifndef _QUALE_H
#define _QUALE_H

#include <cstdint>
#include <attentionTrigger.h>

class Quale
{
public:
	enum class Type
	{
		NEUTRAL,
		/* Bounding refers to qualia such as tactile pressure which
		 * are mostly neutral but disclose information about the limits
		 * of the body.
		 **/
		BOUNDING,
		PAINFUL,
		PLEASURABLE
	} type;

	int32_t intensity;
};

class NeutralQuale
: public Quale
{
};

class NonNeutralQuale
: public Quale, public AttentionTrigger
{
public:
	virtual void eventInd(void);

public:
	BodyCoords	bodyCoords;
};

#endif
