#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the Year";
    cin >> year;
    if (year / 4 == 0)

    {
        cout << "Entered Year is leap year";
    }

    else if (year / 100 == 0)
    {

        cout << "entered year is Leap Year";
    }

    else
    {
        cout << "Entered year is Not a leap year";
    }

    return 0;
}