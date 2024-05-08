#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int daysUntilExpiration;

      srand((unsigned int) time (NULL));
      
     daysUntilExpiration = (int)(rand() % 12);
     cout << daysUntilExpiration << endl;
     if(daysUntilExpiration >5 && daysUntilExpiration<= 10){
        cout << "your subscription will expire soon. Renew now!"<< endl;
     }
     else if(daysUntilExpiration >1 && daysUntilExpiration <=5 ){
        cout << "your subscription expires within"<< daysUntilExpiration<<"days" << endl;
        cout <<"Renew now and save 10% !" << endl;

     }
     else if (daysUntilExpiration==1){
        cout << "your subscription expires within  a day"<<endl;
        cout <<"Renew now and save 20% !"<<endl; 
     }
     else if (daysUntilExpiration==0){
        cout << "your subscription has expired"<< endl;
     }
     else
        cout << "you have an active subscription";

   
     return 0;



}