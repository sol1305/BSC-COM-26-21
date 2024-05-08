#ifndef ADDITION_H
#define ADDITION_H

class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle();
     Rectangle(float length, float width);
    ~Rectangle();
    float getlength();
    float getwidth();

    void setlength(float lengthvalue);
    void setwidth(float widthvalue);

    float findArea();
};

#endif

