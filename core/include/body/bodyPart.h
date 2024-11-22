#ifndef BODYPART_H
#define BODYPART_H

#include <cstdint>
#include <string>
#include <set>

#include <sensors/interoceptor.h>

class BodySpot
{
public:
    BodySpot(uint32_t _id, std::string _description) 
    : id(_id), description(_description)
    {}

    ~BodySpot() = default;

public:
    uint32_t id;
    std::string description;
    std::set<uint32_t, Interoceptor> interoceptors;
};

class BodyPart
{
public:
    BodyPart(uint32_t _partId, std::string _partName, 
            std::string _partDesc, std::string _partLoc)
    : id(_partId), name(_partName), 
    description(_partDesc), location(_partLoc)
    {}

    ~BodyPart() = default;

public:
    const uint32_t id;
    std::string name, description, location;
    std::set<uint32_t, BodySpot> spots;
};

#endif // BODYPART_H
