#include <iostream>
using namespace std;
int main()
{
    int A[6] = {5, 9, 6, 8, 7, 3};
    int i, n;
    cout << "Enter the numbers to find";
    cin >> n;
    for (i = 0; i < 6; i++)
    {
        if (n == A[i])
        {
            cout << "your numbers is at" << i;
            return 0;
        }
    }
    cout << "invalid key!";

    return 0;
}