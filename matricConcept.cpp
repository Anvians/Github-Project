#include <iostream>
using namespace std;

int main()
{
    int A[3][3];
    int B[3][3];
    int C[3][3];
    int i;
    int j;
   
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            cout << "Enter the " << i << j << " element";
            cin >> A[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
    cout<<"------------------------------------------------------------------------------------"<<endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            cout << "Enter the " << i << j << " element";
            cin >> B[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }
    cout<<"your matrix C is"<<endl;
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
       C[i][j]=A[i][j]+B[i][j];
    
    cout<<C[i][j]<<"  ";
    }
    cout<<endl;


    
    
}

    


    return 0;
}