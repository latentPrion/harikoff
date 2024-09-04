#ifndef _QUALE_H
#define _QUALE_H

class Quale
{
	int intensity;
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
};

#endif
