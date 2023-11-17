#include <Polygon2D.hpp>

void Polygon2D::setDimensions(const std::array<double, 2>& other){
    dims = other;
}

void Polygon2D::setDimensions(std::array<double, 2>&& rval) noexcept{
    dims = std::move(rval);
}