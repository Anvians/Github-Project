#include<iostream>

using namespace std;
int rem;

void fun(int n)
{
    if (n>1)
        rem = n%2;
        cout<<rem;
        return fun(n/2);

}
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    
    fun(n);

return 0;
}