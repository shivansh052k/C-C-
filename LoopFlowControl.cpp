#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    */
   
   for (int i = 1; i <= 100; i++)
   {
       if (i%3==0)
       {
           continue;
       }
       
       cout<<i<<endl;
   }

    return 0;

   }

