#pragma once

#include<StaticNumInterface.hpp>

class VariableNum : public StaticNumInterface<VariableNum>{
    public:
        inline void setValue(const int& value) {_value = value;}
        inline int getValue() const {return _value;}
        explicit VariableNum(const int& v) : _value(v) {}

    private:
        int _value;
};