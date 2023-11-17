#pragma once

#include <array>
#include <NDimensionalPolygon.hpp>

class Polygon3D : public NDimensionalPolygon<Polygon3D>{
    public:
        void setDimensions(std::array<double, 3>&&) noexcept;
        void setDimensions(const std::array<double, 3>&);
        inline std::array<double, 3>getDims() const { return dims; }

    private:
        std::array<double, 3> dims;
};