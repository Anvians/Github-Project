#include<iostream>
using namespace std;
int main()
{
    int a,b,c,option;
    cout<<"1. add/n  2. Subtraction/n  3. Multiplication/n  4. Division/n";
    cin>>option;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    switch (option)
    {
    case 1: c= a+b;
        break;
    case 2: c= a-b;
        break;
    case 3: c= a*b;
        break;
    case 4: c= a/b;
        break;
    
    default: cout<<"Invalid Operation";
        break;
    }
    cout<<c;
return 0;
}