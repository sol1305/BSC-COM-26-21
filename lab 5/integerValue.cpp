#include <iostream>
using namespace std ;
int main (){
    int number;
    cout << "enter an integer value between 5 and 10"<< endl;
    cin >>number ;

    if (number>=5 && number <= 10){
        cout << "input has been accepted"<<endl;
    }
    else{
        cout <<"enter an interger value between 5 and 10"<< endl;
        cin >> number;
    }
    return 0;
}