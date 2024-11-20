#ifndef _VALUE_JUDGEMENT_H
#define _VALUE_JUDGEMENT_H

#include <cstdint>

class ValueJdgmnt
{
	uint32_t	intensity;
};

class PosValueJdgmnt
: public ValueJdgmnt
{
};

class NegValueJdgmnt
: public ValueJdgmnt
{
};

class NtrlValueJdgmnt
: public ValueJdgmnt
{
};

#endif
