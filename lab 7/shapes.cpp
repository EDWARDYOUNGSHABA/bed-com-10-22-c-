#include <iostream>

class square {
private:
    int sidelength;

public:
    square();
    square(int length);
    ~square();
    void setsidelength(int newsidelength);
    int getsidelength();
};

square::square() {
    sidelength = 0; // default value
}

square::square(int length) {
    sidelength = length;
}

square::~square() {
}

void square::setsidelength(int newsidelength) {
    sidelength = newsidelength;
}

int square::getsidelength() {
    return sidelength;
}

class triangle {
private:
    int base;
    int height;

public:
    triangle();
    triangle(int Base, int Height);
    ~triangle();
    void setbase(int Base);
    int getbase();
    void setheight(int Height);
    int getheight();
};

triangle::triangle() {
    base = 0;
    height = 0; // default values
}

triangle::triangle(int Base, int Height) {
    base = Base;
    height = Height;
}

triangle::~triangle() {
}

void triangle::setbase(int Base) {
    base = Base;
}

int triangle::getbase() {
    return base;
}

void triangle::setheight(int Height) {
    height = Height;
}

int triangle::getheight() {
    return height;
}

class circle {
private:
    int radius;

public:
    circle();
    circle(int Radius);
    ~circle();
    void setradius(int Radius);
    int getradius();
};

circle::circle() {
    radius = 0; // default value
}

circle::circle(int Radius) {
    radius = Radius;
}

circle::~circle() {
}

void circle::setradius(int Radius) {
    radius = Radius;
}

int circle::getradius() {
    return radius;
}

class area {
public:
    static double areaofsquare(square area1);
    static double areaoftriangle(triangle area2);
    static double areaofcircle(circle area3);
};

double area::areaofsquare(square area1) {
    int sidelength = area1.getsidelength();
    return sidelength * sidelength;
}

double area::areaoftriangle(triangle area2) {
    int base = area2.getbase();
    int height = area2.getheight();
    return 0.5 * base * height;
}

double area::areaofcircle(circle area3) {
    int radius = area3.getradius();
    return radius * radius * 3.142857;
}

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
