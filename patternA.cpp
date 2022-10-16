#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 5,m;
    int mid = n / 2 + 1;
    
    cout << "Enter the value of n";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= 2*n; j++)
        {
            if (j+i ==4  && i<=n)
            {

                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}