#ifndef _NON_NEUTRAL_QUALIA_H
#define _NON_NEUTRAL_QUALIA_H

#include <quale.h>

class PleasantQuale
: public NonNeutralQuale
{
public:
	virtual void eventInd(void);
};

class PainfulQuale
: public NonNeutralQuale
{
public:
	virtual void eventInd(void);
};

#endif
