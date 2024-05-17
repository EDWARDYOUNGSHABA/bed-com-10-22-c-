#include "class.h"
using namespace std;
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
