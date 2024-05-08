#include "shapes.h"
#include "area.h"
#include <iostream>

using namespace std;
int main(){
    int selection;
    while(true){


        cout<<"Choose the Operation you want in below :"<<endl;
        cout<<endl;
        cout<<"1.Calculate the square area "<<endl;
        
        cout<<"2.Calculate the triangle area "<<endl;
        cout<<"3.Calculate the circle area "<<endl;
        cout<<"4.Quit "<<endl;
        cout<<endl;
        cin>>selection;

        switch (selection)
        {
        case 1:{
            shapes::Square square;
            cout<<"Enter side length : ";
            cout<<endl;
            
            float sidelength;
            cin>>sidelength;
            square.setsideLength(sidelength);
             
              cout<<"square area: "<<Area::findSquareArea(square)<<endl;

            break;
            }
            case 2:{
                shapes::Triangle triangle;
                cout<<"Enter base : ";
                cout<<endl;
                float basevalue;
                cin>>basevalue;
                triangle.setbase(basevalue);
                cout<<"Enter height : ";
                cout<<endl;
                float heightvalue;
                cin>>heightvalue;
                triangle.setbase(heightvalue);
                cout<<"Triangle area: "<<Area::findTriangleAreas(triangle)<<endl;

           }
        case 3:{
            shapes::Circle circle;
            cout<<"Enter radius : ";
            cout<<endl;
            float radiusvalue;
            cin>>radiusvalue;
            circle.setradius(radiusvalue);
             cout<<"Circle area: "<<Area::findCircleArea(circle)<<endl;
             break;
          }
          case 4:{
            return 0;
          }
          default:{
            cout<<"Invalid selection...you need to enter a collect selection ."<<endl;
          }
        
        
        }
    
    }

     return 0;

}