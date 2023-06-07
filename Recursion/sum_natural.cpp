#include<iostream>
using namespace std;
int sum_natural(int n)
{
    if (n <= 0)
        return 0;

    
    else
        return n+sum_natural(n-1);
    
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_natural(n);
return 0;
}