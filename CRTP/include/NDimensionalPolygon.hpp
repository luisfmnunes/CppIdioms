#pragma once

#include<iostream>

// Example of adding functionality to classes using CRTP

template<typename T>
class NDimensionalPolygon{
    public:
        double getArea() const{
            float area = 1.0f;
            for(const auto& v : static_cast<T const&>(*this).getDims())
                area *= v;
            
            return area;
        }
};