#include<iostream>
using namespace std;
void recu(int n)
{
    if (n>0)
        
        recu(n-1);
        cout<<n;
}
int main()
{
    int n;
    cout<<"Enter the N";
    cin>>n;
    recu(n);
   
return 0;
}