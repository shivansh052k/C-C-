/*
A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is:
for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
    
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.

A sample loop is:
for(int i = 0; i < 10; i++) {
    ...
}

In this challenge, you will use a for loop to increment a variable through a range.

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;
    
    for(int i=a; i<=b ;i++){
        if(i>9){
            if(i%2==0){
                cout<<"even\n";
            }
            else{
                cout<<"odd\n";
            }
        }
        else if(i==1){
            cout<<"one\n";
        }
        else if(i==2){
            cout<<"two\n";
        }
        else if(i==3){
            cout<<"three\n";
        }
        else if(i==4){
            cout<<"four\n";
        }
        else if(i==5){
            cout<<"five\n";
        }
        else if(i==6){
            cout<<"six\n";
        }
        else if(i==7){
            cout<<"seven\n";
        }
        else if(i==8){
            cout<<"eight\n";
        }
        else{
            cout<<"nine\n";
        }
    }
    
    return 0;
}
