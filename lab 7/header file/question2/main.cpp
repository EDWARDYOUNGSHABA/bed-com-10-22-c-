#include<iostream>
#include "rectangle.h"
using namespace std;
int main() {
    rectangle edward; 
    edward.retrieve(); 
    edward.calculatearea(); 
    std::cout << "The area of the rectangle is: " << edward.getArea() << std::endl;

    // Create another instance of rectangle using the overloaded constructor
    double length, width;
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;
    
    rectangle newRectangle(length, width);
    newRectangle.calculatearea();
    std::cout << "The area of the new rectangle is: " << newRectangle.getArea() << std::endl;

    return 0;
}
