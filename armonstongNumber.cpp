#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,r,m;
    cout<<"Enter the numbers";
    cin>>n;
    m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
        
    }
    cout<<sum;
    cout<<endl;
    if (m=sum)
    {
        cout<<"your number is armostrang";
    }
    else{
        cout<<"your number is not a armostrang";
    }
    
    
return 0;
}