#include<iostream>
using namespace std;

int add(int n)
{
    if (n==1)
    {
        return 1;
    }
    else{
        return n+add(n-1);
    }
}
int main()
{
    int n,sum = 0;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Sum of the number form 1 to n is: "<<add(n);
    return 0;
}