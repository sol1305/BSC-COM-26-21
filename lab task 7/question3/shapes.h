#ifndef SHAPES_H
#define SHAPE_H

namespace shapes{
class Square{
    private:
    float sideLength;
    public:
    Square();
    Square(float length);
    ~Square();
    float getsideLength();
    void setsideLength(float length);
};
class Triangle
{
private:
    float base;
    float height;
public:
    Triangle();
    Triangle(float basevalue,float heightvalue);
    ~Triangle();
    float getbase();
    float getheight();
    void setbase(float basevalue);
    void setheight(float heightvalue);

};
class Circle
{
private:
float radius;
public:
Circle();
Circle(float radiusvalue);
~Circle();
float getradius();
void setradius(float radiusvalue);

};





}

#endif