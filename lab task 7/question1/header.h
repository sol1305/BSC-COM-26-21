#ifndef HEADER_H
#define HEADER_H

class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle();
    ~Rectangle();
    float getlength();
    float getwidth();

    void setlength(float lengthvalue);
    void setwidth(float widthvalue);

    float findArea();
};

#endif

