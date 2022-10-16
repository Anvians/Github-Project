#include<iostream>
using namespace std;
int main()
{
    int A[5]={4,6,8,9,7};
    int B[5];
    int *p;
    int i,j;
    p =&B[i];
    for ( i = 0; i < 5; i++)
    {
        B[i]=A[i];
        cout<<B[i]<<" ";
    }
    cout<<endl<<"-------------------"<<endl;
   
   
    
        cout<<*p<<" ";
    
    

    
return 0;
}