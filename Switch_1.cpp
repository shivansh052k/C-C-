#include <iostream>
using namespace std;

int main()
{
    cout<<"Choose your language: "<<endl;
    cout<<"a. Hindi"<<endl;
    cout<<"b. English"<<endl;
    cout<<"c. Italian"<<endl;
    cout<<"d. Spanish"<<endl;

    char button;
    cout<<"\nEnter your Input: "<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Namaste!"<<endl;
        break;
    
    case 'b':
        cout<<"Hello!"<<endl;
        break;
    
    case 'c':
        cout<<"Ciao!"<<endl;
        break;
    
    case 'd':
        cout<<"Hola!"<<endl;
        break;

    default:
        cout<<"I am learning more!!"<<endl;
        break;
    }

    return 0;
}

