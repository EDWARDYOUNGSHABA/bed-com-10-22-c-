
#include<iostream>
#include <string>
using namespace std;

class rectangle {
private:
    float length;
    float width;

public:
rectangle(); // Constructor 
~rectangle(); // Destructor 
    void assign();
    void retrieve();
    void calculatearea();
};

rectangle::rectangle() { // Constructor
    length = 0;
    width = 0;
}

rectangle::~rectangle() { // Destructor definition
    // Destructor body (if needed)
}

void rectangle::assign() {
    length = 0;
    width = 0;
}

void rectangle::retrieve() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}

void rectangle::calculatearea() {
    float area = length * width;
    cout << "Area: " << area <<endl;
    } 

    
 int main() {
    rectangle myRectangle; // Create an object of the rectangle class
    myRectangle.retrieve(); // Prompt the user to input length and width
    myRectangle.calculatearea(); // Calculate and print the area
    return 0;
}
