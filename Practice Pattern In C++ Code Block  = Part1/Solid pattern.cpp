#include<iostream>
using namespace std;
int main()
{
    int rowscount,columncount;

    cout<<"Enter The Rows: ";
    cin>> rowscount;

    cout<<"Enter THe Column : ";
    cin>> columncount;

    for( int rows=0; rows<rowscount; rows= rows+1)
    {
        for( int column=0; column<columncount; column= column+1)
        {
            cout<<"*";

        }
        cout<< endl;
    }
    return 0;
}
