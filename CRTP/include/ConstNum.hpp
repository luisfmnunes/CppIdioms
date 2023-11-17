#pragma once

#include<StaticNumInterface.hpp>

class ConstValue : public StaticNumInterface<ConstValue>{
    public:
        inline int getValue() const { return _value; }
        ConstValue(const int& v) : _value(v) {}

    private:
        int _value ;
};