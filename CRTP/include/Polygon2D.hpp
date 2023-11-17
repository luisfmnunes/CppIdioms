#pragma once

#include <array>
#include <NDimensionalPolygon.hpp>

class Polygon2D : public NDimensionalPolygon<Polygon2D>{

    public:
        void setDimensions(std::array<double, 2>&& rval) noexcept;
        void setDimensions(const std::array<double, 2>& lval);
        inline std::array<double, 2> getDims() const { return dims; };

    private:
        std::array<double, 2> dims;

};