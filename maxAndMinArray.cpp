#include <iostream>
using namespace std;
int main()
{
    int max=0, i, A[5];
    
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the " << i << " numbers";
        cin >> A[i];
    }
    max = A[0];
    for (i = 0; i < 5; i++)
    {
        
        if (A[i]>=max)
        {
            max=A[i];

        }
       
    }
     cout<<"max is"<<A[i];

    return 0;
}