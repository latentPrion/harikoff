#ifndef _BODY_MAP_H
#define _BODY_MAP_H

#include <set>
#include <cstdint>

#include <body/limb.h>

class BodyMap {
public:
    BodyMap() = default;
    ~BodyMap() = default;

    std::set<uint32_t, BodyLimb> limbs;
};

#endif // _BODY_MAP_H
