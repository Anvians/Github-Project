#include<iostream>
using namespace std;
int main()
{
    int A[5]={3,4,5,7,8};
    int sum=0;
    int *p;
    int i;
    p = &sum;
    for ( i = 0; i < 5; i++)
    {
       *p +=A[i];
    }
    
    cout<<"Sum of these numbers is"<<*(&sum);
    
return 0;
}