#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int row, col;
    cin>>row;
    cin>>col;

    for (int i=0; i<=row; i++)
    {
        for(int j=0; j<=col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
