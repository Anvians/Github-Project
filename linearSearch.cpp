#include <iostream>
using namespace std;
int main()
{
    int n = 4, i, key;
    int A[10];
    cout << "Enter the Number";
    for (i = 0; i < n; i++)

    {
        cin >> A[i];
    }
    cout << "Enter the key";
    cin >> key;
    for (i = 0; i < n; i++)

    {
        if (key == A[i])

        {
            cout << "key found at" << i;
            return 0;
        }
    }
    cout << "Key Not Found!!";

    return 0;
}