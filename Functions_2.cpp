#include<iostream>
#include<math.h>
using namespace std;

void fib(int num)
{
    int t1=0;
    int t2=1;
    int NextTerm;
    
    for(int i=1; i<=num; i++)
    {
        cout<<t1<<", ";
        
        NextTerm=t1+t2;
        t1=t2;
        t2=NextTerm;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    
    fib(n);
    return 0;
}