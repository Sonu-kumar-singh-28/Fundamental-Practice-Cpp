#include<iostream>
using namespace std;

class electricity{
    float unit;
    float amount=0;
    public:
    void getdata(){
        cout<<"enter the amount and  unit:";
        cin>>unit; 
    }
    void bill(){
      if(unit<=100){
        amount=unit*.60;
      }
      else if(unit>100 && unit<=300){
        amount=unit*.80;
      }
      else if(unit>300){
        amount=unit*.92;
      }


    //     second conditions
      if(amount>300){
        cout<<"total amount are :"<<(50+amount+ amount * .15)<<" rupees";
      }
      else if( amount>50 && amount<unit){
        cout<<"total amount are  :"<<amount+50<<"rupees";
      }
      else{
             cout<<"total amount are :"<<50+amount<<" rupees";
      }
    }
};
int main(){
electricity u1;
u1.getdata();
u1.bill();
return 0;
}