#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int rev;
    
    while(n>0)
    {
        int last = n%10;
        rev = rev*10 + last;
        n=n/10;
    }
    
    cout<<rev;
    
    return 0;
}