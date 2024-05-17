
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

class area {
public:
    static double areaofsquare(square area1);
    static double areaoftriangle(triangle area2);
    static double areaofcircle(circle area3);
};

