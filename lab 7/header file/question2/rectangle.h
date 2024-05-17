#pragma once
class rectangle {
private:
    int width;
    int height;
    int area;

public:
    
    rectangle() : 
    rectangle(int width, int length);
   ~rectangle();
    void retrieve();
    void calculatearea();

    double getArea() { 
        return area; }
};
