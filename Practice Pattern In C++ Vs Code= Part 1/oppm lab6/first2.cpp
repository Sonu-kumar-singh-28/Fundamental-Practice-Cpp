#include<iostream>
using namespace std;

class electricity{
    public:
    float   unit;
    float amount=0;

    void getdata()
    {
       cout<<" Enter The Amount And Unit:";
       cin>> unit;
    }
    void bill()
    {
    if( unit<=50)
    {
        amount= unit*0.60
    }
    else if( unit>=100 && unit<= 300)
    {
        amount= unit*0.80;
    }
    else if( unit>=300)
    {
        amount= unit*0.92;
    }
  

    //  second Statement 

    if(unit>300)
    {
        cout<<"total amount are :"<<(50+amount+ amount * .15)<<" rupees";
      }
      else if( amount>50 && amount< unit)
      {
        cout<<"total amount are  :"<<amount+50<<"rupees";
      }
      else{
             cout<<"total amount are :"<<50+amount<<" rupees";
      }
    }
} ;

int main()
{
    electricity u1;

    u1.getdata();
    u1.bill();
    return 0;
}



