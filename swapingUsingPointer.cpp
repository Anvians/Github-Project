#include<iostream>
using namespace std;
int main()
{
    int a=10,b=11;
    int temp=0;
    int *p;
    p = &temp;
    cout<<a<<" "<<b<<endl;
    *p=a;
    a=b;
    b=*p;
    cout<<a<<" "<<b;
    cout<<"------------------";
    cout<<a<<" "<<b;

return 0;
}