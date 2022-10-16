#include <iostream>
using namespace std;
int main()
{
    int i, arr[5], sum = 0, average = 0;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the"
             << " " << i << " "
             << "elements";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum;

    return 0;
}