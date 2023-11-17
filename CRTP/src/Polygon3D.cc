#include <Polygon3D.hpp>

void Polygon3D::setDimensions(const std::array<double, 3>& other){
    dims = other;
}

void Polygon3D::setDimensions(std::array<double, 3>&& rval) noexcept{
    dims = std::move(rval);
}