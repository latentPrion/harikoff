#ifndef _INTEROCEPTOR_H
#define _INTEROCEPTOR_H

#include <cstdint>

class Interoceptor {
public:
    Interoceptor(uint32_t _id, uint32_t _value = 0)
    : id(_id), value(_value)
    {}
    ~Interoceptor() = default;

public:
    uint32_t id, value;
};

class NeutralInteroceptor
:   public Interoceptor {
public:
    NeutralInteroceptor(uint32_t _id, uint32_t _value = 0)
    : Interoceptor(_id, _value)
    {}
};

class IntrinInteroceptor
:   public Interoceptor {
public:
    static constexpr uint32_t DEFAULT_INDICATION_THRESHOLD = 1;
    static constexpr uint32_t DEFAULT_ALERT_THRESHOLD = 5;
    static constexpr uint32_t DEFAULT_OVERLOAD_THRESHOLD = 9;

    IntrinInteroceptor(
        uint32_t _id,
        uint32_t _value = 0,
        uint32_t _indicationThreshold = DEFAULT_INDICATION_THRESHOLD,
        uint32_t _alertThreshold = DEFAULT_ALERT_THRESHOLD,
        uint32_t _overloadThreshold = DEFAULT_OVERLOAD_THRESHOLD)
    :   Interoceptor(_id, _value),
    indicationThreshold(_indicationThreshold),
    alertThreshold(_alertThreshold),
    overloadThreshold(_overloadThreshold)
    {}

    ~IntrinInteroceptor() = default;

public:
    uint32_t indicationThreshold;
    uint32_t alertThreshold;
    uint32_t overloadThreshold;
};

/**
 * Pain and pleasure interoceptors are specialized intrinsic interoceptors that, unlike
 * neutral interoceptors, have activation thresholds for different response levels 
 * (indication, alert, and overload). These thresholds allow them to trigger graduated 
 * responses based on stimulus intensity.
 * 
 * While neutral interoceptors simply record a binary state or basic value, pain and
 * pleasure interoceptors can model complex sensory responses with multiple activation
 * levels, similar to biological pain/pleasure responses. Each threshold represents a
 * different level of urgency or intensity in the sensory input.
 *
 * @see IntrinInteroceptor for the threshold values and implementation details
 *****************************************************************************************/

class PainInteroceptor
:   public IntrinInteroceptor {
public:
    PainInteroceptor(
        uint32_t _id,
        uint32_t _value = 0,
        uint32_t _indicationThreshold = DEFAULT_INDICATION_THRESHOLD,
        uint32_t _alertThreshold = DEFAULT_ALERT_THRESHOLD,
        uint32_t _overloadThreshold = DEFAULT_OVERLOAD_THRESHOLD)
    :   IntrinInteroceptor(_id, _value, _indicationThreshold, _alertThreshold, _overloadThreshold)
    {}
};

class PleasureInteroceptor
:   public IntrinInteroceptor {
public:
    PleasureInteroceptor(
        uint32_t _id,
        uint32_t _value = 0,
        uint32_t _indicationThreshold = DEFAULT_INDICATION_THRESHOLD,
        uint32_t _alertThreshold = DEFAULT_ALERT_THRESHOLD,
        uint32_t _overloadThreshold = DEFAULT_OVERLOAD_THRESHOLD)
    :   IntrinInteroceptor(_id, _value, _indicationThreshold, _alertThreshold, _overloadThreshold)
    {}
};

#endif // _INTEROCEPTOR_H
