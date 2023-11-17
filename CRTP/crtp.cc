#include <iostream>
#include <Polygon2D.hpp>
#include <Polygon3D.hpp>

int main(int argc, char** argv){

    Polygon2D square;
    square.setDimensions({4, 4});

    Polygon3D cube;
    cube.setDimensions({4, 4, 4});

    std::cout << "Area of the Square of size 4: " << square.getArea() << "\n";
    std::cout << "Area of the Cube of size 4: " << cube.getArea() << "\n";

    return EXIT_SUCCESS;

}