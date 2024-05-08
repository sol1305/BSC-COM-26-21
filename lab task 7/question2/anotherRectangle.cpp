#include<iostream>
#include "addition.h"

using namespace std;

int main(){
    float length;
    float width;
    // we begin by creating objects of the my class i have created above 
     Rectangle buleRectangle;
     //
     cout<<"Enter the  length: ";
     cin>>length; 
     cout<<endl;
     buleRectangle.setlength(length);
     cout<<"Enter the  width: ";
     cin>>width; 
     cout<<endl;
     buleRectangle.setwidth(width);

     cout<<"Area of our rectangle is: "<<buleRectangle.findArea() <<endl ;
 cout<<"enter length : ";
     float value1;
     cin>>value1 ;
     cout<<endl;
     float value2;
     cout<<"enter width : ";
     cin>>value2;
     cout<<endl;
      Rectangle buleRectangle1( value1 , value2);
      cout<<"Area of our rectangle is: "<<buleRectangle.findArea() <<endl ;


    return 0;
    }