#include<iostream>
using namespace std;
int main()
{

    int rowscount;

    cout<< "Enter The Rows:";
    cin>> rowscount;

    for(int rows=0; rows<rowscount; rows=rows+1)
    {
        for( int column=0; column<rowscount-rows; column= column+1)
        {
            cout<< column+1;
        }
        cout<<endl;
    }
    return 0;
}
