#ifndef BODY_LIMB_H
#define BODY_LIMB_H

#include <string>
#include <set>
#include <cstdint>

#include <body/bodyPart.h>

class BodyLimb
{
public:
    BodyLimb(uint32_t _id) : id(_id) {}
    BodyLimb(uint32_t _id, 
             const std::string& _name, const std::string& _desc,
             const std::string& _loc)
    : id(_id), name(_name), description(_desc), location(_loc)
    {}

    ~BodyLimb() = default;

public:
    uint32_t id;
    std::string name, description, location;
    std::set<uint32_t, BodyPart> parts;
};

#endif // BODY_LIMB_H
