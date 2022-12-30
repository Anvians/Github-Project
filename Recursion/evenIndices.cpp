#include<iostream>
using namespace std;
int fun(int n)
{
    int star = 0;
    if (n<=0)
    {
        return 0;
    }
    else{
        return fun(n-1);
        
    }
}
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    fun(n);
return 0;
}