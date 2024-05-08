#include<iostream>
#include"addition.h"

using namespace std;

Rectangle::Rectangle(){
  length=0;
  width=0;
}
Rectangle::Rectangle(float lengthvalue ,float widthvalue){
    length=lengthvalue;
    width=widthvalue;
}
Rectangle::~Rectangle(){}
float Rectangle:: getwidth(){
       return  width;
       }
float Rectangle::getlength(){
        return length;
       }

void Rectangle::setwidth(float widthvalue){
           width=widthvalue;
       }
void Rectangle::setlength(float lengthvalue){
           length=lengthvalue;
       }

 float Rectangle:: findArea(){
            return width * length ;

       }