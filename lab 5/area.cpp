#include <iostream>
using namespace std ;

int main (){
    enum SHAPES {square = 1,rectangle,triangle,quitProgram};
    cout << "1. square";
    cout << "2. rectangle";
    cout << "3. triangle";
    cout << "4. quit program";
    int choice;
cout << "make a choice!";
cin >> choice;

    double area;
    double length;
    double width;
    double base;
    double height;
    double side;

  if (SHAPES == 1) {
        cout << "enter a side";
        cin >> side;
        area = side * side;
     cout << area;
    }
    
    else if(SHAPES == 2){
        cout << "enter length";
        cin >> length;
        cout << "enter width";
        cin >> width;
         area = length * width;
        cout << area;
    }
        else if (SHAPES == 3){
            area=0.5*(base*height);
            cout << "enter base";
            cin >> base;
            cout << "enter height";
            cin >> height;
            cout << area; 

        }
        else{
            cout << "quit program";
        }
    

    



   return 0;
}