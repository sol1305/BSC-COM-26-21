#include<iostream>
#include"header.h"

using namespace std;

Rectangle::Rectangle(){
  length=0;
  width=0;
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