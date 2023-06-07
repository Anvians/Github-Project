#include<iostream>
using namespace std;
int binary_number(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        cout<<n%2;
        return binary_number(n/2);
    }
}
int main()
{
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        binary_number(m);
    }
    
return 0;
}