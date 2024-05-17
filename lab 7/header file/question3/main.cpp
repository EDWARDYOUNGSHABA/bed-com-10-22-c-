#include<iostream>
#include "class.h"
using namespace std;
int main() {
    square Square(5);
    triangle Triangle(4, 3);
    circle Circle(6);

    Square.setsidelength(8);
    Triangle.setbase(6);
    Triangle.setheight(4);
    Circle.setradius(7);

    std::cout << "Area of square: " << area::areaofsquare(Square) << std::endl;
    std::cout << "Area of triangle: " << area::areaoftriangle(Triangle) << std::endl;
    std::cout << "Area of circle: " << area::areaofcircle(Circle) << std::endl;

    return 0;
}
