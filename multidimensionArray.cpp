#include<iostream>
using namespace std;
int main()
{
    int A[2][3];
    int i,j;
    for ( i = 0; i <2; i++)
    {
        for ( j = 0; j <3; j++)
        {
           cout<<"Enter the numbers";
           cin>>A[i][j];

        }
        
    }
    cout<<"the matrix is:::";
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
        
    }
    
    
return 0;
}