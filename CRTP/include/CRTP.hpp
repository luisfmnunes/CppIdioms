#pragma once

// Creates a simple interface to avoid using static_cast verbosily

template <typename T>
class CRTP{
    public:
        inline T& underlying() { return static_cast<T&>(*this); }
        inline T const& underlying() const { return static_cast<T const&>(*this); }
};