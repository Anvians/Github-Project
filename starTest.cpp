#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5;
   
    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j < i+2; j++)
        {
            if (i>=j &&  (i+j)>=(n-1))
            {
               
                cout<<"*";
            }
            
            else
            cout<<" ";
            
        }
        cout<<endl;
    }
    
    
return 0;
}