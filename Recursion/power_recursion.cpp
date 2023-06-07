#include<iostream>
using namespace std;
int fun_power(int m,int n)
{
    if (n==0)
    {
        return 1;

    }
    else{
        return fun_power(m,n-1)*m;
    }


}
int main()
{
    int m, n;
    cin>>n;
    cin>>m;
    cout<<fun_power(n,m);
return 0;
}