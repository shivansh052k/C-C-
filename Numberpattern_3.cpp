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
        for (int j=1; j<=i; j++)
        {
            int a = i+j;
            if(a%2==0)
            {
                cout<<"1" ;
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}