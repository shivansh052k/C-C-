#include <iostream>
using namespace std;

int main()
{
    cout<<"This is my Calculator!!"<<endl;
    cout<<"Choose your Operation: "<<endl;
    cout<<"a. Addition"<<endl;
    cout<<"b. Subtraction"<<endl;
    cout<<"c. Multiplication"<<endl;
    cout<<"d. Division"<<endl;

    char button;
    cout<<"\nEnter the opeartion option: "<<endl;
    cin>>button;

    int num1, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;

    cout<<"Enter the second number: "<<endl;
    cin>>num2;

    float ans;

    switch (button)
    {
    case 'a':
        ans = num1 + num2;
        cout<<ans<<endl;
        break;
    
    case 'b':
        ans = num1 - num2;
        cout<<ans<<endl;
        break;
    
    case 'c':
        ans = num1*num2;
        cout<<ans<<endl;
        break;
    
    case 'd':
        ans = num1/num2;
        cout<<ans<<endl;
        break;

    default:
        cout<<"I am learning more!!"<<endl;
        break;
    }

    return 0;
}

