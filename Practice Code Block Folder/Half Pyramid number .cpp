#include<iostream>
using namespace std;
int main()
{
    int count ;
    cout<<" Enter The Rows:";
    cin>>count;

    for(int rows = 0; rows <count; rows = rows +1)
    {
        for( int column= 0; column<rows+1; column = column+1)
        {
            cout<< column+1;
        }
        cout<< endl;
    }
    return 0;
}
