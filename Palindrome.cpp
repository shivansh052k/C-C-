#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    /*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    */
    int n;
    cin>>n;
    
    for (int i=1; i<=n; i++)
    {
        int j;
        for(j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        } 
        k=2;
        for(;j=n+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}