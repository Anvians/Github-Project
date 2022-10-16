#include<iostream>
using namespace std;
int main()
{
    int A[5],i;
    for ( i = 0; i < 5; i++)
    {
        cout<<"Enter the "<<i<<" number";
        cin>>A[i];
    }
    float average=0,sum=0;
    for ( i = 0; i < 5; i++)
    {
        sum=sum+A[i];
     
    }
    average = sum/5;
    cout<<average;
    
    
return 0;
}