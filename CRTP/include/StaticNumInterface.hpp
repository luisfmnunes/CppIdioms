#pragma once

#include <CRTP.hpp>

// Example of a Static Interface implemented with CRTP avoiding runtime Virtual Call overhead

template <typename T>
class StaticNumInterface : public CRTP<T> {
    public:
        inline int getValue() const { return this->underlying().getValue(); };
};