#ifndef _QUALE_BUNDLE_H
#define _QUALE_BUNDLE_H

#include <config.h>
#include <array>
#include <quale.h>

typedef std::array<Quale, CONFIG_NUM_SENSORS> QualeBundle_t;
class QualeBundle
{
	QualeBundle_t	qualia;
};

#endif
