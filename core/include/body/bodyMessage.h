#ifndef BODY_MESSAGE_H
#define BODY_MESSAGE_H

#include <vector>
#include <cstdint>

#include <body/limb.h>
#include <body/bodyPart.h>

class BodyMessage
{
public:
    BodyMessage() = default;
    ~BodyMessage() = default;
};

class BodySpotImpactEntry
{
public:
    enum class ReportType
    {
        PRESSURE,
        PAIN,
        PLEASURE,
        HEAT,
        COLD
    };

    BodySpotImpactEntry(uint32_t _spot, ReportType _type, uint32_t _value)
        : spot(_spot), type(_type), value(_value)
    {}
    ~BodySpotImpactEntry() = default;

public:
    uint32_t spot;
    ReportType type;
    uint32_t value;
};

class BodySpotImpactInd
:   public BodyMessage
{
public:
    BodySpotImpactInd(BodyPart &_part) : part(_part) {}
    ~BodySpotImpactInd() = default;

public:
    BodyPart &part;
    std::vector<BodySpotImpactEntry> entries;
};

class BodyPartMsg
:   public BodyMessage
{
public:
    BodyPartMsg(const BodyPart& _part)
    :part(_part)
    {}

public:
    const BodyPart& part;
};

#endif // BODY_MESSAGE_H