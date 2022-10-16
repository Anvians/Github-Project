#include <iostream>
using namespace std;
int i, n;
int number()
{

    cout << "Please enter the number:";
    cin >> n;
}
int character()
{
    int length;
    while (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            n = n / 10;
        }

        cout << "total number of digits are" << i;
    }
}
int main()
{
    number();
    character();

    return 0;
}