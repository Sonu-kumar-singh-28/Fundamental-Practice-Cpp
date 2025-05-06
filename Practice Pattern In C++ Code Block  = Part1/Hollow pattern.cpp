#include<iostream>
using namespace std;
int main()
{
    int rowscount, columncount;

    cout<<" Enter The Rows:";
    cin>>rowscount;

    cout<<"Enter The Column:";
    cin>> columncount;

    for( int rows =0; rows<rowscount; rows= rows+1)
    {
        if( rows==0 || rows==rowscount-1)
        {
            for( int column=0; column<columncount; column= column+1)
            {
                cout<<"*";
            }
        }
        else
        {

            cout<<"*";
            for(int i=0; i<columncount-2; i=i+1)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<< endl;

    }
 return 0;
}
