#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin >> a;

    if (a%2==0)
    {
        cout<<"Even";
    }
    else if (a<0)
    {
        cout<<"Wrong Input";
    }
    else
    {
        cout<<"Odd";
    }
    
    
}
