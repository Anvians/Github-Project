#include<iostream>
using namespace std;
int spaces(int n)
{
   
    if (n==0)
    {
        return 0;

    }
    else{
        
        spaces(n/10);
        cout<<n%10<<" ";
    }


}
// In this solution we will get spaces i the end of string, this is why it is not a perfact code.
// Try again
int main()
{
    int p,m;
    cin>>p;
    for(int i=1;i<=p;i++)
    {
        cin>>m;
        spaces(m);
    }
return 0;
}