#include<iostream>
using namespace std;
int main()
{
    int rowscount;
    int columncount;

    cout<<" Enter The Rows:";
    cin>> rowscount;

    cout<<" Enter The Column:";
    cin>> columncount;

    for( int rows =0; rows<=rowscount; rows=rows+1)
    {
        for(int column=0; column<rows+1; column= column+1)
        {
             cout<< column+1;
        }
        cout<< endl;
    }
return 0;
}