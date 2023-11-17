#include <iostream>
#include <string>
#include <Polygon2D.hpp>
#include <Polygon3D.hpp>
#include <ConstNum.hpp>
#include <StaticNumInterface.hpp>
#include <VariableNum.hpp>

template<typename T>
std::string print(const StaticNumInterface<T>& num){
    return std::to_string(num.getValue());
}

int main(int argc, char** argv){

    Polygon2D square;
    square.setDimensions({4, 4});

    Polygon3D cube;
    cube.setDimensions({4, 4, 4});

    std::cout << "** Using CRTP as a pattern to Add Functionality to Derived Class **\n";
    std::cout << "Area of the Square of size 4: " << square.getArea() << "\n";
    std::cout << "Area of the Cube of size 4: " << cube.getArea() << "\n";

    ConstValue c42(42);
    VariableNum cVar(100);

    std::cout << "** Using CRTP as a Static Interface **\n";
    std::cout << "Printing Value of Constant Number Class: " << print(c42) << "\n";
    std::cout << "Printing Value of Variable Number Class: " << print(cVar) << "\n";
    cVar.setValue(338);
    std::cout << "Printing Variable Number Class after Alteration: " << print(cVar) << "\n";

    return EXIT_SUCCESS;

}