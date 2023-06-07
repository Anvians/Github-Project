#include<iostream>
using namespace std;
int recurs(int n)
{
    if (n<=0)
    {
        return 1;
    }
    else{
        return recurs(n-1)*n;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<recurs(n);
return 0;
}