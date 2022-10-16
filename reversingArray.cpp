#include<iostream>
using namespace std;
int main()
{
    int A[5]={};
    int B[5];
    int i,j;
    for ( j = 0; j <5; j++)
    {
        cout<<"Enter the "<<j<<"element";
        cin>>A[j];
        
    }
    
    for ( i = 4; i >=0; i--)
    {
        B[i]=A[i];
        cout<<B[i]<<" ";
    }
    
return 0;
}l