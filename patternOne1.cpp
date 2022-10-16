#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 5;
    int mid = n / 2 + 1;
    cout << "Enter the value of n";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (j == mid || i==n|| (i + j == mid && j <= mid))
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